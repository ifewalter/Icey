#ifndef UNLOCKER_H
#define UNLOCKER_H

#include <QWidget>
#include "configure.h"



namespace Ui {
    class Unlocker;
    }

class Unlocker : public QWidget
{
    Q_OBJECT

public:
    explicit Unlocker(QWidget *parent = 0);
    ~Unlocker();

private:
    Ui::Unlocker *ui;
    QString displayedText;
    Configure *c;



private slots:
    void on_sosButton_clicked();
    void on_button0_clicked();
    void on_button9_clicked();
    void on_button8_clicked();
    void on_button7_clicked();
    void on_button6_clicked();
    void on_button5_clicked();
    void on_button4_clicked();
    void on_button3_clicked();
    void on_button2_clicked();
    void on_button1_clicked();
    void on_clearButton_clicked();
    void on_exitButton_clicked();

};

#endif // UNLOCKER_H
