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
	MSDeleteStreamsProtocol *_protocol;	// 28 = 0x1c
	int _state;	// 32 = 0x20
	MSObjectQueue *_deleteQueue;	// 36 = 0x24
	NSMutableArray *_requestedDeleteWrappers;	// 40 = 0x28
	int _batchSize;	// 44 = 0x2c
	int _maxErrorCount;	// 48 = 0x30
	id<MSDeleterDelegate> _delegate;	// 52 = 0x34
	MSMediaStreamDaemon *_daemon;	// 56 = 0x38
}
@property(assign, nonatomic) int batchSize;	// G=0x3376eb81; S=0x3376eb91; @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x3376eb61; S=0x3376eb71; @synthesize=_daemon
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// G=0x3376eb41; S=0x3376eb51; @synthesize=_delegate
+ (id)_clearInstantiatedDeletersByPersonID;	// 0x3376cecd
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3376cf4d
+ (void)abortAllActivities;	// 0x3376d521
+ (id)deleterForPersonID:(id)personID;	// 0x3376cd95
+ (id)existingDeleterForPersonID:(id)personID;	// 0x3376ceb1
+ (void)forgetPersonID:(id)anId;	// 0x3376cee1
+ (BOOL)isInRetryState;	// 0x3376d601
+ (id)nextActivityDate;	// 0x3376d2a1
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3376d3b5
+ (id)personIDsWithOutstandingActivities;	// 0x3376d405
+ (void)stopAllActivities;	// 0x3376d441
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3376d6f1
- (void).cxx_destruct;	// 0x3376eba1
- (void)_abort;	// 0x3376e8e5
- (id)_abortedError;	// 0x3376e885
- (void)_forget;	// 0x3376eaf1
- (BOOL)_isAllowedToDelete;	// 0x3376d9d1
- (BOOL)_isInRetryState;	// 0x3376eb29
- (void)_sendDeleteRequest;	// 0x3376dde5
- (void)_stop;	// 0x3376e801
- (void)_updateMasterManifest;	// 0x3376d925
- (void)abort;	// 0x3376eb09
// declared property getter: - (int)batchSize;	// 0x3376eb81
// declared property getter: - (id)daemon;	// 0x3376eb61
- (void)deactivate;	// 0x3376d865
- (void)dealloc;	// 0x3376d8e5
// declared property getter: - (id)delegate;	// 0x3376eb41
- (void)deleteAssetCollections:(id)collections;	// 0x3376db15
- (void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;	// 0x3376e06d
- (void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x3376df7d
- (void)performOutstandingActivities;	// 0x3376dd01
// declared property setter: - (void)setBatchSize:(int)size;	// 0x3376eb91
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3376eb71
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3376eb51
- (void)stop;	// 0x3376eb19
@end
