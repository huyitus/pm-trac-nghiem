#ifndef FORMTAOCAUHOI_H
#define FORMTAOCAUHOI_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class FormTaoCauHoi;
}

class FormTaoCauHoi : public QWidget
{
    Q_OBJECT

public:
    explicit FormTaoCauHoi(QWidget *parent = nullptr);
    ~FormTaoCauHoi();

private slots:
    void on_btnWrite_clicked();

    void on_btnSave_clicked();

    void on_btnExit_clicked();

    void on_btnPre_clicked();

    void on_btnNext_clicked();

    void on_btnWrite_2_clicked();

    void on_optAll_clicked();

    void on_optCustom_clicked();

    void on_btnDelete_clicked();

    void closeEvent(QCloseEvent *event) override;
    void showQues();
private:
    Ui::FormTaoCauHoi *ui;

};

#endif // FORMTAOCAUHOI_H
