/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSSet;

@interface ASPingTask : ASTask {
	NSSet *_folders;	// 108 = 0x6c
	NSSet *_oldFolders;	// 112 = 0x70
	int _seconds;	// 116 = 0x74
	int _oldSeconds;	// 120 = 0x78
}
@property(readonly, retain) NSSet *folders;	// G=0x33c05f55; converted property
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x33c05dfd
- (int)commandCode;	// 0x33c05f41
- (void)dealloc;	// 0x33c05e99
- (void)finishWithError:(id)error;	// 0x33c066b1
// converted property getter: - (id)folders;	// 0x33c05f55
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x33c062a1
- (int)heartbeat;	// 0x33c05f45
- (int)interfaceBinding;	// 0x33c05efd
- (void)loadRequest:(id)request;	// 0x33c05fad
- (BOOL)processContext:(id)context;	// 0x33c062b5
- (id)requestBody;	// 0x33c05ffd
- (void)requestCancelTaskWithReason:(int)reason;	// 0x33c06625
- (BOOL)shouldHoldPowerAssertion;	// 0x33c05f3d
- (BOOL)shouldReportTimeInNetwork;	// 0x33c06a99
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x33c06a65
- (double)timeoutInterval;	// 0x33c05f8d
@end

