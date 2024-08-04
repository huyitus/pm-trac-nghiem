/********************************************************************************
** Form generated from reading UI file 'formchinhsua.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCHINHSUA_H
#define UI_FORMCHINHSUA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormChinhSua
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtPass;
    QPushButton *btnCheck;
    QLabel *label_8;
    QFrame *frame;
    QTabWidget *tabMain;
    QWidget *tab;
    QRadioButton *optD;
    QRadioButton *optC;
    QLabel *lblSTT;
    QRadioButton *optA;
    QLabel *label_3;
    QRadioButton *optB;
    QPushButton *btnDelete;
    QPushButton *btnWrite;
    QPushButton *btnNext;
    QPushButton *btnPre;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *txtTags;
    QLineEdit *txtScore;
    QTextEdit *txtCauHoi;
    QTextEdit *txtA;
    QTextEdit *txtB;
    QTextEdit *txtC;
    QTextEdit *txtD;
    QWidget *tab_2;
    QRadioButton *optA_2;
    QRadioButton *optB_2;
    QRadioButton *optD_2;
    QRadioButton *optC_2;
    QPushButton *btnWrite_2;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *txtTags_2;
    QLineEdit *txtScore_2;
    QTextEdit *txtB_2;
    QTextEdit *txtD_2;
    QTextEdit *txtA_2;
    QTextEdit *txtCauHoi_2;
    QTextEdit *txtC_2;
    QLineEdit *txtName;
    QLineEdit *txtPassExam;
    QLabel *label_12;
    QSpinBox *spinTime;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_14;
    QLineEdit *txtPassEdit;
    QLineEdit *txtAuthor;
    QLabel *label_15;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *optAll;
    QRadioButton *optCustom;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkSTT;
    QCheckBox *chkShowAnswer;
    QCheckBox *chkRank;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *btnExit;
    QPushButton *btnSave;
    QLineEdit *txtID;

    void setupUi(QWidget *FormChinhSua)
    {
        if (FormChinhSua->objectName().isEmpty())
            FormChinhSua->setObjectName(QStringLiteral("FormChinhSua"));
        FormChinhSua->resize(921, 642);
        FormChinhSua->setMinimumSize(QSize(921, 642));
        FormChinhSua->setMaximumSize(QSize(921, 642));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/edit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FormChinhSua->setWindowIcon(icon);
        FormChinhSua->setStyleSheet(QLatin1String("QWidget#FormChinhSua{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(FormChinhSua);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 20));
        label_2 = new QLabel(FormChinhSua);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 10, 91, 20));
        txtPass = new QLineEdit(FormChinhSua);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setGeometry(QRect(150, 30, 113, 26));
        txtPass->setEchoMode(QLineEdit::Password);
        btnCheck = new QPushButton(FormChinhSua);
        btnCheck->setObjectName(QStringLiteral("btnCheck"));
        btnCheck->setGeometry(QRect(280, 30, 61, 26));
        label_8 = new QLabel(FormChinhSua);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-20, 0, 1161, 75));
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(85, 170, 255, 255), stop:1 rgba(62, 126, 189, 255));"));
        frame = new QFrame(FormChinhSua);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 84, 891, 551));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        tabMain = new QTabWidget(frame);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabMain->setEnabled(true);
        tabMain->setGeometry(QRect(0, 110, 881, 431));
        tabMain->setStyleSheet(QLatin1String("QTabWidget#tabMain{\n"
"background-color: rgb(252, 252, 252);\n"
"}"));
        tabMain->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        optD = new QRadioButton(tab);
        optD->setObjectName(QStringLiteral("optD"));
        optD->setGeometry(QRect(20, 280, 31, 41));
        optC = new QRadioButton(tab);
        optC->setObjectName(QStringLiteral("optC"));
        optC->setGeometry(QRect(20, 230, 31, 41));
        lblSTT = new QLabel(tab);
        lblSTT->setObjectName(QStringLiteral("lblSTT"));
        lblSTT->setGeometry(QRect(70, 10, 63, 26));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblSTT->setFont(font);
        optA = new QRadioButton(tab);
        optA->setObjectName(QStringLiteral("optA"));
        optA->setGeometry(QRect(20, 130, 31, 41));
        optA->setChecked(true);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 51, 26));
        optB = new QRadioButton(tab);
        optB->setObjectName(QStringLiteral("optB"));
        optB->setGeometry(QRect(20, 180, 31, 41));
        btnDelete = new QPushButton(tab);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setGeometry(QRect(750, 344, 111, 41));
        btnDelete->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon1);
        btnDelete->setIconSize(QSize(24, 24));
        btnWrite = new QPushButton(tab);
        btnWrite->setObjectName(QStringLiteral("btnWrite"));
        btnWrite->setGeometry(QRect(630, 344, 111, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/icon/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWrite->setIcon(icon2);
        btnWrite->setIconSize(QSize(24, 24));
        btnNext = new QPushButton(tab);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(510, 344, 111, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon3);
        btnNext->setIconSize(QSize(24, 24));
        btnPre = new QPushButton(tab);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        btnPre->setGeometry(QRect(390, 344, 111, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/icon/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPre->setIcon(icon4);
        btnPre->setIconSize(QSize(24, 24));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 336, 131, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 336, 131, 20));
        txtTags = new QLineEdit(tab);
        txtTags->setObjectName(QStringLiteral("txtTags"));
        txtTags->setGeometry(QRect(20, 356, 113, 25));
        txtScore = new QLineEdit(tab);
        txtScore->setObjectName(QStringLiteral("txtScore"));
        txtScore->setGeometry(QRect(140, 356, 113, 25));
        txtCauHoi = new QTextEdit(tab);
        txtCauHoi->setObjectName(QStringLiteral("txtCauHoi"));
        txtCauHoi->setGeometry(QRect(20, 40, 841, 81));
        txtA = new QTextEdit(tab);
        txtA->setObjectName(QStringLiteral("txtA"));
        txtA->setGeometry(QRect(50, 130, 811, 41));
        txtB = new QTextEdit(tab);
        txtB->setObjectName(QStringLiteral("txtB"));
        txtB->setGeometry(QRect(50, 180, 811, 41));
        txtC = new QTextEdit(tab);
        txtC->setObjectName(QStringLiteral("txtC"));
        txtC->setGeometry(QRect(50, 230, 811, 41));
        txtD = new QTextEdit(tab);
        txtD->setObjectName(QStringLiteral("txtD"));
        txtD->setGeometry(QRect(50, 280, 811, 41));
        tabMain->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        optA_2 = new QRadioButton(tab_2);
        optA_2->setObjectName(QStringLiteral("optA_2"));
        optA_2->setGeometry(QRect(20, 130, 31, 41));
        optA_2->setChecked(true);
        optB_2 = new QRadioButton(tab_2);
        optB_2->setObjectName(QStringLiteral("optB_2"));
        optB_2->setGeometry(QRect(20, 180, 31, 41));
        optD_2 = new QRadioButton(tab_2);
        optD_2->setObjectName(QStringLiteral("optD_2"));
        optD_2->setGeometry(QRect(20, 280, 31, 41));
        optC_2 = new QRadioButton(tab_2);
        optC_2->setObjectName(QStringLiteral("optC_2"));
        optC_2->setGeometry(QRect(20, 230, 31, 41));
        btnWrite_2 = new QPushButton(tab_2);
        btnWrite_2->setObjectName(QStringLiteral("btnWrite_2"));
        btnWrite_2->setGeometry(QRect(750, 344, 111, 41));
        btnWrite_2->setIcon(icon2);
        btnWrite_2->setIconSize(QSize(24, 24));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 101, 26));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 336, 131, 20));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 336, 131, 20));
        txtTags_2 = new QLineEdit(tab_2);
        txtTags_2->setObjectName(QStringLiteral("txtTags_2"));
        txtTags_2->setGeometry(QRect(20, 356, 113, 25));
        txtScore_2 = new QLineEdit(tab_2);
        txtScore_2->setObjectName(QStringLiteral("txtScore_2"));
        txtScore_2->setGeometry(QRect(140, 356, 113, 25));
        txtB_2 = new QTextEdit(tab_2);
        txtB_2->setObjectName(QStringLiteral("txtB_2"));
        txtB_2->setGeometry(QRect(50, 180, 811, 41));
        txtD_2 = new QTextEdit(tab_2);
        txtD_2->setObjectName(QStringLiteral("txtD_2"));
        txtD_2->setGeometry(QRect(50, 280, 811, 41));
        txtA_2 = new QTextEdit(tab_2);
        txtA_2->setObjectName(QStringLiteral("txtA_2"));
        txtA_2->setGeometry(QRect(50, 130, 811, 41));
        txtCauHoi_2 = new QTextEdit(tab_2);
        txtCauHoi_2->setObjectName(QStringLiteral("txtCauHoi_2"));
        txtCauHoi_2->setGeometry(QRect(20, 40, 841, 81));
        txtC_2 = new QTextEdit(tab_2);
        txtC_2->setObjectName(QStringLiteral("txtC_2"));
        txtC_2->setGeometry(QRect(50, 230, 811, 41));
        tabMain->addTab(tab_2, QString());
        txtName = new QLineEdit(frame);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(0, 20, 171, 25));
        txtPassExam = new QLineEdit(frame);
        txtPassExam->setObjectName(QStringLiteral("txtPassExam"));
        txtPassExam->setGeometry(QRect(190, 20, 131, 25));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 0, 81, 20));
        spinTime = new QSpinBox(frame);
        spinTime->setObjectName(QStringLiteral("spinTime"));
        spinTime->setGeometry(QRect(340, 20, 111, 26));
        spinTime->setMinimum(1);
        spinTime->setMaximum(1000);
        spinTime->setSingleStep(15);
        spinTime->setValue(60);
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 0, 111, 20));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 0, 81, 20));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(190, 50, 101, 20));
        txtPassEdit = new QLineEdit(frame);
        txtPassEdit->setObjectName(QStringLiteral("txtPassEdit"));
        txtPassEdit->setGeometry(QRect(190, 70, 131, 25));
        txtAuthor = new QLineEdit(frame);
        txtAuthor->setObjectName(QStringLiteral("txtAuthor"));
        txtAuthor->setGeometry(QRect(0, 70, 171, 25));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 50, 101, 20));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(690, 10, 191, 91));
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 84, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        optAll = new QRadioButton(layoutWidget);
        optAll->setObjectName(QStringLiteral("optAll"));
        optAll->setChecked(true);

        verticalLayout_2->addWidget(optAll);

        optCustom = new QRadioButton(layoutWidget);
        optCustom->setObjectName(QStringLiteral("optCustom"));

        verticalLayout_2->addWidget(optCustom);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(470, 10, 201, 91));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox_2->setFont(font1);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 174, 74));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chkSTT = new QCheckBox(layoutWidget1);
        chkSTT->setObjectName(QStringLiteral("chkSTT"));
        chkSTT->setCheckable(true);
        chkSTT->setChecked(true);

        verticalLayout->addWidget(chkSTT);

        chkShowAnswer = new QCheckBox(layoutWidget1);
        chkShowAnswer->setObjectName(QStringLiteral("chkShowAnswer"));
        chkShowAnswer->setCheckable(true);
        chkShowAnswer->setChecked(false);

        verticalLayout->addWidget(chkShowAnswer);

        chkRank = new QCheckBox(layoutWidget1);
        chkRank->setObjectName(QStringLiteral("chkRank"));
        chkRank->setCheckable(true);
        chkRank->setChecked(false);

        verticalLayout->addWidget(chkRank);

        label_16 = new QLabel(frame);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(480, 0, 71, 20));
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(700, 0, 161, 20));
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_17->setScaledContents(false);
        btnExit = new QPushButton(FormChinhSua);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(850, 10, 50, 50));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/icon/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon5);
        btnExit->setIconSize(QSize(32, 32));
        btnSave = new QPushButton(FormChinhSua);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setEnabled(true);
        btnSave->setGeometry(QRect(790, 10, 50, 50));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon6);
        btnSave->setIconSize(QSize(32, 32));
        txtID = new QLineEdit(FormChinhSua);
        txtID->setObjectName(QStringLiteral("txtID"));
        txtID->setGeometry(QRect(20, 30, 113, 26));
        label_8->raise();
        label->raise();
        label_2->raise();
        txtPass->raise();
        btnCheck->raise();
        frame->raise();
        btnExit->raise();
        btnSave->raise();
        txtID->raise();

        retranslateUi(FormChinhSua);

        tabMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormChinhSua);
    } // setupUi

    void retranslateUi(QWidget *FormChinhSua)
    {
        FormChinhSua->setWindowTitle(QApplication::translate("FormChinhSua", "Ch\341\273\211nh s\341\273\255a b\341\273\231 \304\221\341\273\201", Q_NULLPTR));
        label->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">ID b\341\273\231 \304\221\341\273\201:</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">M\341\272\255t kh\341\272\251u s\341\273\255a:</span></p></body></html>", Q_NULLPTR));
        btnCheck->setText(QApplication::translate("FormChinhSua", "OK", Q_NULLPTR));
        label_8->setText(QString());
        optD->setText(QString());
        optC->setText(QString());
        lblSTT->setText(QApplication::translate("FormChinhSua", "1", Q_NULLPTR));
        optA->setText(QString());
        label_3->setText(QApplication::translate("FormChinhSua", "C\303\242u s\341\273\221:", Q_NULLPTR));
        optB->setText(QString());
        btnDelete->setText(QApplication::translate("FormChinhSua", " X\303\263a", Q_NULLPTR));
        btnWrite->setText(QApplication::translate("FormChinhSua", " Ghi", Q_NULLPTR));
        btnNext->setText(QApplication::translate("FormChinhSua", " C\303\242u sau", Q_NULLPTR));
        btnPre->setText(QApplication::translate("FormChinhSua", " C\303\242u tr\306\260\341\273\233c", Q_NULLPTR));
        label_7->setText(QApplication::translate("FormChinhSua", "\304\220i\341\273\203m cho c\303\242u:", Q_NULLPTR));
        label_6->setText(QApplication::translate("FormChinhSua", "Tag (c\303\241ch b\341\273\237i \",\"):", Q_NULLPTR));
        tabMain->setTabText(tabMain->indexOf(tab), QApplication::translate("FormChinhSua", "S\341\273\255a, x\303\263a c\303\242u h\341\273\217i", Q_NULLPTR));
        optA_2->setText(QString());
        optB_2->setText(QString());
        optD_2->setText(QString());
        optC_2->setText(QString());
        btnWrite_2->setText(QApplication::translate("FormChinhSua", " Ghi", Q_NULLPTR));
        label_4->setText(QApplication::translate("FormChinhSua", "Nh\341\272\255p c\303\242u h\341\273\217i:", Q_NULLPTR));
        label_9->setText(QApplication::translate("FormChinhSua", "Tag (c\303\241ch b\341\273\237i \",\"):", Q_NULLPTR));
        label_10->setText(QApplication::translate("FormChinhSua", "\304\220i\341\273\203m cho c\303\242u:", Q_NULLPTR));
        tabMain->setTabText(tabMain->indexOf(tab_2), QApplication::translate("FormChinhSua", "B\341\273\225 sung c\303\242u h\341\273\217i", Q_NULLPTR));
        label_12->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">Th\341\273\235i gian:</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">M\341\272\255t kh\341\272\251u thi:</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">T\303\252n b\341\273\231 \304\221\341\273\201:</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">M\341\272\255t kh\341\272\251u s\341\273\255a:</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">T\303\241c gi\341\272\243:</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        optAll->setText(QApplication::translate("FormChinhSua", "T\341\272\245t c\341\272\243", Q_NULLPTR));
        optCustom->setText(QApplication::translate("FormChinhSua", "T\303\271y ch\341\273\211nh", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        chkSTT->setText(QApplication::translate("FormChinhSua", "Xu\341\272\245t b\341\272\243n", Q_NULLPTR));
        chkShowAnswer->setText(QApplication::translate("FormChinhSua", "Xem \304\221\303\241p \303\241n khi l\303\240m xong", Q_NULLPTR));
        chkRank->setText(QApplication::translate("FormChinhSua", "X\341\272\277p h\341\272\241ng khi l\303\240m xong", Q_NULLPTR));
        label_16->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">T\303\271y ch\341\273\215n:</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("FormChinhSua", "<html><head/><body><p><span style=\" font-weight:600;\">S\341\273\221 c\303\242u cho th\303\255 sinh l\303\240m:</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExit->setToolTip(QApplication::translate("FormChinhSua", "Tho\303\241t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExit->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("FormChinhSua", "L\306\260u l\341\272\241i", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormChinhSua: public Ui_FormChinhSua {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCHINHSUA_H
