/********************************************************************************
** Form generated from reading UI file 'formtaocauhoi.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTAOCAUHOI_H
#define UI_FORMTAOCAUHOI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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

class Ui_FormTaoCauHoi
{
public:
    QLabel *label;
    QLineEdit *txtPass;
    QLineEdit *txtPassEdit;
    QLineEdit *txtExamName;
    QSpinBox *spinTime;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtAuthor;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *txtScore;
    QRadioButton *optC;
    QTextEdit *txtC;
    QPushButton *btnWrite;
    QRadioButton *optD;
    QTextEdit *txtD;
    QLineEdit *txtTags;
    QRadioButton *optA;
    QTextEdit *txtA;
    QTextEdit *txtB;
    QLabel *label_6;
    QRadioButton *optB;
    QLabel *label_7;
    QTextEdit *txtCauHoi;
    QLabel *lblCount;
    QLabel *label_9;
    QWidget *tab_2;
    QLabel *lblIDQ;
    QLabel *label_10;
    QRadioButton *optA_2;
    QRadioButton *optC_2;
    QLabel *label_11;
    QTextEdit *txtCauHoi_2;
    QPushButton *btnWrite_2;
    QLineEdit *txtTags_2;
    QTextEdit *txtD_2;
    QTextEdit *txtA_2;
    QRadioButton *optB_2;
    QTextEdit *txtB_2;
    QRadioButton *optD_2;
    QLineEdit *txtScore_2;
    QLabel *label_12;
    QTextEdit *txtC_2;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QPushButton *btnDelete;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *optAll;
    QRadioButton *optCustom;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkShowAnswer;
    QCheckBox *chkRank;
    QCheckBox *chkPublic;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnExit;

    void setupUi(QWidget *FormTaoCauHoi)
    {
        if (FormTaoCauHoi->objectName().isEmpty())
            FormTaoCauHoi->setObjectName(QStringLiteral("FormTaoCauHoi"));
        FormTaoCauHoi->resize(881, 642);
        FormTaoCauHoi->setMinimumSize(QSize(881, 642));
        FormTaoCauHoi->setMaximumSize(QSize(881, 642));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/new.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FormTaoCauHoi->setWindowIcon(icon);
        FormTaoCauHoi->setStyleSheet(QLatin1String("QWidget#FormTaoCauHoi{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(FormTaoCauHoi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtPass = new QLineEdit(FormTaoCauHoi);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setGeometry(QRect(20, 30, 113, 26));
        txtPassEdit = new QLineEdit(FormTaoCauHoi);
        txtPassEdit->setObjectName(QStringLiteral("txtPassEdit"));
        txtPassEdit->setGeometry(QRect(20, 80, 113, 26));
        txtExamName = new QLineEdit(FormTaoCauHoi);
        txtExamName->setObjectName(QStringLiteral("txtExamName"));
        txtExamName->setGeometry(QRect(150, 30, 141, 26));
        spinTime = new QSpinBox(FormTaoCauHoi);
        spinTime->setObjectName(QStringLiteral("spinTime"));
        spinTime->setGeometry(QRect(310, 30, 111, 26));
        spinTime->setMinimum(1);
        spinTime->setMaximum(1000);
        spinTime->setSingleStep(15);
        spinTime->setValue(60);
        label_8 = new QLabel(FormTaoCauHoi);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 0, 1141, 121));
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(85, 170, 255, 255), stop:1 rgba(62, 126, 189, 255));"));
        label_2 = new QLabel(FormTaoCauHoi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 91, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(FormTaoCauHoi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 10, 91, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(FormTaoCauHoi);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 10, 91, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtAuthor = new QLineEdit(FormTaoCauHoi);
        txtAuthor->setObjectName(QStringLiteral("txtAuthor"));
        txtAuthor->setGeometry(QRect(150, 80, 141, 26));
        label_5 = new QLabel(FormTaoCauHoi);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 60, 91, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(FormTaoCauHoi);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 140, 841, 431));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        txtScore = new QLineEdit(tab);
        txtScore->setObjectName(QStringLiteral("txtScore"));
        txtScore->setGeometry(QRect(170, 354, 131, 26));
        optC = new QRadioButton(tab);
        optC->setObjectName(QStringLiteral("optC"));
        optC->setGeometry(QRect(20, 230, 21, 41));
        optC->setChecked(false);
        txtC = new QTextEdit(tab);
        txtC->setObjectName(QStringLiteral("txtC"));
        txtC->setGeometry(QRect(50, 230, 771, 41));
        btnWrite = new QPushButton(tab);
        btnWrite->setObjectName(QStringLiteral("btnWrite"));
        btnWrite->setGeometry(QRect(710, 340, 111, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/icon/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWrite->setIcon(icon1);
        btnWrite->setIconSize(QSize(32, 32));
        optD = new QRadioButton(tab);
        optD->setObjectName(QStringLiteral("optD"));
        optD->setGeometry(QRect(20, 280, 21, 41));
        optD->setChecked(false);
        txtD = new QTextEdit(tab);
        txtD->setObjectName(QStringLiteral("txtD"));
        txtD->setGeometry(QRect(50, 280, 771, 41));
        txtTags = new QLineEdit(tab);
        txtTags->setObjectName(QStringLiteral("txtTags"));
        txtTags->setGeometry(QRect(20, 354, 131, 26));
        optA = new QRadioButton(tab);
        optA->setObjectName(QStringLiteral("optA"));
        optA->setGeometry(QRect(20, 130, 21, 41));
        optA->setChecked(true);
        txtA = new QTextEdit(tab);
        txtA->setObjectName(QStringLiteral("txtA"));
        txtA->setGeometry(QRect(50, 130, 771, 41));
        txtB = new QTextEdit(tab);
        txtB->setObjectName(QStringLiteral("txtB"));
        txtB->setGeometry(QRect(50, 180, 771, 41));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 330, 131, 20));
        optB = new QRadioButton(tab);
        optB->setObjectName(QStringLiteral("optB"));
        optB->setGeometry(QRect(20, 180, 21, 41));
        optB->setChecked(false);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 330, 131, 20));
        txtCauHoi = new QTextEdit(tab);
        txtCauHoi->setObjectName(QStringLiteral("txtCauHoi"));
        txtCauHoi->setGeometry(QRect(20, 40, 801, 81));
        lblCount = new QLabel(tab);
        lblCount->setObjectName(QStringLiteral("lblCount"));
        lblCount->setGeometry(QRect(111, 11, 16, 16));
        lblCount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(21, 11, 84, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lblIDQ = new QLabel(tab_2);
        lblIDQ->setObjectName(QStringLiteral("lblIDQ"));
        lblIDQ->setGeometry(QRect(77, 11, 21, 16));
        lblIDQ->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(21, 11, 50, 16));
        optA_2 = new QRadioButton(tab_2);
        optA_2->setObjectName(QStringLiteral("optA_2"));
        optA_2->setGeometry(QRect(20, 130, 21, 41));
        optA_2->setChecked(true);
        optC_2 = new QRadioButton(tab_2);
        optC_2->setObjectName(QStringLiteral("optC_2"));
        optC_2->setGeometry(QRect(20, 230, 21, 41));
        optC_2->setChecked(false);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 330, 131, 20));
        txtCauHoi_2 = new QTextEdit(tab_2);
        txtCauHoi_2->setObjectName(QStringLiteral("txtCauHoi_2"));
        txtCauHoi_2->setGeometry(QRect(20, 40, 801, 81));
        btnWrite_2 = new QPushButton(tab_2);
        btnWrite_2->setObjectName(QStringLiteral("btnWrite_2"));
        btnWrite_2->setGeometry(QRect(710, 340, 111, 41));
        btnWrite_2->setIcon(icon1);
        btnWrite_2->setIconSize(QSize(32, 32));
        txtTags_2 = new QLineEdit(tab_2);
        txtTags_2->setObjectName(QStringLiteral("txtTags_2"));
        txtTags_2->setGeometry(QRect(20, 354, 131, 26));
        txtD_2 = new QTextEdit(tab_2);
        txtD_2->setObjectName(QStringLiteral("txtD_2"));
        txtD_2->setGeometry(QRect(50, 280, 771, 41));
        txtA_2 = new QTextEdit(tab_2);
        txtA_2->setObjectName(QStringLiteral("txtA_2"));
        txtA_2->setGeometry(QRect(50, 130, 771, 41));
        optB_2 = new QRadioButton(tab_2);
        optB_2->setObjectName(QStringLiteral("optB_2"));
        optB_2->setGeometry(QRect(20, 180, 21, 41));
        optB_2->setChecked(false);
        txtB_2 = new QTextEdit(tab_2);
        txtB_2->setObjectName(QStringLiteral("txtB_2"));
        txtB_2->setGeometry(QRect(50, 180, 771, 41));
        optD_2 = new QRadioButton(tab_2);
        optD_2->setObjectName(QStringLiteral("optD_2"));
        optD_2->setGeometry(QRect(20, 280, 21, 41));
        optD_2->setChecked(false);
        txtScore_2 = new QLineEdit(tab_2);
        txtScore_2->setObjectName(QStringLiteral("txtScore_2"));
        txtScore_2->setGeometry(QRect(170, 354, 131, 26));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 330, 131, 20));
        txtC_2 = new QTextEdit(tab_2);
        txtC_2->setObjectName(QStringLiteral("txtC_2"));
        txtC_2->setGeometry(QRect(50, 230, 771, 41));
        btnPre = new QPushButton(tab_2);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        btnPre->setGeometry(QRect(350, 340, 111, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/icon/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPre->setIcon(icon2);
        btnPre->setIconSize(QSize(24, 24));
        btnNext = new QPushButton(tab_2);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(470, 340, 111, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon3);
        btnNext->setIconSize(QSize(24, 24));
        btnDelete = new QPushButton(tab_2);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setGeometry(QRect(590, 340, 111, 41));
        btnDelete->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon4);
        btnDelete->setIconSize(QSize(24, 24));
        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(FormTaoCauHoi);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(660, 10, 201, 101));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 84, 48));
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

        groupBox_2 = new QGroupBox(FormTaoCauHoi);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(440, 10, 201, 101));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 167, 74));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chkShowAnswer = new QCheckBox(layoutWidget1);
        chkShowAnswer->setObjectName(QStringLiteral("chkShowAnswer"));
        chkShowAnswer->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        chkShowAnswer->setChecked(true);

        verticalLayout->addWidget(chkShowAnswer);

        chkRank = new QCheckBox(layoutWidget1);
        chkRank->setObjectName(QStringLiteral("chkRank"));
        chkRank->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        chkRank->setChecked(true);

        verticalLayout->addWidget(chkRank);

        chkPublic = new QCheckBox(layoutWidget1);
        chkPublic->setObjectName(QStringLiteral("chkPublic"));
        chkPublic->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        chkPublic->setChecked(true);

        verticalLayout->addWidget(chkPublic);

        widget = new QWidget(FormTaoCauHoi);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 580, 841, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon5);
        btnSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnSave);

        btnExit = new QPushButton(widget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/icon/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon6);
        btnExit->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnExit);

        label_8->raise();
        label->raise();
        txtPass->raise();
        txtPassEdit->raise();
        txtExamName->raise();
        spinTime->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        txtAuthor->raise();
        label_5->raise();
        tabWidget->raise();
        lblCount->raise();
        label_9->raise();
        btnExit->raise();
        btnSave->raise();
        groupBox->raise();
        groupBox_2->raise();
        btnSave->raise();
        btnExit->raise();

        retranslateUi(FormTaoCauHoi);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormTaoCauHoi);
    } // setupUi

    void retranslateUi(QWidget *FormTaoCauHoi)
    {
        FormTaoCauHoi->setWindowTitle(QApplication::translate("FormTaoCauHoi", "T\341\272\241o b\341\273\231 \304\221\341\273\201", Q_NULLPTR));
        label->setText(QApplication::translate("FormTaoCauHoi", "M\341\272\255t kh\341\272\251u thi:", Q_NULLPTR));
        label_8->setText(QString());
        label_2->setText(QApplication::translate("FormTaoCauHoi", "M\341\272\255t kh\341\272\251u s\341\273\255a:", Q_NULLPTR));
        label_3->setText(QApplication::translate("FormTaoCauHoi", "T\303\252n b\341\273\231 \304\221\341\273\201:", Q_NULLPTR));
        label_4->setText(QApplication::translate("FormTaoCauHoi", "Th\341\273\235i gian (p):", Q_NULLPTR));
        label_5->setText(QApplication::translate("FormTaoCauHoi", "T\303\241c gi\341\272\243:", Q_NULLPTR));
        optC->setText(QString());
        btnWrite->setText(QApplication::translate("FormTaoCauHoi", " Ghi", Q_NULLPTR));
        optD->setText(QString());
        optA->setText(QString());
        label_6->setText(QApplication::translate("FormTaoCauHoi", "Tag (c\303\241ch b\341\273\237i \",\"):", Q_NULLPTR));
        optB->setText(QString());
        label_7->setText(QApplication::translate("FormTaoCauHoi", "\304\220i\341\273\203m cho c\303\242u:", Q_NULLPTR));
        lblCount->setText(QApplication::translate("FormTaoCauHoi", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("FormTaoCauHoi", "S\341\273\221 c\303\242u \304\221\303\243 t\341\272\241o:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FormTaoCauHoi", "Th\303\252m c\303\242u h\341\273\217i", Q_NULLPTR));
        lblIDQ->setText(QApplication::translate("FormTaoCauHoi", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("FormTaoCauHoi", "C\303\242u th\341\273\251:", Q_NULLPTR));
        optA_2->setText(QString());
        optC_2->setText(QString());
        label_11->setText(QApplication::translate("FormTaoCauHoi", "Tag (c\303\241ch b\341\273\237i \",\"):", Q_NULLPTR));
        btnWrite_2->setText(QApplication::translate("FormTaoCauHoi", " Ghi", Q_NULLPTR));
        optB_2->setText(QString());
        optD_2->setText(QString());
        label_12->setText(QApplication::translate("FormTaoCauHoi", "\304\220i\341\273\203m cho c\303\242u:", Q_NULLPTR));
        btnPre->setText(QApplication::translate("FormTaoCauHoi", " C\303\242u tr\306\260\341\273\233c", Q_NULLPTR));
        btnNext->setText(QApplication::translate("FormTaoCauHoi", " C\303\242u sau", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("FormTaoCauHoi", " X\303\263a", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FormTaoCauHoi", "Xem l\341\272\241i", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FormTaoCauHoi", "S\341\273\221 c\303\242u cho th\303\255 sinh l\303\240m:", Q_NULLPTR));
        optAll->setText(QApplication::translate("FormTaoCauHoi", "T\341\272\245t c\341\272\243", Q_NULLPTR));
        optCustom->setText(QApplication::translate("FormTaoCauHoi", "T\303\271y ch\341\273\211nh", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FormTaoCauHoi", "T\303\271y ch\341\273\215n:", Q_NULLPTR));
        chkShowAnswer->setText(QApplication::translate("FormTaoCauHoi", "Xem \304\221\303\241p \303\241n khi thi xong", Q_NULLPTR));
        chkRank->setText(QApplication::translate("FormTaoCauHoi", "X\341\272\277p h\341\272\241ng khi thi xong", Q_NULLPTR));
        chkPublic->setText(QApplication::translate("FormTaoCauHoi", "Xu\341\272\245t b\341\272\243n", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("FormTaoCauHoi", " L\306\257U L\341\272\240I", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnExit->setText(QApplication::translate("FormTaoCauHoi", " THO\303\201T", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormTaoCauHoi: public Ui_FormTaoCauHoi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTAOCAUHOI_H
