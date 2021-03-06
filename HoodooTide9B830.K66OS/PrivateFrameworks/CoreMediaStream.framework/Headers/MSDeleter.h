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
@property(assign, nonatomic) int batchSize;	// G=0x30e6e999; S=0x30e6e9a9; @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x30e6e979; S=0x30e6e989; @synthesize=_daemon
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// G=0x30e6e959; S=0x30e6e969; @synthesize=_delegate
+ (id)_clearInstantiatedDeletersByPersonID;	// 0x30e6d14d
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x30e6d1c5
+ (void)abortAllActivities;	// 0x30e6d5e9
+ (id)deleterForPersonID:(id)personID;	// 0x30e6d059
+ (id)existingDeleterForPersonID:(id)personID;	// 0x30e6d131
+ (void)forgetPersonID:(id)anId;	// 0x30e6d175
+ (BOOL)isInRetryState;	// 0x30e6d691
+ (id)nextActivityDate;	// 0x30e6d419
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x30e6d505
+ (id)personIDsWithOutstandingActivities;	// 0x30e6d525
+ (void)stopAllActivities;	// 0x30e6d541
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x30e6d751
- (void)_abort;	// 0x30e6e6e5
- (id)_abortedError;	// 0x30e6e68d
- (void)_forget;	// 0x30e6e8f5
- (BOOL)_isAllowedToDelete;	// 0x30e6d9f1
- (BOOL)_isInRetryState;	// 0x30e6e941
- (void)_sendDeleteRequest;	// 0x30e6dce1
- (void)_stop;	// 0x30e6e609
- (void)_updateMasterManifest;	// 0x30e6d95d
- (void)abort;	// 0x30e6e921
// declared property getter: - (int)batchSize;	// 0x30e6e999
// declared property getter: - (id)daemon;	// 0x30e6e979
- (void)deactivate;	// 0x30e6d879
- (void)dealloc;	// 0x30e6d91d
// declared property getter: - (id)delegate;	// 0x30e6e959
- (void)deleteAssetCollections:(id)collections;	// 0x30e6dadd
- (void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;	// 0x30e6def9
- (void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x30e6de2d
- (void)performOutstandingActivities;	// 0x30e6dc75
// declared property setter: - (void)setBatchSize:(int)size;	// 0x30e6e9a9
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x30e6e989
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30e6e969
- (void)stop;	// 0x30e6e931
@end

