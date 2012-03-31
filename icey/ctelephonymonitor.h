#ifndef CTELEPHONYOBSERVER_H
#define CTELEPHONYOBSERVER_H

#include <e32base.h>
#include <Etel3rdParty.h>
 
class MTelephonyStatusObserver
    {
    public:
        virtual void TelephonyStatusChangedL(CTelephony::TCallStatus status, const TDesC& number) = 0;
    };

class CTelephonyMonitor : public CActive
    {
public:
    CTelephonyMonitor(MTelephonyStatusObserver& aObserver);
    static CTelephonyMonitor* NewL(MTelephonyStatusObserver& aObserver);
    static CTelephonyMonitor* NewLC(MTelephonyStatusObserver& aObserver);
    ~CTelephonyMonitor();
     void StartListening();
     CTelephony::TTelNumber GetNumber();
 
private:
    void ConstructL();
 
private:    
    void RunL();
    TInt RunError(TInt anError);
    void DoCancel();
    
private:
    MTelephonyStatusObserver& iTelephonyStatusObserver;
    CTelephony* iTelephony;
    
    CTelephony::TCallStatusV1 iLineStatus;
    CTelephony::TCallStatusV1Pckg iLineStatusPkg;
    
    CTelephony::TCallInfoV1 iCallInfoV1;
    CTelephony::TCallInfoV1Pckg iCallInfoV1Pckg;
    CTelephony::TCallSelectionV1 iCallSelectionV1;
    CTelephony::TCallSelectionV1Pckg iCallSelectionV1Pckg;
    CTelephony::TRemotePartyInfoV1 iRemotePartyInfoV1;
    CTelephony::TRemotePartyInfoV1Pckg iRemotePartyInfoV1Pckg;
    };

#endif /* CTELEPHONYOBSERVER_H */
