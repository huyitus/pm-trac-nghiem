#include "formtaocauhoi.h"
#include "ui_formtaocauhoi.h"

#include "../BLL/BLLManager/BLLManager.h"
#include "../DAL/IQuestion.h"
#include "../DAL/QuizHeader.h"

#include <QMessageBox>
#include <QApplication>
#include <QProcess>
#include <QInputDialog>

IEditingQuizSI* editingQuizCreate;
BLLManager* instanceC = BLLManager::GetInstance();

int countQues = 0;
int curIDC = 0;
IQuestion* curQuesC;

int examAmount = -1;

FormTaoCauHoi::FormTaoCauHoi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTaoCauHoi)
{
    ui->setupUi(this);
    editingQuizCreate = instanceC->createNewQuiz();
    ui->tabWidget->setCurrentIndex(0);
}

void FormTaoCauHoi::closeEvent(QCloseEvent *event)
{
    delete this;
    event->accept();
}

FormTaoCauHoi::~FormTaoCauHoi()
{
    delete ui;
}

void FormTaoCauHoi::on_btnWrite_clicked()
{
    if (ui->txtCauHoi->toPlainText() == "") {
        QMessageBox::warning(this,
                             "Lỗi",
                             "Bạn chưa nhập câu hỏi!");
        return;
    }

    IQuestion* ques;
    editingQuizCreate->createNewQuestion(ques);

    ques->setQuestion(ui->txtCauHoi->toPlainText().toStdU16String());

    if (ui->optA->isChecked()) ques->setAnswerIndex(0);
    else if (ui->optB->isChecked()) ques->setAnswerIndex(1);
    else if (ui->optC->isChecked()) ques->setAnswerIndex(2);
    else ques->setAnswerIndex(3);

    ques->setMark(ui->txtScore->text().toDouble());

    ques->addChoice(ui->txtA->toPlainText().toStdU16String());
    ques->addChoice(ui->txtB->toPlainText().toStdU16String());
    ques->addChoice(ui->txtC->toPlainText().toStdU16String());
    ques->addChoice(ui->txtD->toPlainText().toStdU16String());

    if (ui->txtTags->text() != "")
    {
        QStringList listTags = ui->txtTags->text().split(",");
        for (const auto& i : listTags)
            ques->addTag(i.toStdU16String());
    }

    QMessageBox::information(this, "Thông báo", "Bạn vừa tạo thêm 1 câu.");
    showQues();
    ui->txtCauHoi->clear();
    ui->txtA->clear();
    ui->txtB->clear();
    ui->txtC->clear();
    ui->txtD->clear();
    ui->txtTags->clear();
    ui->txtScore->clear();

    countQues++;
    ui->lblCount->setText(QString::number(countQues));
}

void FormTaoCauHoi::on_btnSave_clicked()
{
    IQuizHeaderSI* header = editingQuizCreate->getQuizHeader();

    header->setExamPass(ui->txtPass->text().toStdString());
    header->setAuthorPass(ui->txtPassEdit->text().toStdString());
    header->setName(ui->txtExamName->text().toStdU16String());
    header->setAuthorName(ui->txtAuthor->text().toStdU16String());
    header->setDuration(ui->spinTime->value());

    if (ui->chkShowAnswer->isChecked()) header->setShowAnswerOption(1);
    else header->setShowAnswerOption(0);

    if (ui->chkRank->isChecked()) header->setShowRankingOption(1);
    else header->setShowRankingOption(0);

    if (ui->chkPublic->isChecked()) header->setStatus(1);
    else header->setStatus(0);

    header->setExamAmount(examAmount);

    string id = header->getID();

    err_t err = instanceC->closeEditingQuiz(editingQuizCreate, true);

    if (err == 0)
        QMessageBox::information(this, "Thông báo", "Tạo bài thi thành công. ID: " + QString::fromStdString(id));
    else if (err == 1)
        QMessageBox::critical(this, "Lỗi", "Tạo bài thi thất bại.");
    else if (err == 2)
        QMessageBox::critical(this, "Lỗi", "Tạo thất bại, bài thi không có câu nào.");

    delete this;
}

void FormTaoCauHoi::on_btnExit_clicked()
{
    delete this;
}

void FormTaoCauHoi::showQues() {
    if (editingQuizCreate->getQuestionAmount() == 0) {
        ui->txtCauHoi_2->clear();
        ui->txtA_2->clear();
        ui->txtB_2->clear();
        ui->txtC_2->clear();
        ui->txtD_2->clear();
        ui->txtTags_2->clear();
        ui->txtScore_2->clear();
    }

    curQuesC = editingQuizCreate->getEditingQuestion(curIDC);

    ui->lblIDQ->setText(QString::number(curIDC + 1));

    ui->txtCauHoi_2->setText(QString::fromStdU16String(curQuesC->getQuestion()));

    vector<std::u16string> choiceList = curQuesC->getChoiceList();
    ui->txtA_2->setText(QString::fromStdU16String(choiceList[0]));
    ui->txtB_2->setText(QString::fromStdU16String(choiceList[1]));
    ui->txtC_2->setText(QString::fromStdU16String(choiceList[2]));
    ui->txtD_2->setText(QString::fromStdU16String(choiceList[3]));

    int8_t ans = curQuesC->getAnswerIndex();

    if (ans == 0) ui->optA_2->setChecked(true);
    else if (ans == 1) ui->optB_2->setChecked(true);
    else if (ans == 2) ui->optC_2->setChecked(true);
    else ui->optD_2->setChecked(true);

    vector<std::u16string> tags = curQuesC->getTagList();
    if (tags.size() > 0)
    {
        QString temp = QString::fromStdU16String(tags[0]);
        for (int i = 1; i < int(tags.size()); i++)
        {
            temp.append(",");
            temp.append(QString::fromStdU16String(tags[i]));
        }
        ui->txtTags_2->setText(temp);
    }

    ui->txtScore_2->setText(QString::number(curQuesC->getMark()));
}

void FormTaoCauHoi::on_btnPre_clicked()
{
    if (editingQuizCreate->getQuestionAmount() == 0)
        return;
    if (curIDC == 0)
        curIDC = countQues - 1;
    else
        curIDC--;
    showQues();
}

void FormTaoCauHoi::on_btnNext_clicked()
{
    if (editingQuizCreate->getQuestionAmount() == 0)
        return;

    if (curIDC == editingQuizCreate->getQuestionAmount() - 1) {
        curIDC = 0;
    }
    else
        curIDC++;
    showQues();
}

void FormTaoCauHoi::on_btnWrite_2_clicked()
{
    if (editingQuizCreate->getQuestionAmount() == 0)
        return;

    IQuestion* ques = editingQuizCreate->getEditingQuestion(curIDC);

    ques->setQuestion(ui->txtCauHoi_2->toPlainText().toStdU16String());

    if (ui->optA_2->isChecked()) ques->setAnswerIndex(0);
    else if (ui->optB_2->isChecked()) ques->setAnswerIndex(1);
    else if (ui->optC_2->isChecked()) ques->setAnswerIndex(2);
    else if (ui->optD_2->isChecked()) ques->setAnswerIndex(3);

    ques->setMark(ui->txtScore_2->text().toDouble());

    ques->addChoice(ui->txtA_2->toPlainText().toStdU16String(), 0);
    ques->addChoice(ui->txtB_2->toPlainText().toStdU16String(), 1);
    ques->addChoice(ui->txtC_2->toPlainText().toStdU16String(), 2);
    ques->addChoice(ui->txtD_2->toPlainText().toStdU16String(), 3);

    if (ui->txtTags_2->text() != "")
    {
        QStringList listTags = ui->txtTags_2->text().split(",");
        ques->removeTag(u"");
        for (const auto& i : listTags)
            ques->addTag(i.toStdU16String());
    }

    QMessageBox::information(this, "Thông báo", "Bạn vừa sửa lại 1 câu.");
    showQues();

}

void FormTaoCauHoi::on_optAll_clicked()
{
    examAmount = -1;
}

void FormTaoCauHoi::on_optCustom_clicked()
{
    bool ok;
    int amount = QInputDialog::getInt(this, "Nhập dữ liệu", "Nhập số lượng câu hỏi",
                                      0, 0, 32767, 1, &ok);
    if (ok)
        examAmount = amount;
}

void FormTaoCauHoi::on_btnDelete_clicked()
{
    if (editingQuizCreate->getQuestionAmount() == 0)
        return;
    editingQuizCreate->removeQuestion(curIDC);
    curIDC = 0;
    showQues();
}
