/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSMachSendRight, BKSSignal, NSString, NSMutableArray, NSMutableDictionary, BKSApplicationActivationAssertion;
@protocol OS_xpc_object, OS_dispatch_queue, BKSWorkspaceDelegate;

@interface BKSWorkspace : NSObject {
	BKSSignal *_invalidationSignal;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_applicationInfoQueue;	// 12 = 0xc
	id<BKSWorkspaceDelegate> _delegate;	// 16 = 0x10
	NSObject<OS_xpc_object> *_serverConnection;	// 20 = 0x14
	NSString *_topApplicationBundleID;	// 24 = 0x18
	NSMutableArray *_runningApplicationInfo;	// 28 = 0x1c
	NSMutableArray *_activatingApplications;	// 32 = 0x20
	NSMutableDictionary *_activationTokens;	// 36 = 0x24
	BKSMachSendRight *_topEventPortOverride;	// 40 = 0x28
	unsigned _serverPort;	// 44 = 0x2c
	BOOL _suspended;	// 48 = 0x30
	BOOL _locked;	// 49 = 0x31
	BOOL _workspaceOwner;	// 50 = 0x32
	BKSApplicationActivationAssertion *_topApplicationAssertion;	// 52 = 0x34
}
@property(readonly, retain) NSMutableArray *activatingApplications;	// G=0x3512bef9; converted property
@property(assign, nonatomic) id<BKSWorkspaceDelegate> delegate;	// G=0x3512ee95; S=0x3512eea5; @synthesize=_delegate
@property(assign, getter=isLocked) BOOL locked;	// G=0x3512c761; S=0x3512c741; converted property
@property(readonly, assign, nonatomic) unsigned serverPort;	// G=0x3512eeb5; @synthesize=_serverPort
@property(readonly, assign, nonatomic) BOOL suspended;	// G=0x3512eec5; @synthesize=_suspended
@property(retain, nonatomic) BKSMachSendRight *topEventPortOverride;	// G=0x3512eed5; S=0x3512c785; @synthesize=_topEventPortOverride
- (id)init;	// 0x3512b491
- (id)initWithQueue:(id)queue;	// 0x3512b4a5
- (void)_acquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x3512d221
- (id)_activationTokenForBundleID:(id)bundleID;	// 0x3512bf09
- (void)_clearActivationStateForBundleID:(id)bundleID;	// 0x3512bf3d
- (void)_handleDidBecomeReceiverFrom:(id)_handle to:(id)to;	// 0x3512cf85
- (void)_handleMessage:(id)message;	// 0x3512d241
- (id)_handleWillBecomeReceiverFrom:(id)_handle to:(id)to activationToken:(id)token;	// 0x3512cf0d
- (id)_infoForBundleIdentifier:(id)bundleIdentifier;	// 0x3512c7dd
- (void)_invalidateConnection;	// 0x3512bbe5
- (BOOL)_isServerBeingDebugged;	// 0x3512bd8d
- (void)_noteWillActivateBundleIdentifier:(id)_note activationToken:(id)token;	// 0x3512bf99
- (void)_receiveApplicationDidActivate:(id)_receiveApplication;	// 0x3512e4b9
- (void)_receiveApplicationExited:(id)exited;	// 0x3512e7e5
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)changed;	// 0x3512edd9
- (void)_receiveApplicationLaunchBegan:(id)began;	// 0x3512e235
- (void)_receiveApplicationSuspended:(id)suspended;	// 0x3512ea11
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)updated;	// 0x3512eaf1
- (void)_receiveDidBecomeReceiver:(id)_receive;	// 0x3512e009
- (void)_receiveHandleOpenURL:(id)url;	// 0x3512e075
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)application;	// 0x3512e151
- (void)_receiveWillBecomeReceiver:(id)_receive;	// 0x3512def1
- (void)_receiveWorkspaceActivationResponse:(id)response;	// 0x3512ec59
- (void)_receiveWorkspaceIsSuspended:(id)suspended;	// 0x3512ebd1
- (void)_registerWithServer;	// 0x3512b739
- (void)_releaseApplicationActivationAssertion:(id)assertion;	// 0x3512d231
- (void)_reregister;	// 0x3512bbb5
- (void)_sendAcquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x3512dd69
- (void)_sendActivate:(id)activate withActivation:(id)activation withDeactivation:(id)deactivation token:(id)token;	// 0x3512d4f1
- (void)_sendApplication:(id)application setIsConnectionToEA:(BOOL)ea;	// 0x3512d9b5
- (void)_sendApplication:(id)application setNowPlayingAudio:(BOOL)audio;	// 0x3512db3d
- (void)_sendApplication:(id)application setRecordingAudio:(BOOL)audio;	// 0x3512d901
- (void)_sendApplication:(id)application setTaskPort:(id)port;	// 0x3512da69
- (void)_sendApplication:(id)application simpleGSEvent:(int)event;	// 0x3512dbf1
- (void)_sendApplication:(id)application simpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x3512dc9d
- (void)_sendClientBundleIdentifier:(id)identifier;	// 0x3512d471
- (void)_sendLocked:(BOOL)locked;	// 0x3512d789
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker;	// 0x3512d38d
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler;	// 0x3512d3cd
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;	// 0x3512d40d
- (void)_sendReleaseApplicationActivationAssertion:(id)assertion;	// 0x3512de71
- (void)_sendResume:(id)resume;	// 0x3512d6d5
- (void)_sendShutdown:(BOOL)shutdown;	// 0x3512d805
- (void)_sendSuspend:(id)suspend;	// 0x3512d655
- (void)_sendTopEventPortOverride:(id)override;	// 0x3512d881
- (void)activate:(id)activate withActivation:(id)activation;	// 0x3512c021
// converted property getter: - (id)activatingApplications;	// 0x3512bef9
- (void)application:(id)application resignActiveForReason:(int)reason;	// 0x3512cecd
- (void)application:(id)application resumeActiveForReason:(int)reason;	// 0x3512ceed
- (void)application:(id)application sendSimpleGSEvent:(int)event;	// 0x3512cead
- (void)application:(id)application sendSimpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x3512cebd
- (void)application:(id)application setIsConnectedToExternalAccessory:(BOOL)externalAccessory;	// 0x3512ce1d
- (void)application:(id)application setNowPlayingWithAudio:(BOOL)audio;	// 0x3512ce9d
- (void)application:(id)application setRecordingAudio:(BOOL)audio;	// 0x3512c9f1
- (void)application:(id)application setTaskPort:(id)port;	// 0x3512ce8d
- (double)backgroundTimeRemaining:(id)remaining;	// 0x3512cbf9
- (void)dealloc;	// 0x3512b615
// declared property getter: - (id)delegate;	// 0x3512ee95
- (id)description;	// 0x3512bdb5
- (void)elapsedCPUTimesForApplications:(id)applications completion:(id)completion;	// 0x3512ca61
- (void)invalidate;	// 0x3512bc41
- (BOOL)isApplicationConnectedToExternalAccessory:(id)externalAccessory;	// 0x3512ce65
- (BOOL)isApplicationRecordingAudio:(id)audio;	// 0x3512ca39
- (BOOL)isBeingDebugged:(id)debugged;	// 0x3512cb75
- (BOOL)isBusy;	// 0x3512c771
// converted property getter: - (BOOL)isLocked;	// 0x3512c761
- (void)kill:(id)kill;	// 0x3512c605
- (void)kill:(id)kill withReason:(int)reason description:(id)description;	// 0x3512c611
- (void)killall:(BOOL)killall;	// 0x3512c5f9
- (id)newActivationAssertionForApplication:(id)application named:(id)named;	// 0x3512d1dd
- (void)resume:(id)resume;	// 0x3512c6e1
- (id)runningApplications;	// 0x3512c1d9
- (id)runningBundleIDForPID:(int)pid;	// 0x3512c411
// declared property getter: - (unsigned)serverPort;	// 0x3512eeb5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3512eea5
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x3512c741
// declared property setter: - (void)setTopEventPortOverride:(id)override;	// 0x3512c785
- (void)shutdown:(BOOL)shutdown;	// 0x3512c775
- (void)suspend:(id)suspend;	// 0x3512c61d
// declared property getter: - (BOOL)suspended;	// 0x3512eec5
- (id)topActivatingApplication;	// 0x3512bead
- (id)topApplication;	// 0x3512be9d
// declared property getter: - (id)topEventPortOverride;	// 0x3512eed5
@end

