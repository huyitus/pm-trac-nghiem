#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnTaoMoi_clicked();

    void on_btnChinhSua_clicked();

    void on_btnThoat_clicked();

    void on_btnLamBai_clicked();

    void on_btnThiID_clicked();

    void on_btnGioiThieu_clicked();

    void on_btnVaoThi_clicked();

    void on_btnNhatKy_clicked();

    void on_btnOK_clicked();


    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
