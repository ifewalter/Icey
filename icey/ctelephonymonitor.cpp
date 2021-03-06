#include <e32base.h>
#include <Etel3rdParty.h>
 
#include "ctelephonymonitor.h"
 
CTelephonyMonitor::CTelephonyMonitor(MTelephonyStatusObserver& aObserver) :
    CActive(EPriorityStandard),
    iLineStatusPkg(iLineStatus),iTelephonyStatusObserver(aObserver),iRemotePartyInfoV1Pckg(iRemotePartyInfoV1), iCallSelectionV1Pckg(iCallSelectionV1), iCallInfoV1Pckg(iCallInfoV1)
    {
    }

CTelephonyMonitor* CTelephonyMonitor::NewL(MTelephonyStatusObserver& aObserver)
    {
    CTelephonyMonitor* self = CTelephonyMonitor::NewLC(aObserver);
    CleanupStack::Pop(self);
    return self;
    }
 
CTelephonyMonitor* CTelephonyMonitor::NewLC(MTelephonyStatusObserver& aObserver)
    {
    CTelephonyMonitor* self = new (ELeave) CTelephonyMonitor(aObserver);
    CleanupStack::PushL(self);
    self->ConstructL();
    return self;
    }
 
void CTelephonyMonitor::ConstructL()
    {
    iTelephony = CTelephony::NewL();
 
    CActiveScheduler::Add(this);
    }

CTelephonyMonitor::~CTelephonyMonitor()
    {
    Cancel();
 
    if (iTelephony)
        delete iTelephony;
    }
 
void CTelephonyMonitor::RunL()
    {
    if (iStatus == KErrNone)
        {
        if( iLineStatus.iStatus == CTelephony::EStatusDialling )
            {
            iTelephonyStatusObserver.TelephonyStatusChangedL(iLineStatus.iStatus, GetNumber());
            }
        else if(iLineStatus.iStatus == CTelephony::EStatusRinging)
            {
            iTelephonyStatusObserver.TelephonyStatusChangedL(iLineStatus.iStatus, GetNumber());
            }   
        else if( iLineStatus.iStatus == CTelephony::EStatusIdle )      
            {
            TBufC<20> noNumber(_L("No active call"));
            iTelephonyStatusObserver.TelephonyStatusChangedL(iLineStatus.iStatus, noNumber);
            }
        StartListening();
        }   
    }
 
CTelephony::TTelNumber CTelephonyMonitor::GetNumber() 
    {
    iCallSelectionV1.iLine = CTelephony::EVoiceLine;
    iCallSelectionV1.iSelect = CTelephony::EInProgressCall;
    iTelephony->GetCallInfo(iCallSelectionV1Pckg, iCallInfoV1Pckg, iRemotePartyInfoV1Pckg );
    if( iRemotePartyInfoV1.iRemoteIdStatus == CTelephony::ERemoteIdentityAvailable )
        {
        if( iRemotePartyInfoV1.iRemoteNumber.iTelNumber.Length() > 0 )
            {
            return iRemotePartyInfoV1.iRemoteNumber.iTelNumber;
            }
        }
        if( iCallInfoV1.iDialledParty.iTelNumber.Length() > 0 )
            {
            return iCallInfoV1.iDialledParty.iTelNumber;
            } 
    }

TInt CTelephonyMonitor::RunError(TInt anError)
    {
    return anError;
    }

void CTelephonyMonitor::DoCancel()
    {
    iTelephony->CancelAsync(CTelephony::EVoiceLineStatusChangeCancel);
    }
 
void CTelephonyMonitor::StartListening()
    {
    iTelephony->NotifyChange(iStatus, CTelephony::EVoiceLineStatusChange, iLineStatusPkg);
    SetActive();
    }
