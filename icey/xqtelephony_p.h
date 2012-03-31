#ifndef XQTELEPHONY_P_H
#define XQTELEPHONY_P_H

// INCLUDES
#include "private/qobject_p.h"
#include "xqtelephony.h"
#include "ccalldialer.h"
#include "ctelephonymonitor.h"

// CLASS DECLARATION
class XQTelephonyPrivate:  public QObject, public CBase, public MDialObserver, public MTelephonyStatusObserver
{
    Q_OBJECT 
public:
    XQTelephonyPrivate(XQTelephony *telephony);
    ~XQTelephonyPrivate();
    
    void call(QString phoneNumber);
    XQTelephony::Error error();

private: //From MDialObserver
    void CallDialedL(TInt aError);
    
private: // From MTelephonyStatusObserver
    void TelephonyStatusChangedL(CTelephony::TCallStatus aStatus, const TDesC& number);

private:
    XQTelephony *q;
    int iError;
    CCallDialer* iCallDialer;
    CTelephonyMonitor* iTelephonyMonitor;
};

#endif /*XQTELEPHONY_P_H*/

// End of file

