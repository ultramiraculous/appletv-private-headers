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
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x31688fa9; S=0x31688fb9; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x31688f89; S=0x31688f99; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x31688ff5; S=0x31689005; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x31688fc9; S=0x31688fe1; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x316849e5
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x31684a65
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x316849c9
+ (void)forgetPersonID:(id)anId;	// 0x316849f9
+ (BOOL)isInRetryState;	// 0x31685039
+ (id)nextActivityDate;	// 0x31684db9
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x31684ecd
+ (id)personIDsWithOutstandingActivities;	// 0x31684f1d
+ (void)stopAllActivities;	// 0x31684f59
+ (id)subscriberForPersonID:(id)personID;	// 0x316848ad
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x316852e9
- (void).cxx_destruct;	// 0x31689015
- (void)_abort;	// 0x31687a6d
- (void)_checkForNewAssetCollections;	// 0x31685fd1
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x316861e5
- (void)_didReceiveAuthenticationError:(id)error;	// 0x31686cb5
- (void)_finishedRetrievingAsset:(id)asset;	// 0x31687dcd
- (void)_forget;	// 0x31687d51
- (BOOL)_hasOutstandingPoll;	// 0x31685a55
- (BOOL)_isAllowedToDownload;	// 0x31685d41
- (BOOL)_isInRetryState;	// 0x31687d99
- (void)_reauthorizeAssets;	// 0x31687801
- (void)_refreshServerSideConfigurationParameters;	// 0x316856b1
- (void)_retrieveAssets;	// 0x3168741d
- (void)_retrieveNextAssets;	// 0x316875e5
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x316857cd
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x31685ab9
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x31685c4d
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x31687919
- (id)_subscriptionsByStreamID;	// 0x31685ba1
- (void)_updateMasterManifest;	// 0x31685971
- (void)abort;	// 0x31687d41
- (void)checkForNewAssetCollections;	// 0x31685e49
- (void)checkForOutstandingActivities;	// 0x31687329
// declared property getter: - (id)daemon;	// 0x31688fa9
- (void)deactivate;	// 0x31685531
- (void)dealloc;	// 0x31685671
// declared property getter: - (id)delegate;	// 0x31688f89
- (id)ownSubscribedStream;	// 0x3168527d
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x316888fd
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x31688a01
- (void)resetSync;	// 0x31685cc1
// declared property getter: - (int)retrievalBatchSize;	// 0x31688ff5
- (void)retrieveAssets:(id)assets;	// 0x31686ec1
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x31688fb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31688f99
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x31689005
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x31688fe1
- (void)stop;	// 0x31687a59
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x31687f19
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x31688041
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x316869a9
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x31686e45
- (void)subscribeStreamsProtocol:(id)protocol didFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x31686dcd
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x31686a81
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x31686795
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x31686511
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x31686db9
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x316862e1
- (id)subscribedStreams;	// 0x31685129
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x31688fc9
@end

