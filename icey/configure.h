#ifndef CONFIGURE_H
#define CONFIGURE_H

#include <QWidget>
#include <bioconfig.h>
#include <allergies.h>
#include <conditions.h>
#include <contacts.h>
#include <medications.h>
#include <appsettings.h>
#include <insuranceconfig.h>

namespace Ui {
    class Configure;
}

class Configure : public QWidget
{
    Q_OBJECT

public:
    explicit Configure(QWidget *parent = 0);
    ~Configure();
    QAction *aboutaction;
    QAction *exitaction;

private:
    Ui::Configure *ui;
    BioConfig *b;
    Allergies *a;
    Conditions *c;
    void createActions();
    Medications *m;
    QMenu *qm;
    InsuranceConfig *ic;


private slots:
    //void on_actionButton_clicked();
    void on_appsettingsconfigButton_clicked();
    void on_medicationconfigButton_clicked();
    void on_contactconfigButton_clicked();
    void on_conditionconfigButton_clicked();
    void on_allergyconfigButton_clicked();
    void on_exitButton_clicked();
    void on_bioconfigButton_clicked();
    void AboutApp();
    void ExitApp();
    void on_insuranceconfigButton_clicked();
};

#endif // CONFIGURE_H
