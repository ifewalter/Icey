#ifndef NEWCONTACTDIALOG_H
#define NEWCONTACTDIALOG_H
#include <QDialog>


class Contacts;
namespace Ui {
    class newContactDialog;
}

class newContactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newContactDialog(QWidget *parent = 0);
    ~newContactDialog();
    int contactIndex;
    QString contactname;
    QString contactrelationship;
    QString contactnumber;

private:
    Ui::newContactDialog *ui;
    void loadDefaults();
    Contacts *co;

private slots:
    void on_okButton_clicked();
    void on_backButton_clicked();

};

#endif // NEWCONTACTDIALOG_H
