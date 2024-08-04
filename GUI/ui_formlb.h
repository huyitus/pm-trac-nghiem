/********************************************************************************
** Form generated from reading UI file 'formlb.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLB_H
#define UI_FORMLB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLB
{
public:
    QLabel *label;
    QLineEdit *txtUserID;
    QLabel *label_8;
    QLineEdit *txtName;
    QLineEdit *txtTime;
    QLabel *label_2;
    QLineEdit *txtUserName;
    QLineEdit *txtRemain;
    QLineEdit *txtID;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_4;
    QFrame *fmLB;
    QRadioButton *optA;
    QLabel *label_9;
    QRadioButton *optD;
    QLabel *txtAmount;
    QLabel *lblSTT;
    QTextEdit *txtB;
    QTextEdit *txtA;
    QTextEdit *txtCauHoi;
    QLabel *label_3;
    QRadioButton *optC;
    QPushButton *btnNext;
    QPushButton *btnPre;
    QPushButton *btnSubmit;
    QRadioButton *optB;
    QRadioButton *optTemp;
    QTextEdit *txtC;
    QTextEdit *txtD;
    QFrame *fmRank;
    QLabel *label_10;
    QLabel *lblUserRank;
    QLabel *label_11;
    QPushButton *btnEnd;
    QTableWidget *tbRank;

    void setupUi(QWidget *FormLB)
    {
        if (FormLB->objectName().isEmpty())
            FormLB->setObjectName(QStringLiteral("FormLB"));
        FormLB->resize(823, 522);
        FormLB->setMinimumSize(QSize(823, 522));
        FormLB->setMaximumSize(QSize(823, 522));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/exam.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FormLB->setWindowIcon(icon);
        FormLB->setStyleSheet(QLatin1String("QWidget#FormLB {\n"
"		background-color: rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(FormLB);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 20));
        txtUserID = new QLineEdit(FormLB);
        txtUserID->setObjectName(QStringLiteral("txtUserID"));
        txtUserID->setGeometry(QRect(580, 30, 71, 26));
        txtUserID->setReadOnly(true);
        label_8 = new QLabel(FormLB);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-10, 0, 841, 75));
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(85, 170, 255, 255), stop:1 rgba(62, 126, 189, 255));"));
        txtName = new QLineEdit(FormLB);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(110, 30, 151, 26));
        txtName->setReadOnly(true);
        txtTime = new QLineEdit(FormLB);
        txtTime->setObjectName(QStringLiteral("txtTime"));
        txtTime->setGeometry(QRect(280, 30, 71, 26));
        txtTime->setReadOnly(true);
        label_2 = new QLabel(FormLB);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 10, 91, 20));
        txtUserName = new QLineEdit(FormLB);
        txtUserName->setObjectName(QStringLiteral("txtUserName"));
        txtUserName->setGeometry(QRect(410, 30, 151, 26));
        txtUserName->setReadOnly(true);
        txtRemain = new QLineEdit(FormLB);
        txtRemain->setObjectName(QStringLiteral("txtRemain"));
        txtRemain->setGeometry(QRect(670, 30, 71, 26));
        txtRemain->setReadOnly(true);
        txtID = new QLineEdit(FormLB);
        txtID->setObjectName(QStringLiteral("txtID"));
        txtID->setGeometry(QRect(20, 30, 71, 26));
        txtID->setReadOnly(true);
        label_5 = new QLabel(FormLB);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, 10, 91, 20));
        label_7 = new QLabel(FormLB);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 10, 81, 20));
        label_6 = new QLabel(FormLB);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(670, 10, 111, 20));
        label_4 = new QLabel(FormLB);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 10, 121, 20));
        fmLB = new QFrame(FormLB);
        fmLB->setObjectName(QStringLiteral("fmLB"));
        fmLB->setGeometry(QRect(10, 80, 801, 431));
        fmLB->setFrameShape(QFrame::NoFrame);
        fmLB->setFrameShadow(QFrame::Raised);
        optA = new QRadioButton(fmLB);
        optA->setObjectName(QStringLiteral("optA"));
        optA->setGeometry(QRect(10, 120, 31, 51));
        optA->setIconSize(QSize(16, 16));
        optA->setChecked(false);
        label_9 = new QLabel(fmLB);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(640, 0, 111, 26));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        optD = new QRadioButton(fmLB);
        optD->setObjectName(QStringLiteral("optD"));
        optD->setGeometry(QRect(10, 300, 31, 51));
        txtAmount = new QLabel(fmLB);
        txtAmount->setObjectName(QStringLiteral("txtAmount"));
        txtAmount->setGeometry(QRect(760, 0, 31, 26));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        txtAmount->setFont(font);
        txtAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblSTT = new QLabel(fmLB);
        lblSTT->setObjectName(QStringLiteral("lblSTT"));
        lblSTT->setGeometry(QRect(62, 0, 71, 26));
        lblSTT->setFont(font);
        txtB = new QTextEdit(fmLB);
        txtB->setObjectName(QStringLiteral("txtB"));
        txtB->setGeometry(QRect(40, 180, 751, 51));
        QFont font1;
        font1.setPointSize(9);
        txtB->setFont(font1);
        txtB->setReadOnly(true);
        txtA = new QTextEdit(fmLB);
        txtA->setObjectName(QStringLiteral("txtA"));
        txtA->setGeometry(QRect(40, 120, 751, 51));
        txtA->setFont(font1);
        txtA->setReadOnly(true);
        txtCauHoi = new QTextEdit(fmLB);
        txtCauHoi->setObjectName(QStringLiteral("txtCauHoi"));
        txtCauHoi->setGeometry(QRect(10, 30, 781, 81));
        txtCauHoi->setFont(font1);
        txtCauHoi->setReadOnly(true);
        label_3 = new QLabel(fmLB);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 51, 26));
        optC = new QRadioButton(fmLB);
        optC->setObjectName(QStringLiteral("optC"));
        optC->setGeometry(QRect(10, 240, 31, 51));
        btnNext = new QPushButton(fmLB);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(540, 370, 121, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon1);
        btnNext->setIconSize(QSize(32, 32));
        btnPre = new QPushButton(fmLB);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        btnPre->setGeometry(QRect(410, 370, 121, 51));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/icon/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPre->setIcon(icon2);
        btnPre->setIconSize(QSize(32, 32));
        btnSubmit = new QPushButton(fmLB);
        btnSubmit->setObjectName(QStringLiteral("btnSubmit"));
        btnSubmit->setGeometry(QRect(670, 370, 121, 51));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/icon/Share.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSubmit->setIcon(icon3);
        btnSubmit->setIconSize(QSize(32, 32));
        optB = new QRadioButton(fmLB);
        optB->setObjectName(QStringLiteral("optB"));
        optB->setGeometry(QRect(10, 180, 31, 51));
        optTemp = new QRadioButton(fmLB);
        optTemp->setObjectName(QStringLiteral("optTemp"));
        optTemp->setGeometry(QRect(310, 430, 31, 51));
        optTemp->setChecked(true);
        txtC = new QTextEdit(fmLB);
        txtC->setObjectName(QStringLiteral("txtC"));
        txtC->setGeometry(QRect(40, 240, 751, 51));
        txtC->setFont(font1);
        txtC->setReadOnly(true);
        txtD = new QTextEdit(fmLB);
        txtD->setObjectName(QStringLiteral("txtD"));
        txtD->setGeometry(QRect(40, 300, 751, 51));
        txtD->setFont(font1);
        txtD->setReadOnly(true);
        fmRank = new QFrame(FormLB);
        fmRank->setObjectName(QStringLiteral("fmRank"));
        fmRank->setGeometry(QRect(10, 80, 801, 431));
        fmRank->setFrameShape(QFrame::NoFrame);
        fmRank->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(fmRank);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 0, 781, 41));
        label_10->setAlignment(Qt::AlignCenter);
        lblUserRank = new QLabel(fmRank);
        lblUserRank->setObjectName(QStringLiteral("lblUserRank"));
        lblUserRank->setGeometry(QRect(100, 380, 61, 41));
        QFont font2;
        font2.setPointSize(10);
        lblUserRank->setFont(font2);
        lblUserRank->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11 = new QLabel(fmRank);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 380, 91, 41));
        btnEnd = new QPushButton(fmRank);
        btnEnd->setObjectName(QStringLiteral("btnEnd"));
        btnEnd->setGeometry(QRect(700, 380, 91, 41));
        tbRank = new QTableWidget(fmRank);
        tbRank->setObjectName(QStringLiteral("tbRank"));
        tbRank->setGeometry(QRect(10, 40, 781, 331));
        label_8->raise();
        label->raise();
        txtUserID->raise();
        txtName->raise();
        txtTime->raise();
        label_2->raise();
        txtUserName->raise();
        txtRemain->raise();
        txtID->raise();
        label_5->raise();
        label_7->raise();
        label_6->raise();
        label_4->raise();
        fmRank->raise();
        fmLB->raise();

        retranslateUi(FormLB);

        QMetaObject::connectSlotsByName(FormLB);
    } // setupUi

    void retranslateUi(QWidget *FormLB)
    {
        FormLB->setWindowTitle(QApplication::translate("FormLB", "L\303\240m b\303\240i", Q_NULLPTR));
        label->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">ID b\341\273\231 \304\221\341\273\201:</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QString());
        label_2->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">T\303\252n b\303\240i thi:</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">T\303\252n th\303\255 sinh:</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">M\303\243 th\303\255 sinh:</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Th\341\273\235i gian c\303\262n l\341\272\241i:</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Th\341\273\235i gian l\303\240m b\303\240i:</span></p></body></html>", Q_NULLPTR));
        optA->setText(QString());
        label_9->setText(QApplication::translate("FormLB", "S\341\273\221 l\306\260\341\273\243ng c\303\242u h\341\273\217i:", Q_NULLPTR));
        optD->setText(QString());
        txtAmount->setText(QApplication::translate("FormLB", "1", Q_NULLPTR));
        lblSTT->setText(QApplication::translate("FormLB", "1", Q_NULLPTR));
        label_3->setText(QApplication::translate("FormLB", "C\303\242u s\341\273\221:", Q_NULLPTR));
        optC->setText(QString());
        btnNext->setText(QApplication::translate("FormLB", " C\303\242u sau", Q_NULLPTR));
        btnPre->setText(QApplication::translate("FormLB", " C\303\242u tr\306\260\341\273\233c", Q_NULLPTR));
        btnSubmit->setText(QApplication::translate("FormLB", " N\341\273\231p b\303\240i", Q_NULLPTR));
        optB->setText(QString());
        optTemp->setText(QString());
        label_10->setText(QApplication::translate("FormLB", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">X\341\272\276P H\341\272\240NG TRONG B\303\200I THI N\303\200Y</span></p></body></html>", Q_NULLPTR));
        lblUserRank->setText(QString());
        label_11->setText(QApplication::translate("FormLB", "H\341\272\241ng c\341\273\247a b\341\272\241n:", Q_NULLPTR));
        btnEnd->setText(QApplication::translate("FormLB", "K\341\272\277t th\303\272c", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormLB: public Ui_FormLB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLB_H
