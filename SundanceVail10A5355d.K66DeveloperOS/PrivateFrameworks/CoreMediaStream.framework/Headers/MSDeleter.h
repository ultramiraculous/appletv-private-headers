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
	MSDeleteStreamsProtocol *_protocol;	// 24 = 0x18
	int _state;	// 28 = 0x1c
	MSObjectQueue *_deleteQueue;	// 32 = 0x20
	NSMutableArray *_requestedDeleteWrappers;	// 36 = 0x24
	int _batchSize;	// 40 = 0x28
	int _maxErrorCount;	// 44 = 0x2c
	id<MSDeleterDelegate> _delegate;	// 48 = 0x30
	MSMediaStreamDaemon *_daemon;	// 52 = 0x34
}
@property(assign, nonatomic) int batchSize;	// G=0x3389c3c5; S=0x3389c3d5; @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x3389c3a5; S=0x3389c3b5; @synthesize=_daemon
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// G=0x3389c385; S=0x3389c395; @synthesize=_delegate
+ (id)_clearInstantiatedDeletersByPersonID;	// 0x3389a751
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3389a7d1
+ (void)abortAllActivities;	// 0x3389ada5
+ (id)deleterForPersonID:(id)personID;	// 0x3389a619
+ (id)existingDeleterForPersonID:(id)personID;	// 0x3389a735
+ (void)forgetPersonID:(id)anId;	// 0x3389a765
+ (BOOL)isInRetryState;	// 0x3389ae85
+ (id)nextActivityDate;	// 0x3389ab25
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3389ac39
+ (id)personIDsWithOutstandingActivities;	// 0x3389ac89
+ (void)stopAllActivities;	// 0x3389acc5
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3389af75
- (void).cxx_destruct;	// 0x3389c3e5
- (void)_abort;	// 0x3389c129
- (id)_abortedError;	// 0x3389c0c9
- (void)_forget;	// 0x3389c335
- (BOOL)_isAllowedToDelete;	// 0x3389b255
- (BOOL)_isInRetryState;	// 0x3389c36d
- (void)_sendDeleteRequest;	// 0x3389b5f1
- (void)_stop;	// 0x3389c045
- (void)_updateMasterManifest;	// 0x3389b1a9
- (void)abort;	// 0x3389c34d
// declared property getter: - (int)batchSize;	// 0x3389c3c5
// declared property getter: - (id)daemon;	// 0x3389c3a5
- (void)deactivate;	// 0x3389b0e9
- (void)dealloc;	// 0x3389b169
// declared property getter: - (id)delegate;	// 0x3389c385
- (void)deleteAssetCollections:(id)collections;	// 0x3389b399
- (void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;	// 0x3389b879
- (void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x3389b789
- (void)performOutstandingActivities;	// 0x3389b585
// declared property setter: - (void)setBatchSize:(int)size;	// 0x3389c3d5
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3389c3b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3389c395
- (void)stop;	// 0x3389c35d
@end

