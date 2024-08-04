/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnLamBai;
    QPushButton *btnTaoMoi;
    QPushButton *btnNhatKy;
    QPushButton *btnGioiThieu;
    QPushButton *btnThoat;
    QPushButton *btnChinhSua;
    QLabel *label_2;
    QFrame *fmAbout;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *line_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QFrame *fmLB;
    QLineEdit *txtUserID;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtID;
    QLineEdit *txtName;
    QLineEdit *txtPass;
    QLineEdit *txtTag;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *btnVaoThi;
    QLabel *back;
    QFrame *fmNhatKy;
    QTableWidget *tbReport;
    QLabel *label_21;
    QLineEdit *txtIDReport;
    QLineEdit *txtPassReport;
    QLabel *label_22;
    QPushButton *btnOK;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(852, 550);
        MainWindow->setMinimumSize(QSize(852, 550));
        MainWindow->setMaximumSize(QSize(852, 550));
        QFont font;
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("QWidget#centralwidget {\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnLamBai = new QPushButton(centralwidget);
        btnLamBai->setObjectName(QStringLiteral("btnLamBai"));
        btnLamBai->setEnabled(true);
        btnLamBai->setGeometry(QRect(20, 20, 131, 41));
        btnLamBai->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/icon/exam.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnLamBai->setIcon(icon1);
        btnLamBai->setIconSize(QSize(24, 24));
        btnTaoMoi = new QPushButton(centralwidget);
        btnTaoMoi->setObjectName(QStringLiteral("btnTaoMoi"));
        btnTaoMoi->setEnabled(true);
        btnTaoMoi->setGeometry(QRect(20, 80, 131, 41));
        btnTaoMoi->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/icon/new.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnTaoMoi->setIcon(icon2);
        btnTaoMoi->setIconSize(QSize(24, 24));
        btnNhatKy = new QPushButton(centralwidget);
        btnNhatKy->setObjectName(QStringLiteral("btnNhatKy"));
        btnNhatKy->setEnabled(true);
        btnNhatKy->setGeometry(QRect(20, 200, 131, 41));
        btnNhatKy->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/icon/report.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnNhatKy->setIcon(icon3);
        btnNhatKy->setIconSize(QSize(24, 24));
        btnGioiThieu = new QPushButton(centralwidget);
        btnGioiThieu->setObjectName(QStringLiteral("btnGioiThieu"));
        btnGioiThieu->setEnabled(true);
        btnGioiThieu->setGeometry(QRect(20, 260, 131, 41));
        btnGioiThieu->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/icon/info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnGioiThieu->setIcon(icon4);
        btnGioiThieu->setIconSize(QSize(24, 24));
        btnThoat = new QPushButton(centralwidget);
        btnThoat->setObjectName(QStringLiteral("btnThoat"));
        btnThoat->setEnabled(true);
        btnThoat->setGeometry(QRect(20, 480, 131, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/icon/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThoat->setIcon(icon5);
        btnThoat->setIconSize(QSize(24, 24));
        btnChinhSua = new QPushButton(centralwidget);
        btnChinhSua->setObjectName(QStringLiteral("btnChinhSua"));
        btnChinhSua->setEnabled(true);
        btnChinhSua->setGeometry(QRect(20, 140, 131, 41));
        btnChinhSua->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/icon/edit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnChinhSua->setIcon(icon6);
        btnChinhSua->setIconSize(QSize(24, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, 0, 181, 551));
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(85, 170, 255, 255), stop:1 rgba(62, 126, 189, 255));"));
        fmAbout = new QFrame(centralwidget);
        fmAbout->setObjectName(QStringLiteral("fmAbout"));
        fmAbout->setGeometry(QRect(180, 10, 661, 521));
        fmAbout->setFrameShape(QFrame::NoFrame);
        fmAbout->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(fmAbout);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 71, 78));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/logo.png")));
        label_8 = new QLabel(fmAbout);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 180, 631, 41));
        label_8->setWordWrap(true);
        label_9 = new QLabel(fmAbout);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 230, 140, 188));
        label_9->setFrameShape(QFrame::Box);
        label_9->setFrameShadow(QFrame::Raised);
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/nham.jpg")));
        label_10 = new QLabel(fmAbout);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 430, 141, 21));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(fmAbout);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 110, 581, 71));
        label_11->setWordWrap(true);
        label_12 = new QLabel(fmAbout);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(240, 430, 181, 20));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(fmAbout);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 60, 55, 16));
        label_14 = new QLabel(fmAbout);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(430, 430, 141, 21));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(fmAbout);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(260, 230, 140, 188));
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Raised);
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/nhuy.jpg")));
        line_3 = new QFrame(fmAbout);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 90, 641, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(fmAbout);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(430, 230, 140, 188));
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Raised);
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/hhuy.jpg")));
        label_17 = new QLabel(fmAbout);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(90, 10, 261, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_17->setFont(font1);
        label_18 = new QLabel(fmAbout);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 460, 141, 41));
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(fmAbout);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(260, 460, 141, 41));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(fmAbout);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(410, 460, 181, 41));
        label_20->setAlignment(Qt::AlignCenter);
        fmLB = new QFrame(centralwidget);
        fmLB->setObjectName(QStringLiteral("fmLB"));
        fmLB->setGeometry(QRect(180, 10, 661, 521));
        fmLB->setFrameShape(QFrame::NoFrame);
        fmLB->setFrameShadow(QFrame::Raised);
        txtUserID = new QLineEdit(fmLB);
        txtUserID->setObjectName(QStringLiteral("txtUserID"));
        txtUserID->setGeometry(QRect(130, 50, 101, 31));
        label = new QLabel(fmLB);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 120, 111, 31));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(fmLB);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 7, 111, 29));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtID = new QLineEdit(fmLB);
        txtID->setObjectName(QStringLiteral("txtID"));
        txtID->setGeometry(QRect(130, 120, 141, 31));
        txtName = new QLineEdit(fmLB);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(130, 10, 209, 31));
        txtPass = new QLineEdit(fmLB);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setGeometry(QRect(130, 160, 141, 31));
        txtPass->setEchoMode(QLineEdit::Password);
        txtTag = new QLineEdit(fmLB);
        txtTag->setObjectName(QStringLiteral("txtTag"));
        txtTag->setGeometry(QRect(130, 230, 141, 31));
        label_4 = new QLabel(fmLB);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 111, 29));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(fmLB);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 230, 111, 31));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(fmLB);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 111, 31));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnVaoThi = new QPushButton(fmLB);
        btnVaoThi->setObjectName(QStringLiteral("btnVaoThi"));
        btnVaoThi->setGeometry(QRect(532, 10, 121, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        btnVaoThi->setFont(font2);
        btnVaoThi->setCursor(QCursor(Qt::PointingHandCursor));
        btnVaoThi->setStyleSheet(QStringLiteral("border: 0px;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/icon/Arrow-Right.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnVaoThi->setIcon(icon7);
        btnVaoThi->setIconSize(QSize(24, 24));
        back = new QLabel(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(600, 310, 256, 256));
        back->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/back.jpg")));
        fmNhatKy = new QFrame(centralwidget);
        fmNhatKy->setObjectName(QStringLiteral("fmNhatKy"));
        fmNhatKy->setGeometry(QRect(180, 10, 661, 541));
        fmNhatKy->setFrameShape(QFrame::NoFrame);
        fmNhatKy->setFrameShadow(QFrame::Raised);
        tbReport = new QTableWidget(fmNhatKy);
        tbReport->setObjectName(QStringLiteral("tbReport"));
        tbReport->setGeometry(QRect(10, 60, 641, 461));
        label_21 = new QLabel(fmNhatKy);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 10, 71, 29));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtIDReport = new QLineEdit(fmNhatKy);
        txtIDReport->setObjectName(QStringLiteral("txtIDReport"));
        txtIDReport->setGeometry(QRect(90, 10, 101, 31));
        txtPassReport = new QLineEdit(fmNhatKy);
        txtPassReport->setObjectName(QStringLiteral("txtPassReport"));
        txtPassReport->setGeometry(QRect(310, 10, 101, 31));
        txtPassReport->setEchoMode(QLineEdit::Password);
        label_22 = new QLabel(fmNhatKy);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(230, 10, 71, 29));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnOK = new QPushButton(fmNhatKy);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(570, 10, 81, 31));
        MainWindow->setCentralWidget(centralwidget);
        back->raise();
        label_2->raise();
        btnLamBai->raise();
        btnTaoMoi->raise();
        btnNhatKy->raise();
        btnGioiThieu->raise();
        btnThoat->raise();
        btnChinhSua->raise();
        fmAbout->raise();
        fmLB->raise();
        fmNhatKy->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ph\341\272\247n m\341\273\201m \303\264n t\341\272\255p v\303\240 thi tr\341\272\257c nghi\341\273\207m", Q_NULLPTR));
        btnLamBai->setText(QApplication::translate("MainWindow", " L\303\240m b\303\240i", Q_NULLPTR));
        btnTaoMoi->setText(QApplication::translate("MainWindow", " T\341\272\241o m\341\273\233i", Q_NULLPTR));
        btnNhatKy->setText(QApplication::translate("MainWindow", " Nh\341\272\255t k\303\275", Q_NULLPTR));
        btnGioiThieu->setText(QApplication::translate("MainWindow", " Gi\341\273\233i thi\341\273\207u", Q_NULLPTR));
        btnThoat->setText(QApplication::translate("MainWindow", " Tho\303\241t", Q_NULLPTR));
        btnChinhSua->setText(QApplication::translate("MainWindow", " Ch\341\273\211nh s\341\273\255a", Q_NULLPTR));
        label_2->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">C\303\241c t\303\241c gi\341\272\243:</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">HU\341\273\262NH \304\220\341\273\250C NH\303\202M</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Ph\341\272\247n m\341\273\201m h\341\273\227 tr\341\273\243 c\303\241c t\303\255nh n\304\203ng:</span></p><p>T\341\272\241o m\341\273\233i b\341\273\231 \304\221\341\273\201, ch\341\273\211nh s\341\273\255a, x\303\263a c\303\242u h\341\273\217i trong b\341\273\231 \304\221\341\273\201. L\303\240m tr\341\272\257c nghi\341\273\207m c\303\263 \304\221\341\272\277m gi\341\273\235 v\303\240 kh\303\264ng \304\221\341\272\277m gi\341\273\235, l\303\240m b\303\240i tr\341\272\257c nghi\341\273\207m theo nh\303\243n cho tr\306\260\341\273\233c, ...</p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">NGUY\341\273\204N PH\341\272\240M NH\341\272\254T HUY</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "v1.0", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">NGUY\341\273\204N HO\303\200NG HUY</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\303\224n t\341\272\255p v\303\240 thi tr\341\272\257c nghi\341\273\207m", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Nh\303\263m tr\306\260\341\273\237ng<br/></span>X\341\273\255 l\303\275 nghi\341\273\207p v\341\273\245</p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Th\303\240nh vi\303\252n<br/></span>X\341\273\255 l\303\275 nghi\341\273\207p v\341\273\245</p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Th\303\240nh vi\303\252n<br/></span>X\341\273\255 l\303\275 t\306\260\306\241ng t\303\241c ng\306\260\341\273\235i d\303\271ng</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID b\341\273\231 \304\221\341\273\201:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Nh\341\272\255p h\341\273\215 t\303\252n:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Nh\341\272\255p m\303\243 th\303\255 sinh:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Tag (c\303\241ch b\341\273\233i \",\"):", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u:", Q_NULLPTR));
        btnVaoThi->setText(QApplication::translate("MainWindow", " V\303\240o thi", Q_NULLPTR));
        back->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "ID b\303\240i thi:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u:", Q_NULLPTR));
        btnOK->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
