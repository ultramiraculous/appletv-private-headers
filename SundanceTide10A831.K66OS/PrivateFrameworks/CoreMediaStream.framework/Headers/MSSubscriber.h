/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "MSSubscriber.h"
#import "MSSubscribeStreamsProtocolDelegate.h"
#import "MSSubscribeStorageProtocolDelegate.h"
#import "MSReauthorizationProtocolDelegate.h"

@class NSMutableArray, NSMutableDictionary, MSMediaStreamDaemon, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@protocol MSSubscriber
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
// declared property getter: - (id)delegate;
- (id)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
- (id)subscribedStreams;
@end

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
	id<MSSubscriberDelegate> _delegate;	// 32 = 0x20
	MSMediaStreamDaemon *_daemon;	// 36 = 0x24
	BOOL _checkOneMoreTime;	// 40 = 0x28
	int _state;	// 44 = 0x2c
	MSSubscribeStreamsProtocol *_protocol;	// 48 = 0x30
	NSMutableDictionary *_newSubscriptionsByStreamID;	// 52 = 0x34
	int _retrievalState;	// 56 = 0x38
	id<MSSubscribeStorageProtocol> _storageProtocol;	// 60 = 0x3c
	MSReauthorizationProtocol *_reauthProtocol;	// 64 = 0x40
	MSObjectQueue *_retrievalQueue;	// 68 = 0x44
	NSMutableArray *_assetsBeingRetrieved;	// 72 = 0x48
	long long _targetRetrievalByteCount;	// 76 = 0x4c
	int _retrievalBatchSize;	// 84 = 0x54
	int _maxErrorCount;	// 88 = 0x58
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x307431e1; S=0x307431f1; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x307431c1; S=0x307431d1; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x3074322d; S=0x3074323d; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x30743201; S=0x30743219; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x3073ec1d
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3073ec9d
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x3073ec01
+ (void)forgetPersonID:(id)anId;	// 0x3073ec31
+ (BOOL)isInRetryState;	// 0x3073f271
+ (id)nextActivityDate;	// 0x3073eff1
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3073f105
+ (id)personIDsWithOutstandingActivities;	// 0x3073f155
+ (void)stopAllActivities;	// 0x3073f191
+ (id)subscriberForPersonID:(id)personID;	// 0x3073eae5
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3073f521
- (void).cxx_destruct;	// 0x3074324d
- (void)_abort;	// 0x30741ca5
- (void)_checkForNewAssetCollections;	// 0x30740209
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x3074041d
- (void)_didReceiveAuthenticationError:(id)error;	// 0x30740eed
- (void)_finishedRetrievingAsset:(id)asset;	// 0x30742005
- (void)_forget;	// 0x30741f89
- (BOOL)_hasOutstandingPoll;	// 0x3073fc8d
- (BOOL)_isAllowedToDownload;	// 0x3073ff79
- (BOOL)_isInRetryState;	// 0x30741fd1
- (void)_reauthorizeAssets;	// 0x30741a39
- (void)_refreshServerSideConfigurationParameters;	// 0x3073f8e9
- (void)_retrieveAssets;	// 0x30741655
- (void)_retrieveNextAssets;	// 0x3074181d
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x3073fa05
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x3073fcf1
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x3073fe85
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x30741b51
- (id)_subscriptionsByStreamID;	// 0x3073fdd9
- (void)_updateMasterManifest;	// 0x3073fba9
- (void)abort;	// 0x30741f79
- (void)checkForNewAssetCollections;	// 0x30740081
- (void)checkForOutstandingActivities;	// 0x30741561
// declared property getter: - (id)daemon;	// 0x307431e1
- (void)deactivate;	// 0x3073f769
- (void)dealloc;	// 0x3073f8a9
// declared property getter: - (id)delegate;	// 0x307431c1
- (id)ownSubscribedStream;	// 0x3073f4b5
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x30742b35
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x30742c39
- (void)resetSync;	// 0x3073fef9
// declared property getter: - (int)retrievalBatchSize;	// 0x3074322d
- (void)retrieveAssets:(id)assets;	// 0x307410f9
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x307431f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x307431d1
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x3074323d
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x30743219
- (void)stop;	// 0x30741c91
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x30742151
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x30742279
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x30740be1
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x3074107d
- (void)subscribeStreamsProtocol:(id)protocol didFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x30741005
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x30740cb9
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x307409cd
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x30740749
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x30740ff1
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x30740519
- (id)subscribedStreams;	// 0x3073f361
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x30743201
@end

