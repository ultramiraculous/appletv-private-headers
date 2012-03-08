/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "NSObject.h"
#import "MSDeleter.h"
#import "MSDeleteStreamsProtocolDelegate.h"

@class MSDeleteStreamsProtocol, NSMutableArray, MSMediaStreamDaemon, MSObjectQueue;
@protocol MSDeleterDelegate;

@protocol MSDeleter <NSObject>
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;
- (void)abort;
// declared property getter: - (id)delegate;
- (void)deleteAssetCollections:(id)collections;
- (void)performOutstandingActivities;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
@end

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {
@private
	id<MSDeleterDelegate> _delegate;	// 24 = 0x18
	MSMediaStreamDaemon *_daemon;	// 28 = 0x1c
	MSDeleteStreamsProtocol *_protocol;	// 32 = 0x20
	int _state;	// 36 = 0x24
	MSObjectQueue *_deleteQueue;	// 40 = 0x28
	NSMutableArray *_requestedDeleteWrappers;	// 44 = 0x2c
	int _batchSize;	// 48 = 0x30
	int _maxErrorCount;	// 52 = 0x34
}
@property(assign, nonatomic) int batchSize;	// G=0x36a6d999; S=0x36a6d9a9; @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x36a6d979; S=0x36a6d989; @synthesize=_daemon
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// G=0x36a6d959; S=0x36a6d969; @synthesize=_delegate
+ (id)_clearInstantiatedDeletersByPersonID;	// 0x36a6c14d
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x36a6c1c5
+ (void)abortAllActivities;	// 0x36a6c5e9
+ (id)deleterForPersonID:(id)personID;	// 0x36a6c059
+ (id)existingDeleterForPersonID:(id)personID;	// 0x36a6c131
+ (void)forgetPersonID:(id)anId;	// 0x36a6c175
+ (BOOL)isInRetryState;	// 0x36a6c691
+ (id)nextActivityDate;	// 0x36a6c419
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x36a6c505
+ (id)personIDsWithOutstandingActivities;	// 0x36a6c525
+ (void)stopAllActivities;	// 0x36a6c541
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x36a6c751
- (void)_abort;	// 0x36a6d6e5
- (id)_abortedError;	// 0x36a6d68d
- (void)_forget;	// 0x36a6d8f5
- (BOOL)_isAllowedToDelete;	// 0x36a6c9f1
- (BOOL)_isInRetryState;	// 0x36a6d941
- (void)_sendDeleteRequest;	// 0x36a6cce1
- (void)_stop;	// 0x36a6d609
- (void)_updateMasterManifest;	// 0x36a6c95d
- (void)abort;	// 0x36a6d921
// declared property getter: - (int)batchSize;	// 0x36a6d999
// declared property getter: - (id)daemon;	// 0x36a6d979
- (void)deactivate;	// 0x36a6c879
- (void)dealloc;	// 0x36a6c91d
// declared property getter: - (id)delegate;	// 0x36a6d959
- (void)deleteAssetCollections:(id)collections;	// 0x36a6cadd
- (void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;	// 0x36a6cef9
- (void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x36a6ce2d
- (void)performOutstandingActivities;	// 0x36a6cc75
// declared property setter: - (void)setBatchSize:(int)size;	// 0x36a6d9a9
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x36a6d989
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36a6d969
- (void)stop;	// 0x36a6d931
@end
