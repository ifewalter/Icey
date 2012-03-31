#ifndef NEWCONTACTFROMPHONE_H
#define NEWCONTACTFROMPHONE_H

#include <QDialog>


namespace Ui {
    class NewContactFromPhone;
}

class NewContactFromPhone : public QDialog
{
    Q_OBJECT

public:
    explicit NewContactFromPhone(QWidget *parent = 0);
    ~NewContactFromPhone();


private:
    Ui::NewContactFromPhone *ui;
};

#endif // NEWCONTACTFROMPHONE_H
