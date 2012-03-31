#include "xqtelephony.h"
#include "xqtelephony_p.h"
#include "ccalldialer.h"

XQTelephonyPrivate::XQTelephonyPrivate(XQTelephony *telephony) : q(telephony)
{
    TRAP(iError,iCallDialer = CCallDialer::NewL(*this);
        iTelephonyMonitor = CTelephonyMonitor::NewL(*this);) 
        iTelephonyMonitor->StartListening();
}

XQTelephonyPrivate::~XQTelephonyPrivate()
{
    delete iCallDialer;
    delete iTelephonyMonitor;
}

void XQTelephonyPrivate::call(QString phoneNumber)
{
    TPtrC16 textPtr(reinterpret_cast<const TUint16*>(phoneNumber.utf16()));

    iCallDialer->Call(textPtr);
}

void XQTelephonyPrivate::TelephonyStatusChangedL(CTelephony::TCallStatus aStatus, const TDesC& number)
{
    QString callerNumber = QString::fromUtf16(number.Ptr(), number.Length());
    emit q->lineStatusChanged(static_cast<XQTelephony::LineStatus>(aStatus), callerNumber);
}

void XQTelephonyPrivate::CallDialedL(TInt aError)
{
    iError = aError;
}

XQTelephony::Error XQTelephonyPrivate::error()
{
    switch (iError) {
        case KErrNone:
            {
            return XQTelephony::NoError;
            }
        case KErrNoMemory:
            {
            return XQTelephony::OutOfMemoryError;
            }
        default:
            {
            return XQTelephony::UnknownError;
            }
    }    
}

// End of file

