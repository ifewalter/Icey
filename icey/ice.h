#ifndef ICE_H
#define ICE_H

#include <QWidget>

namespace Ui {
    class Ice;
}

class Ice : public QWidget
{
    Q_OBJECT

public:
    explicit Ice(QWidget *parent = 0);
    ~Ice();
    QString state;

private:
    Ui::Ice *ui;
    void loadBio();
    void hideBioButton();
    QString defaultText(QString realString, QString defText, QString preText, QString appText);


private slots:
    void on_bioEditButton_clicked();
    void on_medicationButton_clicked();
    void on_medicalConditionButton_clicked();
    void on_allergyButton_clicked();
    void on_iceContactButton_clicked();
    void on_sosButton_clicked();
    void on_exitButton_clicked();
};

#endif // ICE_H
