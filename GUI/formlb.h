#ifndef FORMLB_H
#define FORMLB_H

#include <QWidget>
#include <QTimer>
#include <QCloseEvent>

#include "../BLL/ServiceInterface/IExamQuizSI.h"

namespace Ui {
class FormLB;
}

class FormLB : public QWidget
{
    Q_OBJECT

public:
    explicit FormLB(QWidget *parent, IExamQuizSI *&_exam, QString _tag);
    ~FormLB();

private slots:
    void on_btnSubmit_clicked();

    void on_btnNext_clicked();

    void on_btnPre_clicked();

    void timeUpdate();

    void submitExam();
    void on_optA_clicked();

    void on_optB_clicked();

    void on_optC_clicked();

    void on_optD_clicked();

    void on_btnEnd_clicked();

    void init();
    void showQuiz();
    void closeEvent(QCloseEvent *event);
private:
    Ui::FormLB *ui;


    QTimer* timer;

};

#endif // FORMLB_H
