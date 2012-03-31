#ifndef NEWMEDICATIONDIALOG_H
#define NEWMEDICATIONDIALOG_H

#include <QDialog>
#include <medications.h>

namespace Ui {
    class newMedicationDialog;
}

class newMedicationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newMedicationDialog(QWidget *parent = 0);
    ~newMedicationDialog();
       int medicationIndex;

       QString medicationname, medicationdetails,medicationdosage;
private:
    Ui::newMedicationDialog *ui;

private slots:
    void on_okButton_clicked();
    void on_backButton_clicked();
};

#endif // NEWMEDICATIONDIALOG_H
