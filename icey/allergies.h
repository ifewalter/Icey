#ifndef ALLERGIES_H
#define ALLERGIES_H
#include <QListWidgetItem>
#include <QWidget>
#include <QAction>
#include <QMenu>
#include <QInputDialog>
#include <QsKineticScroller.h>

namespace Ui {
    class Allergies;
}

class Allergies : public QWidget
{
    Q_OBJECT

public:
    explicit Allergies(QWidget *parent = 0);
    ~Allergies();
    QString state;
    bool madeChanges;
    QString allergy[100];
    QAction *addaction;
    QAction *editaction;
    QAction *deleteaction;
    QAction *aboutapp;
    QAction *exitapp;

private:
    Ui::Allergies *ui;
    void populateList();
    void createActions();
    void saveAll();
    QMenu *qm;
    QsKineticScroller qs;

private slots:
    void on_listWidget_itemClicked(QListWidgetItem* item);
    void on_actionButton_clicked();
    void on_backButton_clicked();
    void aboutApp();
    void exitApp();
    void addAllergy();
    void deleteAllergy();
    void editAllergy();
};

#endif // ALLERGIES_H
