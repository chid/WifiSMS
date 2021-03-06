/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSTimer, ISStoreURLOperation, NSString;



@interface SUNetworkObserver : NSObject <ISSingleton, ISURLOperationDelegate>
{
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
}

@property(retain) NSString *partnerIdentifier; /* unknown property attribute: V_partnerIdentifier */

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)checkPartnerAvailability;
- (id)partnerIdentifier;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setPartnersEnabled:(BOOL)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)_applicationFinishedLaunching:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)_networkUsageStatedChanged:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)_cancelPartnerDetect;
- (void)_cancelStartupTimer;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_startupTimer:(id)arg1;

@end
