#ifndef INSURANCECONFIG_H
#define INSURANCECONFIG_H

#include <QWidget>
#include <QMenu>


namespace Ui {
    class InsuranceConfig;
}

class InsuranceConfig : public QWidget
{
    Q_OBJECT

public:
    explicit InsuranceConfig(QWidget *parent = 0);
    ~InsuranceConfig();

private slots:
    void on_optionButton_clicked();

    void on_cancelButton_clicked();

    void saveInsurance();
    void loadInsurance();
    void createActions();

    void AboutApp();
    void ExitApp();
    QString defaultText(QString realString, QString defText, QString preText, QString appText);

private:
    Ui::InsuranceConfig *ui;
    QMenu *qm;
    QAction *aboutaction;
    QAction *exitaction;
    QAction *saveaction;
};

#endif // INSURANCECONFIG_H
