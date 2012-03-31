#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <appsettings.h>

namespace Ui {
    class Form;
}

class Form : public QWidget
{
    Q_OBJECT
    QNetworkAccessManager manager;

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    void doDownload(const QUrl &url);
    QString saveFileName(const QUrl &url);
    bool saveToDisk(const QString &filename, QIODevice *data);


private:
    Ui::Form *ui;
    QUrl url;
    appSettings *as;



private slots:
    void on_pushButton_clicked();
    void downloadFinished(QNetworkReply *reply);
};

#endif // FORM_H
