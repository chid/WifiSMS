/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class InvocationQueue;



@interface iToolsAccount : IMAPAccount 
{
    struct __AOSNotificationSession { } *_notificationSession;
    InvocationQueue *_connectionInvocationQueue;
    BOOL _subscribed;
}

+ (id)basicAccountProperties;
+ (id)emailAddressHostPart;
+ (id)deliveryHostName;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)displayedAccountTypeString;
+ (id)hostname;
+ (id)iToolsAccounts;
+ (id)accountTypeString;
+ (BOOL)isPredefinedAccountType;
+ (id)accountInfoValueForKey:(id)arg1 value:(id)arg2;
+ (BOOL)doesConfiguredSyncAccountExist;
+ (id)configuredSyncAccountName;
+ (BOOL)isAOSEnabled;
+ (void)setAOSEnabled:(BOOL)arg1;

- (id)init;
- (id)hostname;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setPasswordInKeychain:(id)arg1;
- (void)_removePasswordInKeychain;
- (id)passwordFromKeychain;
- (id)emailAddresses;
- (void)setDeliveryAccount:(id)arg1;
- (Class)connectionClass;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (void)accountDidLoad;
- (NSInteger)emptyFrequencyForMailboxType:(NSInteger)arg1;
- (id)syncStoreIdentifier;
- (BOOL)becomeConfiguredSyncAccount;
- (BOOL)isConfiguredSyncAccount;
- (BOOL)_canReceiveNewMailNotifications;
- (void)queueActorInvocation:(SEL)arg1;
- (void)scheduleSource:(id)arg1;
- (void)unscheduleSource:(id)arg1;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (void)dealloc;
- (void)actorStartListeningForNotifications;
- (void)actorStopListeningForNotifications;
- (void)actorSessionStarted;

@end
