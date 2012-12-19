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
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_applicationInfoQueue;	// 16 = 0x10
	id<BKSWorkspaceDelegate> _delegate;	// 20 = 0x14
	NSObject<OS_xpc_object> *_serverConnection;	// 24 = 0x18
	NSString *_topApplicationBundleID;	// 28 = 0x1c
	NSMutableArray *_runningApplicationInfo;	// 32 = 0x20
	NSMutableArray *_activatingApplications;	// 36 = 0x24
	NSMutableDictionary *_activationTokens;	// 40 = 0x28
	BKSMachSendRight *_topEventPortOverride;	// 44 = 0x2c
	unsigned _serverPort;	// 48 = 0x30
	BOOL _suspended;	// 52 = 0x34
	BOOL _locked;	// 53 = 0x35
	BOOL _workspaceOwner;	// 54 = 0x36
	BKSApplicationActivationAssertion *_topApplicationAssertion;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *activatingApplications;	// G=0x336b5db9; converted property
@property(assign, nonatomic) id<BKSWorkspaceDelegate> delegate;	// G=0x336b8e29; S=0x336b8e39; @synthesize=_delegate
@property(assign, getter=isLocked) BOOL locked;	// G=0x336b667d; S=0x336b665d; converted property
@property(readonly, assign, nonatomic) unsigned serverPort;	// G=0x336b8e49; @synthesize=_serverPort
@property(readonly, assign, nonatomic) BOOL suspended;	// G=0x336b8e59; @synthesize=_suspended
@property(retain, nonatomic) BKSMachSendRight *topEventPortOverride;	// G=0x336b8e69; S=0x336b66a1; @synthesize=_topEventPortOverride
- (id)init;	// 0x336b5321
- (id)initWithQueue:(id)queue;	// 0x336b5335
- (void)_acquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x336b715d
- (id)_activationTokenForBundleID:(id)bundleID;	// 0x336b5dc9
- (void)_clearActivationStateForBundleID:(id)bundleID;	// 0x336b5dfd
- (void)_handleDidBecomeReceiverFrom:(id)_handle to:(id)to workspaceWillResume:(BOOL)workspace;	// 0x336b6ead
- (void)_handleMessage:(id)message;	// 0x336b717d
- (id)_handleWillBecomeReceiverFrom:(id)_handle to:(id)to activationToken:(id)token;	// 0x336b6e31
- (id)_infoForBundleIdentifier:(id)bundleIdentifier;	// 0x336b66f9
- (void)_invalidateConnection;	// 0x336b5aa5
- (BOOL)_isServerBeingDebugged;	// 0x336b5c4d
- (void)_noteWillActivateBundleIdentifier:(id)_note suspended:(BOOL)suspended activationToken:(id)token;	// 0x336b5e59
- (void)_receiveApplicationDidActivate:(id)_receiveApplication;	// 0x336b8449
- (void)_receiveApplicationExited:(id)exited;	// 0x336b8775
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)changed;	// 0x336b8d6d
- (void)_receiveApplicationLaunchBegan:(id)began;	// 0x336b8191
- (void)_receiveApplicationSuspended:(id)suspended;	// 0x336b89a5
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)updated;	// 0x336b8a85
- (void)_receiveDidBecomeReceiver:(id)_receive;	// 0x336b7f45
- (void)_receiveHandleOpenURL:(id)url;	// 0x336b7fd1
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)application;	// 0x336b80ad
- (void)_receiveWillBecomeReceiver:(id)_receive;	// 0x336b7e2d
- (void)_receiveWorkspaceActivationResponse:(id)response;	// 0x336b8bed
- (void)_receiveWorkspaceIsSuspended:(id)suspended;	// 0x336b8b65
- (void)_registerWithServer;	// 0x336b55f9
- (void)_releaseApplicationActivationAssertion:(id)assertion;	// 0x336b716d
- (void)_reregister;	// 0x336b5a75
- (void)_sendAcquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x336b7ca5
- (void)_sendActivate:(id)activate withActivation:(id)activation withDeactivation:(id)deactivation token:(id)token;	// 0x336b742d
- (void)_sendApplication:(id)application setIsConnectionToEA:(BOOL)ea;	// 0x336b78f1
- (void)_sendApplication:(id)application setNowPlayingAudio:(BOOL)audio;	// 0x336b7a79
- (void)_sendApplication:(id)application setRecordingAudio:(BOOL)audio;	// 0x336b783d
- (void)_sendApplication:(id)application setTaskPort:(id)port;	// 0x336b79a5
- (void)_sendApplication:(id)application simpleGSEvent:(int)event;	// 0x336b7b2d
- (void)_sendApplication:(id)application simpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x336b7bd9
- (void)_sendClientBundleIdentifier:(id)identifier;	// 0x336b73ad
- (void)_sendLocked:(BOOL)locked;	// 0x336b76c5
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker;	// 0x336b72c9
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler;	// 0x336b7309
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;	// 0x336b7349
- (void)_sendReleaseApplicationActivationAssertion:(id)assertion;	// 0x336b7dad
- (void)_sendResume:(id)resume;	// 0x336b7611
- (void)_sendShutdown:(BOOL)shutdown;	// 0x336b7741
- (void)_sendSuspend:(id)suspend;	// 0x336b7591
- (void)_sendTopEventPortOverride:(id)override;	// 0x336b77bd
- (void)activate:(id)activate withActivation:(id)activation;	// 0x336b5f31
// converted property getter: - (id)activatingApplications;	// 0x336b5db9
- (void)application:(id)application resignActiveForReason:(int)reason;	// 0x336b6df1
- (void)application:(id)application resumeActiveForReason:(int)reason;	// 0x336b6e11
- (void)application:(id)application sendSimpleGSEvent:(int)event;	// 0x336b6dd1
- (void)application:(id)application sendSimpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x336b6de1
- (void)application:(id)application setIsConnectedToExternalAccessory:(BOOL)externalAccessory;	// 0x336b6d41
- (void)application:(id)application setNowPlayingWithAudio:(BOOL)audio;	// 0x336b6dc1
- (void)application:(id)application setRecordingAudio:(BOOL)audio;	// 0x336b690d
- (void)application:(id)application setTaskPort:(id)port;	// 0x336b6db1
- (double)backgroundTimeRemaining:(id)remaining;	// 0x336b6b15
- (void)dealloc;	// 0x336b54c5
// declared property getter: - (id)delegate;	// 0x336b8e29
- (id)description;	// 0x336b5c75
- (void)elapsedCPUTimesForApplications:(id)applications completion:(id)completion;	// 0x336b697d
- (void)invalidate;	// 0x336b5b01
- (BOOL)isApplicationConnectedToExternalAccessory:(id)externalAccessory;	// 0x336b6d89
- (BOOL)isApplicationRecordingAudio:(id)audio;	// 0x336b6955
- (BOOL)isBeingDebugged:(id)debugged;	// 0x336b6a91
- (BOOL)isBusy;	// 0x336b668d
// converted property getter: - (BOOL)isLocked;	// 0x336b667d
- (void)kill:(id)kill;	// 0x336b6521
- (void)kill:(id)kill withReason:(int)reason description:(id)description;	// 0x336b652d
- (void)killall:(BOOL)killall;	// 0x336b6515
- (id)newActivationAssertionForApplication:(id)application named:(id)named;	// 0x336b7119
- (void)resume:(id)resume;	// 0x336b65fd
- (id)runningApplications;	// 0x336b60f5
- (id)runningBundleIDForPID:(int)pid;	// 0x336b632d
// declared property getter: - (unsigned)serverPort;	// 0x336b8e49
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x336b8e39
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x336b665d
// declared property setter: - (void)setTopEventPortOverride:(id)override;	// 0x336b66a1
- (void)shutdown:(BOOL)shutdown;	// 0x336b6691
- (void)suspend:(id)suspend;	// 0x336b6539
// declared property getter: - (BOOL)suspended;	// 0x336b8e59
- (id)topActivatingApplication;	// 0x336b5d6d
- (id)topApplication;	// 0x336b5d5d
// declared property getter: - (id)topEventPortOverride;	// 0x336b8e69
@end
