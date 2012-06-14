/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSSet;

@interface ASPingTask : ASTask {
	NSSet *_folders;	// 104 = 0x68
	NSSet *_oldFolders;	// 108 = 0x6c
	int _seconds;	// 112 = 0x70
	int _oldSeconds;	// 116 = 0x74
}
@property(readonly, retain) NSSet *folders;	// G=0x318a48f5; converted property
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x318a479d
- (int)commandCode;	// 0x318a48e1
- (void)dealloc;	// 0x318a483d
- (void)finishWithError:(id)error;	// 0x318a512d
// converted property getter: - (id)folders;	// 0x318a48f5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x318a4c39
- (int)heartbeat;	// 0x318a48e5
- (int)interfaceBinding;	// 0x318a489d
- (void)loadRequest:(id)request;	// 0x318a494d
- (BOOL)processContext:(id)context;	// 0x318a4c4d
- (id)requestBody;	// 0x318a499d
- (void)requestCancelTaskWithReason:(int)reason;	// 0x318a509d
- (BOOL)shouldForceNetworking;	// 0x318a54fd
- (BOOL)shouldHoldPowerAssertion;	// 0x318a48dd
- (BOOL)shouldReportTimeInNetwork;	// 0x318a54f9
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x318a54c5
- (double)timeoutInterval;	// 0x318a492d
@end
