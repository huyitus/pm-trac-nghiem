#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "formtaocauhoi.h"
#include "formchinhsua.h"
#include "formlb.h"

#include "../BLL/BLLManager/BLLManager.h"
#include "../DAL/DALManager.h"
#include "../BLL/ServiceInterface/IExamQuizSI.h"
#include "../DAL/Formatter.h"
#include "../BLL/QuizRecordsWrapper/QuizRecordsWrapper.h"

#include <QMessageBox>
#include <QInputDialog>
#include <vector>

BLLManager* instanceM = BLLManager::GetInstance();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    ui->fmAbout->setVisible(false);
    ui->fmNhatKy->setVisible(false);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (QMessageBox::question(this,
                              "Xác nhận",
                              "Bạn có chắc muốn thoát không?",
                              QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
    {
        BLLManager::DestroyInstance();
        DALManager::DestroyInstance();
        QApplication::quit();
    }
    event->ignore();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnTaoMoi_clicked()
{
    FormTaoCauHoi* frm = new FormTaoCauHoi;
    frm->show();
}


void MainWindow::on_btnChinhSua_clicked()
{
    FormChinhSua* frm = new FormChinhSua;
    frm->show();
}


void MainWindow::on_btnThoat_clicked()
{
    if (QMessageBox::question(this,
                              "Xác nhận",
                              "Bạn có chắc muốn thoát không?",
                              QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
    {
        BLLManager::DestroyInstance();
        DALManager::DestroyInstance();
        QApplication::quit();
    }
}

void MainWindow::on_btnLamBai_clicked()
{
    ui->fmAbout->setVisible(false);
    ui->fmLB->setVisible(true);
    ui->fmNhatKy->setVisible(false);
    ui->back->setVisible(true);
}

void MainWindow::on_btnThiID_clicked()
{

}

void MainWindow::on_btnGioiThieu_clicked()
{
    ui->fmLB->setVisible(false);
    ui->fmAbout->setVisible(true);
    ui->fmNhatKy->setVisible(false);
    ui->back->setVisible(false);
}

void MainWindow::on_btnVaoThi_clicked()
{
    IExamQuizSI* exam = nullptr;
    err_t err = instanceM->loadExamQuiz(exam, ui->txtID->text().toStdString(),
                                   ui->txtName->text().toStdU16String(),
                                   ui->txtUserID->text().toStdString());
    if (err == 1) {
        QMessageBox::critical(this, "Lỗi", "ID bộ đề không hợp lệ.");
        return;
    }
    else if (err == 2) {
        QMessageBox::critical(this, "Lỗi", "Tên, mã số không hợp lệ.");
        return;
    }
    else if (err == 3) {
        QMessageBox::critical(this, "Lỗi", "Bài thi chưa hoàn thiện.");
        return;
    }

    if (exam == nullptr)
    {
        QMessageBox::critical(this, "Lỗi", "ID bộ đề không hợp lệ.");
        return;
    }

    if (exam->authExamPass(ui->txtPass->text().toStdString()) == false)
    {
        QMessageBox::critical(this, "Lỗi", "Sai mật khẩu, hãy thử lại.");
        instanceM->closeExamQuiz(exam);
        return;
    }

    QMessageBox::information(this, "Thông báo", "Xác thực thành công.");

    this->hide();

    FormLB* frm = new FormLB(nullptr, exam, ui->txtTag->text());
    frm->show();
}

void MainWindow::on_btnNhatKy_clicked()
{
    ui->fmLB->setVisible(false);
    ui->fmAbout->setVisible(false);
    ui->fmNhatKy->setVisible(true);
    ui->back->setVisible(false);
}

void MainWindow::on_btnOK_clicked()
{
    QuizRecordsWrapper wrapper;
    int8_t load = instanceM->loadQuizRecords(ui->txtIDReport->text().toStdString(), ui->txtPassReport->text().toStdString(), wrapper);

    if (load == 1) {
        QMessageBox::critical(this,
                              "Thông báo",
                              "ID không hợp lệ");
        return;
    }
    else if (load == 2) {
        QMessageBox::critical(this,
                              "Thông báo",
                              "Mật khẩu sai");
        return;
    }

    QMessageBox::information(this,
                             "Thông báo",
                             "Xác thực thành công");

    ui->tbReport->clear();
    int n = wrapper.getLength();
    ui->tbReport->setColumnCount(5);

    QStringList labels;
    labels << "ID thí sinh" << "Họ tên" << "Điểm" << "Thời gian làm bài" << "Bắt đầu lúc";
    ui->tbReport->setHorizontalHeaderLabels(labels);

    ui->tbReport->setRowCount(n);

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
            ui->tbReport->setItem(i, j, item);
        }
    }
}
