#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QWidget>
#include <QSettings>
#include <QFileInfo>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <QMenu>
#include <QsKineticScroller.h>


namespace Ui {
    class appSettings;
}

class appSettings : public QWidget
{
    Q_OBJECT
   // QNetworkAccessManager manager, managermain;

public:
    explicit appSettings(QWidget *parent = 0);
    ~appSettings();
    //DownloadManager();
    void doDownload(const QUrl &url);
    void doDownloadmain(const QUrl &url);
    QString saveFileName(const QUrl &url);
    bool saveToDisk(const QString &filename, QIODevice *data);

    QAction *aboutaction;
    QAction *exitaction;

private:
    Ui::appSettings *ui;
    QSettings settings;
  //  void loadSettings();
    void updateModule();
    QUrl url;
    QsKineticScroller qs;
    QMenu *qm;
    void createActions();


private slots:

//    void on_checkBox_toggled(bool checked);
//    void on_wallpaperButton_clicked();
    void on_updateButton_clicked();
//    void on_codeButton_clicked();
//    void on_unlockCombo_currentIndexChanged(int index);

    void on_backButton_clicked();
//    void downloadFinishedmain(QNetworkReply *reply);
//    void downloadFinished(QNetworkReply *reply);
    void AboutApp();
    void ExitApp();


};

#endif // APPSETTINGS_H
