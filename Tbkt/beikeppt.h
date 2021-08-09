#ifndef BEIKEPPT_H
#define BEIKEPPT_H

#include <QObject>
#include <QUrl>
class QFile;
class QNetworkReply;
class QNetworkAccessManager;
class BeiKePpt : public QObject
{
    Q_OBJECT
public:
    explicit BeiKePpt(QObject *parent = nullptr);

        void startRequest(QUrl url);
    QNetworkAccessManager* manager;
    QNetworkReply *reply;
    QUrl url;
    QFile *file;

public slots:
    void httpFinished();
    void httpReadyRead();
    void updateDataReadProgress(qint64,qint64);
    void pushButton_clicked(QUrl ppturl);

signals:
    void openBeikeppt(QString filename);
public:
    QString pptfile_b;
private:


};

#endif // BEIKEPPT_H
