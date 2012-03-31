#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(&manager, SIGNAL(finished(QNetworkReply*)),
            SLOT(downloadFinished(QNetworkReply*)));

    QString qurler = "http://localhost:78/ifewalter/06.jpg";
    QUrl url = QUrl::fromEncoded(qurler.toLocal8Bit());
    doDownload(url);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    as = new appSettings();
    as->showFullScreen();
    this->close();
}

void Form::doDownload(const QUrl &url)
 {
     QNetworkRequest request(url);
     QNetworkReply *reply = manager.get(request);

     //currentDownloads.append(reply);
 }


QString Form::saveFileName(const QUrl &url)
 {
     QString path = url.path();
     QString basename = QFileInfo(path).fileName();

     if (basename.isEmpty())
         basename = "download";

     if (QFile::exists(basename)) {
         // already exists, don't overwrite
         int i = 0;
         basename += '.';
         while (QFile::exists(basename + QString::number(i)))
             ++i;

         basename += QString::number(i);
     }

     return basename;
 }
bool Form::saveToDisk(const QString &filename, QIODevice *data)
{
    QFile file("c:/06.jpg");
    if (!file.open(QIODevice::WriteOnly)) {
        //fprintf(stderr, "Could not open %s for writing: %s\n",
          //      qPrintable(filename),
            //    qPrintable(file.errorString()));

        return false;
    }

    file.write(data->readAll());
    file.close();

    return true;
}

void Form::downloadFinished(QNetworkReply *reply)
{   ui->label->setText("Updating...");
    QUrl url = reply->url();
    if (reply->error()) {
        ///fprintf(stderr, "Download of %s failed: %s\n",
           //     url.toEncoded().constData(),
                ui->label->setText("download failed");
    } else {
        QString filename = saveFileName(url);
        if (saveToDisk("c://06.jpg", reply))
            //printf("Download of %s succeeded (saved to %s)\n",
              //     url.toEncoded().constData(), qPrintable(filename));
            ui->label->setText("Update complete");
        reply->deleteLater();
        this->close();
    }


    //currentDownloads.removeAll(reply);



  //  if (currentDownloads.isEmpty())
        // all downloads finished
    //    QCoreApplication::instance()->quit();
}

