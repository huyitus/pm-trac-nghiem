#include "formchinhsua.h"
#include "ui_formchinhsua.h"

#include "../BLL/BLLManager/BLLManager.h"
#include "../DAL/IQuestion.h"
#include "../DAL/QuizHeader.h"

#include <QMessageBox>
#include <QDebug>
#include <vector>
#include <QInputDialog>

BLLManager* instanceE = BLLManager::GetInstance();

IEditingQuizSI* editingQuiz;
IQuestion* curQues;

int curQuesID = 0;

int examAmountE;

FormChinhSua::FormChinhSua(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChinhSua)
{
    ui->setupUi(this);
    initControls();
}

void FormChinhSua::closeEvent(QCloseEvent *event)
{
    delete this;
    event->accept();
}

void FormChinhSua::hienCauHoi()
{
    if (editingQuiz->getQuestionAmount() == 0)
        return;

    curQues = editingQuiz->getEditingQuestion(curQuesID);

    ui->lblSTT->setText(QString::number(curQuesID + 1));

    ui->txtCauHoi->setText(QString::fromStdU16String(curQues->getQuestion()));

    vector<std::u16string> choiceList = curQues->getChoiceList();
    ui->txtA->setText(QString::fromStdU16String(choiceList[0]));
    ui->txtB->setText(QString::fromStdU16String(choiceList[1]));
    ui->txtC->setText(QString::fromStdU16String(choiceList[2]));
    ui->txtD->setText(QString::fromStdU16String(choiceList[3]));

    int8_t ans = curQues->getAnswerIndex();

    if (ans == 0) ui->optA->setChecked(true);
    else if (ans == 1) ui->optB->setChecked(true);
    else if (ans == 2) ui->optC->setChecked(true);
    else ui->optD->setChecked(true);

    vector<std::u16string> tags = curQues->getTagList();
    if (tags.size() > 0)
    {
        QString temp = QString::fromStdU16String(tags[0]);
        for (int i = 1; i < int(tags.size()); i++)
        {
            temp.append(",");
            temp.append(QString::fromStdU16String(tags[i]));
        }
        ui->txtTags->setText(temp);
    }

    ui->txtScore->setText(QString::number(curQues->getMark()));
}

void FormChinhSua::hienThongTin()
{
    IQuizHeaderSI* header = editingQuiz->getQuizHeader();

    ui->txtPassExam->setText(QString::fromStdString(header->getExamPass()));
    ui->txtPassEdit->setText(QString::fromStdString(header->getAuthorPass()));
    ui->txtName->setText(QString::fromStdU16String(header->getName()));
    ui->txtAuthor->setText(QString::fromStdU16String(header->getAuthorName()));
    ui->spinTime->setValue(header->getDuration());
    if (header->getShowAnswerOption()) ui->chkShowAnswer->setChecked(1);
    else ui->chkShowAnswer->setChecked(0);
    if (header->getShowRankingOption()) ui->chkRank->setChecked(1);
    else ui->chkRank->setChecked(0);
    examAmountE = header->getExamAmount();
    if (examAmountE == -1)
        ui->optAll->setChecked(1);
    else
        ui->optCustom->setChecked(1);
}

void FormChinhSua::initControls()
{
    ui->frame->setEnabled(false);
    ui->btnSave->setEnabled(false);
}

FormChinhSua::~FormChinhSua()
{
    delete ui;
}

void FormChinhSua::on_btnCheck_clicked()
{
    editingQuiz = instanceE->loadEditingQuiz(ui->txtID->text().toStdString());

    if (!editingQuiz)
    {
        QMessageBox::critical(this, "Lỗi", "ID bạn nhập không đúng, hãy kiểm tra lại.");
        return;
    }

    editingQuiz->authAuthorPass(ui->txtPass->text().toStdString());

    if (!editingQuiz->isAuthenticated())
    {
        QMessageBox::critical(this, "Lỗi", "Mật khẩu bạn nhập không đúng, hãy kiểm tra lại.");
        return;
    }

    QMessageBox::information(this, "Thông báo", "Xác thực thành công!");

    ui->frame->setEnabled(true);
    ui->btnSave->setEnabled(true);

    hienThongTin();
    hienCauHoi();
}


void FormChinhSua::on_btnExit_clicked()
{
    instanceE->closeEditingQuiz(editingQuiz, 0);
    delete this;
}

void FormChinhSua::on_btnNext_clicked()
{
    if (curQuesID < editingQuiz->getQuestionAmount() - 1)
    {
        curQuesID++;
        hienCauHoi();
    }
    else if (curQuesID == editingQuiz->getQuestionAmount() - 1)
    {
        curQuesID = 0;
        hienCauHoi();
    }
}

void FormChinhSua::on_btnPre_clicked()
{
    if (curQuesID > 0)
    {
        curQuesID--;
        hienCauHoi();
    }
    else if (curQuesID == 0)
    {
        curQuesID = editingQuiz->getQuestionAmount() - 1;
        hienCauHoi();
    }
}

void FormChinhSua::on_btnWrite_clicked()
{
    curQues->setQuestion(ui->txtCauHoi->toPlainText().toStdU16String());

    curQues->addChoice(ui->txtA->toPlainText().toStdU16String(), 0);
    curQues->addChoice(ui->txtB->toPlainText().toStdU16String(), 1);
    curQues->addChoice(ui->txtC->toPlainText().toStdU16String(), 2);
    curQues->addChoice(ui->txtD->toPlainText().toStdU16String(), 3);

    if (ui->optA->isChecked()) curQues->setAnswerIndex(0);
    else if (ui->optB->isChecked()) curQues->setAnswerIndex(1);
    else if (ui->optC->isChecked()) curQues->setAnswerIndex(2);
    else curQues->setAnswerIndex(3);

    vector<u16string> tagListOld = curQues->getTagList();
    for (const auto& i : tagListOld)
        curQues->removeTag(i);

    if (ui->txtTags->text() != "")
    {
        QStringList listTags = ui->txtTags->text().split(",");
        for (const auto& i : listTags)
            curQues->addTag(i.toStdU16String());
    }

    curQues->setMark(ui->txtScore->text().toDouble());

    QMessageBox::information(this, "Thông báo", "Chỉnh sửa câu hỏi thành công.");
}

void FormChinhSua::on_btnSave_clicked()
{
    IQuizHeaderSI* header = editingQuiz->getQuizHeader();

    header->setName(ui->txtName->text().toStdU16String());
    header->setAuthorName(ui->txtAuthor->text().toStdU16String());
    header->setDuration(ui->spinTime->value());
    header->setExamPass(ui->txtPassExam->text().toStdString());
    header->setAuthorPass(ui->txtPassEdit->text().toStdString());

    if (ui->chkSTT->isChecked())
        header->setStatus(1);
    else
        header->setStatus(0);
    if (ui->chkShowAnswer->isChecked())

        header->setShowAnswerOption(1);
    else
        header->setShowAnswerOption(0);

    header->setExamAmount(examAmountE);

    err_t err = instanceE->closeEditingQuiz(editingQuiz, true);

    if (err == 0)
        QMessageBox::information(this, "Thông báo", "Lưu bộ đề thành công.");
    else if (err == 1)
        QMessageBox::critical(this, "Thông báo", "Lưu bộ đề thất bại.");
    else if (err == 2)
        QMessageBox::critical(this, "Thông báo", "Lưu thất bại, bài thi không có câu nào.");

    delete this;
}

void FormChinhSua::on_btnWrite_2_clicked()
{
    IQuestion* newQues;
    editingQuiz->createNewQuestion(newQues);

    newQues->setQuestion(ui->txtCauHoi_2->toPlainText().toStdU16String());

    newQues->addChoice(ui->txtA_2->toPlainText().toStdU16String(), 0);
    newQues->addChoice(ui->txtB_2->toPlainText().toStdU16String(), 1);
    newQues->addChoice(ui->txtC_2->toPlainText().toStdU16String(), 2);
    newQues->addChoice(ui->txtD_2->toPlainText().toStdU16String(), 3);

    if (ui->optA_2->isChecked()) newQues->setAnswerIndex(0);
    else if (ui->optB_2->isChecked()) newQues->setAnswerIndex(1);
    else if (ui->optC_2->isChecked()) newQues->setAnswerIndex(2);
    else newQues->setAnswerIndex(3);

    if (ui->txtTags_2->text() != "")
    {
        QStringList listTags = ui->txtTags_2->text().split(",");
        for (const auto& i : listTags)
            newQues->addTag(i.toStdU16String());
    }

    newQues->setMark(ui->txtScore_2->text().toDouble());

    QMessageBox::information(this, "Thông báo", "Thêm câu hỏi thành công.");
}

void FormChinhSua::on_btnDelete_clicked()
{
    if (editingQuiz->getQuestionAmount() == 0)
        return;

    if (QMessageBox::question(this,
                              "Xác nhận",
                              "Bạn có chắc muốn xóa câu hỏi này không?",
                              QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
    {
        editingQuiz->removeQuestion(curQuesID);

        if (editingQuiz->getQuestionAmount() == 0)
        {
            ui->txtCauHoi->clear();

            ui->txtA->clear();
            ui->txtB->clear();
            ui->txtC->clear();
            ui->txtD->clear();

            ui->txtTags->clear();
            ui->txtScore->clear();

            return;
        }

        curQuesID = 0;
        hienCauHoi();
    }
}

void FormChinhSua::on_optAll_clicked()
{
    examAmountE = -1;
}

void FormChinhSua::on_optCustom_clicked()
{
    bool ok;
    int amount = QInputDialog::getInt(this, "Nhập dữ liệu", "Nhập số lượng câu hỏi",
                                      0, 0, 32767, 1, &ok);
    if (ok && amount <= editingQuiz->getQuestionAmount())
        examAmountE = amount;
}
