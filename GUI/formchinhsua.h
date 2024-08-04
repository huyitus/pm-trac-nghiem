#ifndef FORMCHINHSUA_H
#define FORMCHINHSUA_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class FormChinhSua;
}

class FormChinhSua : public QWidget
{
    Q_OBJECT

public:
    explicit FormChinhSua(QWidget *parent = nullptr);
    ~FormChinhSua();

public slots:
    void on_btnCheck_clicked();

    void on_btnExit_clicked();

    void on_btnNext_clicked();

    void on_btnPre_clicked();

    void on_btnWrite_clicked();

    void on_btnSave_clicked();

    void on_btnWrite_2_clicked();

    void on_btnDelete_clicked();

    void on_optAll_clicked();

    void on_optCustom_clicked();

    void initControls();
    void hienCauHoi();
    void hienThongTin();

    void closeEvent(QCloseEvent *event) override;

private:
    Ui::FormChinhSua *ui;

};

#endif // FORMCHINHSUA_H
