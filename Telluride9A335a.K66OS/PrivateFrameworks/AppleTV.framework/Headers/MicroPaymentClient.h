/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperationDelegate.h"
#import "LoadCompletedMicroPaymentsDelegate.h"
#import <NSManagedObject.h> // Unknown library

@class LoadMicroPaymentQueuesOperation, NSMutableArray, ClientIdentity, NSNumber, NSString, NSMutableSet, LoadCompletedMicroPaymentsOperation;

__attribute__((visibility("hidden")))
@interface MicroPaymentClient : NSManagedObject <LoadCompletedMicroPaymentsDelegate, ISOperationDelegate> {
@private
	BOOL _checkedIn;	// 48 = 0x30
	ClientIdentity *_identity;	// 52 = 0x34
	LoadCompletedMicroPaymentsOperation *_loadCompletedOperation;	// 56 = 0x38
	int _lastRefreshReason;	// 60 = 0x3c
	LoadMicroPaymentQueuesOperation *_loadQueueOperation;	// 64 = 0x40
	NSMutableArray *_orderedPayments;	// 68 = 0x44
	int _state;	// 72 = 0x48
}
@property(assign, nonatomic, getter=isCheckedIn) BOOL checkedIn;	// G=0x34350171; S=0x34350181; @synthesize=_checkedIn
@property(retain, nonatomic) NSString *identifier;	// @dynamic
@property(retain, nonatomic) ClientIdentity *identity;	// G=0x34350191; S=0x3434ee0d; @synthesize=_identity
@property(retain, nonatomic) NSMutableSet *payments;	// @dynamic
@property(retain, nonatomic) NSMutableSet *refunds;	// @dynamic
@property(retain, nonatomic) NSNumber *sandboxed;	// @dynamic
+ (id)entityForContext:(id)context;	// 0x3434de59
- (void)_clientMessagabilityChangedNotification:(id)notification;	// 0x3434f5c5
- (id)_copyDictionariesForPayments:(id)payments;	// 0x3434f751
- (void)_handleLoadCompletedOperation:(id)operation failedWithError:(id)error;	// 0x3434f861
- (void)_handleLoadCompletedOperationFinished:(id)finished;	// 0x3434f8ed
- (void)_handleLoadQueuesOperation:(id)operation failedWithError:(id)error;	// 0x3434f9dd
- (void)_handleLoadQueuesOperationFinished:(id)finished;	// 0x3434fa59
- (void)_handlePaymentsQueueResponse:(id)response forReason:(int)reason;	// 0x3434fb71
- (void)_handleRefundsQueueResponse:(id)response forReason:(int)reason;	// 0x3434fd25
- (void)_mainThreadClientMessagabilityChangedNotification:(id)notification;	// 0x3434f5f1
- (void)_mainThreadTriggerDownloadsNotification:(id)notification;	// 0x3434f6a5
- (id)_orderedPayments;	// 0x3434fe6d
- (void)_sendLoadCompletedPaymentsFailedWithError:(id)error;	// 0x3434ffa5
- (void)_sendLoadCompletedPaymentsFinished;	// 0x34350055
- (void)_sendNotification:(id)notification userInfo:(id)info;	// 0x34350099
- (BOOL)_shouldSendDistributedNotifications;	// 0x343500ed
- (BOOL)_shouldSendPaymentToClient:(id)client;	// 0x3435013d
- (void)_triggerDownloadsNotification:(id)notification;	// 0x3434f725
- (BOOL)addPaymentsWithSave:(id)save;	// 0x3434dead
- (void)awakeFromFetch;	// 0x3434f29d
- (void)dealloc;	// 0x3434dd39
- (void)didTurnIntoFault;	// 0x3434f37d
- (id)firstReadyPayment;	// 0x3434dfe5
- (void)handleNetworkTransition;	// 0x3434e0c5
// declared property getter: - (id)identity;	// 0x34350191
// declared property getter: - (BOOL)isCheckedIn;	// 0x34350171
- (void)operation:(id)operation failedWithError:(id)error;	// 0x3434f3d1
- (void)operation:(id)operation loadedPaymentsBatch:(id)batch;	// 0x3434f41d
- (void)operationFinished:(id)finished;	// 0x3434f579
- (id)paymentForIdentifier:(id)identifier;	// 0x3434e12d
- (void)refreshFromServerWithReason:(int)reason;	// 0x3434e1f5
- (id)refundForIdentifier:(id)identifier;	// 0x3434e605
- (BOOL)removePaymentsWithSave:(id)save;	// 0x3434e755
- (BOOL)replacePayment:(id)payment withResponse:(id)response;	// 0x3434e911
- (void)restoreCompletedTransactions;	// 0x3434ed19
- (void)sendPaymentUpdated:(id)updated;	// 0x3434f20d
- (void)sendPaymentsAdded:(id)added;	// 0x3434efad
- (void)sendPaymentsRefreshed;	// 0x3434f075
- (void)sendPaymentsRemoved:(id)removed;	// 0x3434f14d
- (void)sendRefundsRefreshed;	// 0x3434f295
- (void)sendRefundsRemoved:(id)removed;	// 0x3434f299
// declared property setter: - (void)setCheckedIn:(BOOL)anIn;	// 0x34350181
// declared property setter: - (void)setIdentity:(id)identity;	// 0x3434ee0d
@end
