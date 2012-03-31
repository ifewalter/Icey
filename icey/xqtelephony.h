#ifndef XQTELEPHONY_H
#define XQTELEPHONY_H

// INCLUDES
#include <QObject>

// FORWARD DECLARATIONS
class XQTelephonyPrivate;

// CLASS DECLARATION
class XQTelephony : public QObject
{
    Q_OBJECT

public:
    enum Error {
        NoError = 0,
        OutOfMemoryError,
        UnknownError = -1
    };
    
    enum LineStatus {
        StatusUnknown,
        StatusIdle,
        StatusDialling,
        StatusRinging,
        StatusAnswering,
        StatusConnecting,
        StatusConnected,
        StatusReconnectPending,
        StatusDisconnecting,
        StatusHold,
        StatusTransferring,
        StatusTransferAlerting
    };
    
    XQTelephony(QObject *parent = 0);
    ~XQTelephony();
    void call(QString phoneNumber);
    
    XQTelephony::Error error() const;
    
Q_SIGNALS:
    void lineStatusChanged(XQTelephony::LineStatus status, QString number);
    
private:
    friend class XQTelephonyPrivate;
    XQTelephonyPrivate *d;
};

#endif // XQTELEPHONY_H

// End of file

