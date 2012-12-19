/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayDiagnostics.framework/AirPlayDiagnostics
 */

#import "AirPlayDiagnostics-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class AirPlayDiagnosticsFullscreenController, AirPlayDiagnosticsPopoverController, AirPlayDiagnosticsRoutePicker, NSString, NSDictionary, NSMutableArray, MFMailComposeViewController, UIAlertView, AirPlayDiagnosticsIssuesController;
@protocol OS_dispatch_source, OS_xpc_object, OS_dispatch_semaphore;

@interface AirPlayDiagnosticsStateMachine : NSObject <UIPopoverControllerDelegate> {
	HTTPClientPrivate *_standardAirPlayLogHttpClient;	// 4 = 0x4
	HTTPClientPrivate *_mobilityInfoHttpClient;	// 8 = 0x8
	NSObject<OS_dispatch_source> *_progressTimer;	// 12 = 0xc
	NSString *_reason;	// 16 = 0x10
	NSDictionary *_route;	// 20 = 0x14
	int _state;	// 24 = 0x18
	NSMutableArray *_collectedLogs;	// 28 = 0x1c
	NSMutableArray *_logErrors;	// 32 = 0x20
	AirPlayDiagnosticsPopoverController *_popoverMasterViewController;	// 36 = 0x24
	AirPlayDiagnosticsFullscreenController *_fullscreenMasterViewController;	// 40 = 0x28
	AirPlayDiagnosticsIssuesController *_issuesContentViewController;	// 44 = 0x2c
	AirPlayDiagnosticsRoutePicker *_routesContentViewController;	// 48 = 0x30
	MFMailComposeViewController *_mailerContentViewController;	// 52 = 0x34
	NSObject<OS_xpc_object> *_localLogConnection;	// 56 = 0x38
	UIAlertView *_progressDialog;	// 60 = 0x3c
	UIAlertView *_cancelDialog;	// 64 = 0x40
	int _noOfLogsToWait;	// 68 = 0x44
	NSObject<OS_dispatch_semaphore> *_internalLock;	// 72 = 0x48
	BOOL _canceledLoggingk;	// 76 = 0x4c
}
@property(retain, nonatomic) UIAlertView *cancelDialog;	// G=0x333e9f89; S=0x333e9f99; @synthesize=_cancelDialog
@property(assign, nonatomic) BOOL canceledLogging;	// G=0x333ea009; S=0x333ea019; @synthesize=_canceledLoggingk
@property(retain, nonatomic) NSMutableArray *collectedLogs;	// G=0x333e9e29; S=0x333e9e39; @synthesize=_collectedLogs
@property(retain, nonatomic) AirPlayDiagnosticsFullscreenController *fullscreenMasterViewController;	// G=0x333e9e89; S=0x333e9e99; @synthesize=_fullscreenMasterViewController
@property(assign, nonatomic) NSObject<OS_dispatch_semaphore> *internalLock;	// G=0x333e9fe9; S=0x333e9ff9; @synthesize=_internalLock
@property(retain, nonatomic) AirPlayDiagnosticsIssuesController *issuesContentViewController;	// G=0x333e9ea9; S=0x333e9eb9; @synthesize=_issuesContentViewController
@property(assign, nonatomic) NSObject<OS_xpc_object> *localLogConnection;	// G=0x333e9f09; S=0x333e9f19; @synthesize=_localLogConnection
@property(retain, nonatomic) NSMutableArray *logErrors;	// G=0x333e9e49; S=0x333e9e59; @synthesize=_logErrors
@property(retain, nonatomic) MFMailComposeViewController *mailerContentViewController;	// G=0x333e9ee9; S=0x333e9ef9; @synthesize=_mailerContentViewController
@property(assign, nonatomic) HTTPClientPrivate *mobilityInfoHttpClient;	// G=0x333e9f49; S=0x333e9f59; @synthesize=_mobilityInfoHttpClient
@property(assign, nonatomic) int noOfLogsToWait;	// G=0x333e9fc9; S=0x333e9fd9; @synthesize=_noOfLogsToWait
@property(retain, nonatomic) AirPlayDiagnosticsPopoverController *popoverMasterViewController;	// G=0x333e9e69; S=0x333e9e79; @synthesize=_popoverMasterViewController
@property(retain, nonatomic) UIAlertView *progressDialog;	// G=0x333e9f69; S=0x333e9f79; @synthesize=_progressDialog
@property(assign, nonatomic) NSObject<OS_dispatch_source> *progressTimer;	// G=0x333e9fa9; S=0x333e9fb9; @synthesize=_progressTimer
@property(retain, nonatomic) NSString *reason;	// G=0x333e9dc9; S=0x333e9dd9; @synthesize=_reason
@property(retain, nonatomic) NSDictionary *route;	// G=0x333e9de9; S=0x333e9df9; @synthesize=_route
@property(retain, nonatomic) AirPlayDiagnosticsRoutePicker *routesContentViewController;	// G=0x333e9ec9; S=0x333e9ed9; @synthesize=_routesContentViewController
@property(assign, nonatomic) HTTPClientPrivate *standardAirPlayLogHttpClient;	// G=0x333e9f29; S=0x333e9f39; @synthesize=_standardAirPlayLogHttpClient
@property(assign, nonatomic) int state;	// G=0x333e9e09; S=0x333e9e19; @synthesize=_state
+ (id)sharedInstance;	// 0x333e7181
- (void)initLogContext;	// 0x333e7381
- (void)abortFetchLogs;	// 0x333e8f9d
- (void)abortFetchRemoteLogsIfActive;	// 0x333e9089
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x333e8971
- (void)allowSleepWhenIdle;	// 0x333e7269
- (void)attachAppSpecificData;	// 0x333e78f5
// declared property getter: - (id)cancelDialog;	// 0x333e9f89
// declared property getter: - (BOOL)canceledLogging;	// 0x333ea009
- (void)cleanupLogContext;	// 0x333e73ad
- (void)cleanupStorage;	// 0x333e9afd
- (void)closeController:(id)controller withParam:(id)param completion:(id)completion;	// 0x333e7629
// declared property getter: - (id)collectedLogs;	// 0x333e9e29
- (void)configureAlertView:(id)view;	// 0x333e85dd
- (void)dealloc;	// 0x333e9bc9
- (long)fetchRemoteLogWithCommands:(id)commands saveAs:(id)as using:(HTTPClientPrivate *)aUsing;	// 0x333e93cd
- (long)fetchRemoteMobilityInfo;	// 0x333e911d
- (long)fetchRemoteStandardAirPlayLog;	// 0x333e9275
- (id)findTopView;	// 0x333e7561
- (id)firstContentViewController;	// 0x333e7315
// declared property getter: - (id)fullscreenMasterViewController;	// 0x333e9e89
- (void)goto:(int)aGoto fromViewController:(id)viewController withParam:(id)param;	// 0x333e7e35
- (void)gotoMainThreadState:(int)state fromViewController:(id)viewController withParam:(id)param;	// 0x333e7f11
- (void)gotoStateAssociatedWithViewController:(id)viewController;	// 0x333e8299
- (void)haltByViewController:(id)controller;	// 0x333e8339
- (void)hideCancelUI;	// 0x333e8535
- (void)hideProgressUI;	// 0x333e8a1d
// declared property getter: - (id)internalLock;	// 0x333e9fe9
// declared property getter: - (id)issuesContentViewController;	// 0x333e9ea9
- (id)listAllIssues;	// 0x333e99a9
// declared property getter: - (id)localLogConnection;	// 0x333e9f09
- (void)lock;	// 0x333e71c9
// declared property getter: - (id)logErrors;	// 0x333e9e49
// declared property getter: - (id)mailerContentViewController;	// 0x333e9ee9
- (id)makeReadableAttachmentName:(id)name;	// 0x333e78b1
// declared property getter: - (HTTPClientPrivate *)mobilityInfoHttpClient;	// 0x333e9f49
- (void)mustNotSleepWhenIdle;	// 0x333e71f9
// declared property getter: - (int)noOfLogsToWait;	// 0x333e9fc9
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x333e7305
// declared property getter: - (id)popoverMasterViewController;	// 0x333e9e69
- (void)prepareCommonProblems;	// 0x333e7839
- (void)prepareMailer;	// 0x333e7a1d
- (void)prepareRoutes;	// 0x333e783d
- (void)processLocalLogsForViewController:(id)viewController;	// 0x333e8b99
- (void)processLogDone:(id)done error:(id)error;	// 0x333e9759
- (void)processLogsFor:(id)aFor fromRoute:(id)route;	// 0x333e8ad9
- (void)processRemoteLogsFor:(id)aFor fromRoute:(id)route;	// 0x333e8f5d
// declared property getter: - (id)progressDialog;	// 0x333e9f69
// declared property getter: - (id)progressTimer;	// 0x333e9fa9
- (BOOL)readyToGo;	// 0x333e74e1
// declared property getter: - (id)reason;	// 0x333e9dc9
- (void)resetController:(id)controller;	// 0x333e777d
// declared property getter: - (id)route;	// 0x333e9de9
// declared property getter: - (id)routesContentViewController;	// 0x333e9ec9
// declared property setter: - (void)setCancelDialog:(id)dialog;	// 0x333e9f99
// declared property setter: - (void)setCanceledLogging:(BOOL)logging;	// 0x333ea019
// declared property setter: - (void)setCollectedLogs:(id)logs;	// 0x333e9e39
// declared property setter: - (void)setFullscreenMasterViewController:(id)controller;	// 0x333e9e99
// declared property setter: - (void)setInternalLock:(id)lock;	// 0x333e9ff9
// declared property setter: - (void)setIssuesContentViewController:(id)controller;	// 0x333e9eb9
// declared property setter: - (void)setLocalLogConnection:(id)connection;	// 0x333e9f19
// declared property setter: - (void)setLogErrors:(id)errors;	// 0x333e9e59
// declared property setter: - (void)setMailerContentViewController:(id)controller;	// 0x333e9ef9
// declared property setter: - (void)setMobilityInfoHttpClient:(HTTPClientPrivate *)client;	// 0x333e9f59
// declared property setter: - (void)setNoOfLogsToWait:(int)wait;	// 0x333e9fd9
// declared property setter: - (void)setPopoverMasterViewController:(id)controller;	// 0x333e9e79
// declared property setter: - (void)setProgressDialog:(id)dialog;	// 0x333e9f79
// declared property setter: - (void)setProgressTimer:(id)timer;	// 0x333e9fb9
// declared property setter: - (void)setReason:(id)reason;	// 0x333e9dd9
// declared property setter: - (void)setRoute:(id)route;	// 0x333e9df9
// declared property setter: - (void)setRoutesContentViewController:(id)controller;	// 0x333e9ed9
// declared property setter: - (void)setStandardAirPlayLogHttpClient:(HTTPClientPrivate *)client;	// 0x333e9f39
// declared property setter: - (void)setState:(int)state;	// 0x333e9e19
- (void)showCancelUI;	// 0x333e8391
- (void)showProgressUI;	// 0x333e8841
// declared property getter: - (HTTPClientPrivate *)standardAirPlayLogHttpClient;	// 0x333e9f29
- (void)startEngineWithViewController:(id)viewController;	// 0x333e73d5
// declared property getter: - (int)state;	// 0x333e9e09
- (void)transitFrom:(id)from to:(id)to;	// 0x333e75b9
- (void)unlock;	// 0x333e71e5
- (void)usePopover:(id)popover onViewController:(id)controller;	// 0x333e72c9
@end
