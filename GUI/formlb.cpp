#include "formlb.h"
#include "ui_formlb.h"

#include <QWidget>
#include <vector>
#include <QDebug>
#include <QMessageBox>
#include <QApplication>
#include <QProcess>
#include <QTableView>

#include "../BLL/BLLManager/BLLManager.h"
#include "../BLL/ServiceInterface/IExamQuizSI.h"
#include "../BLL/ServiceInterface/IQuizHeaderSI.h"
#include "../BLL/ServiceInterface/IExamQuestionSI.h"
#include "../DAL/IQuizRecord.h"
#include "../DAL/TimeStamp.h"
#include "../BLL/QuizRecordsWrapper/QuizRecordsWrapper.h"

using namespace std;

int curID = 0;

vector<IExamQuestionSI*> listQ;
vector<u16string> tag;

BLLManager* instanceD = BLLManager::GetInstance();
IExamQuizSI *exam;
IQuizHeaderSI *header;

void restart()
{
    BLLManager::DestroyInstance();
    DALManager::DestroyInstance();
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

FormLB::FormLB(QWidget *parent, IExamQuizSI *&_exam, QString _tag) :
    QWidget(parent),
    ui(new Ui::FormLB)
{
    ui->setupUi(this);
    exam = _exam;
    header = exam->getQuizHeader();

    if (_tag.size() > 0)
    {
        QStringList listTags = _tag.split(",");
        for (const auto& i : listTags)
            tag.push_back(i.toStdU16String());
    }

    init();
}

void FormLB::closeEvent(QCloseEvent *event)
{
    event->ignore();
}

void FormLB::showQuiz()
{
    IExamQuestionSI* curQues = listQ[curID];
    ui->lblSTT->setText(QString::number(curID + 1));
    ui->txtCauHoi->setText(QString::fromStdU16String(curQues->getQuestion()));
    vector<u16string> choice = curQues->getChoiceList();
    ui->txtA->setText(QString::fromStdU16String(choice[0]));
    ui->txtB->setText(QString::fromStdU16String(choice[1]));
    ui->txtC->setText(QString::fromStdU16String(choice[2]));
    ui->txtD->setText(QString::fromStdU16String(choice[3]));
    int choiceVal = listQ[curID]->getExamineeChoice();
    if (choiceVal == 0)
        ui->optA->setChecked(true);
    else if (choiceVal == 1)
        ui->optB->setChecked(true);
    else if (choiceVal == 2)
        ui->optC->setChecked(true);
    else if (choiceVal == 3)
        ui->optD->setChecked(true);
    else
        ui->optTemp->setChecked(true);
}

void FormLB::submitExam()
{
    timer->stop();

    IQuizRecord* rec = exam->submit();
    TimeStamp stamp = rec->getStartStamp();
    QMessageBox::information(this,
                             "Hoàn thành!",
                             "Thời gian của bạn: " + QString::number(rec->getExamTime()) + " giây\n" +
                             "Tên thí sinh: " + QString::fromStdU16String(rec->getExamineeName()) + "\n" +
                             "ID thí sinh: " + QString::fromStdString(rec->getExamineeID()) + "\n" +
                             "Điểm: " + QString::number(rec->getMark()) + "\n" +
                             "Thời gian bắt đầu: " + QString::fromStdString(stamp.toString()));

    QString listAnswer = "";

    if (header->getShowAnswerOption() == 1) {
        for (int i = 0; i < (int)listQ.size(); i++) {
            bool check = listQ[i]->checkResult();
            if (check == true)
                listAnswer += "Câu " + QString::number(i + 1) + ": " + "Đúng" + "\n";
            else
                listAnswer += "Câu " + QString::number(i + 1) + ": " + "Sai" + "\n";
        }
        QMessageBox::information(this,
                                 "Chấm bài",
                                 listAnswer);
    }

    header->setStatus(1);

    if (header->getShowRankingOption() > 0) {

        ui->fmLB->setVisible(false);
        ui->fmRank->setVisible(true);

        QuizRecordsWrapper wrapper;
        int userRank = 0;

        exam->getRanking(wrapper, userRank);
        ui->lblUserRank->setText(QString::number(userRank));

        int n = wrapper.getLength();

        ui->tbRank->setRowCount(n);
        ui->tbRank->setColumnCount(5);

        QStringList labels;
        labels << "ID thí sinh" << "Tên" << "Điểm" << "Thời gian đã làm (giây)" << "Bắt đầu lúc";
        ui->tbRank->setHorizontalHeaderLabels(labels);

        for (int i = 0; i < n; i++) {
            QTableWidgetItem *item = nullptr;
            IQuizRecord *record = wrapper.getAt(i);
            for (int j = 0; j < 5; j++) {
                item = new QTableWidgetItem;
                if (j == 0)
                    item->setText(QString::fromStdString(record->getExamineeID()));
                else if (j == 1)
                    item->setText(QString::fromStdU16String(record->getExamineeName()));
                else if (j == 2)
                    item->setText(QString::number(record->getMark()));
                else if (j == 3)
                    item->setText(QString::number(record->getExamTime()));
                else if (j == 4)
                    item->setText(QString::fromStdString(record->getStartStamp().toString()));
                ui->tbRank->setItem(i, j, item);
            }
        }
    }
    else {
        instanceD->closeExamQuiz(exam);
        delete this;
        restart();
    }
}

void FormLB::timeUpdate()
{
    ICountDownValue* cdown = exam->getRemainingTime();

    ui->txtRemain->setText(QString::number(cdown->getMin()) + ":" + QString::number(cdown->getSec()));

    if (cdown->isTimeOver())
        submitExam();
}

void FormLB::init()
{
    exam->generateQuestions(tag, listQ);
    if (listQ.size() == 0)
    {
        instanceD->closeExamQuiz(exam);
        QMessageBox::warning(this, "Thông báo", "Số lượng câu hỏi bằng 0.");
        restart();
    }

    ui->fmRank->setVisible(false);

    ui->txtID->setText(QString::fromStdString(exam->getID()));
    ui->txtName->setText(QString::fromStdU16String(header->getName()));
    ui->txtTime->setText(QString::number(header->getDuration()));
    ui->txtUserName->setText(QString::fromStdU16String(exam->getExamineeName()));
    ui->txtUserID->setText(QString::fromStdString(exam->getExamineeID()));

    ui->optTemp->setVisible(false);


    ui->txtAmount->setText(QString::number(int(listQ.size())));

    showQuiz();

    exam->startQuiz();

    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(timeUpdate()));
    if (exam->isHasTimeCountDown())
        timer->start(1000);
}

FormLB::~FormLB()
{
    delete ui;
}

void FormLB::on_btnSubmit_clicked()
{
    if (QMessageBox::question(this,
                              "Xác nhận",
                              "Bạn có chắc muốn nộp bài không?",
                              QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
        submitExam();
}

void FormLB::on_btnNext_clicked()
{
    curID++;
    if (curID == int(listQ.size()))
        curID = 0;
    showQuiz();
}

void FormLB::on_btnPre_clicked()
{
    curID--;
    if (curID < 0)
        curID = listQ.size() - 1;
    showQuiz();
}

void FormLB::on_optA_clicked()
{
    listQ[curID]->setExamineeChoice(0);
}

void FormLB::on_optB_clicked()
{
    listQ[curID]->setExamineeChoice(1);
}

void FormLB::on_optC_clicked()
{
    listQ[curID]->setExamineeChoice(2);
}

void FormLB::on_optD_clicked()
{
    listQ[curID]->setExamineeChoice(3);
}

void FormLB::on_btnEnd_clicked()
{
    instanceD->closeExamQuiz(exam);
    delete this;
    restart();
}
