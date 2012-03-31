#ifndef MEDICATIONS_H
#define MEDICATIONS_H

#include <QWidget>
#include <QMenu>
#include <QMessageBox>
#include <QInputDialog>
#include <QListWidgetItem>
#include <QsKineticScroller.h>
#include <newmedicationdialog.h>

namespace Ui {
    class Medications;
}

class Medications : public QWidget
{
    Q_OBJECT

public:
    explicit Medications(QWidget *parent = 0);
    ~Medications();

    QString medication[101][3];
    QString state;
    bool madeChanges;

    QAction *addaction;
    QAction *editaction;
    QAction *deleteaction;

private:
    Ui::Medications *ui;
    void loadMedications();
    //void populateList();
    void createActions();
    void saveAll();
    QMenu *qm;
    QsKineticScroller qs;
    QAction *aboutapp;
    QAction *exitapp;



private slots:
    void on_listWidget_itemClicked(QListWidgetItem* item);
    void on_actionButton_clicked();
    void on_backButton_clicked();
    void AboutApp();
    void ExitApp();
    void addMedication();
    void deleteMedication();
    void editMedication();

};

#endif // MEDICATIONS_H
