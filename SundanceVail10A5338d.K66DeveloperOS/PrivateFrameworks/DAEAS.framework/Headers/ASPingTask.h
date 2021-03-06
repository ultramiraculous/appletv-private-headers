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
@property(readonly, retain) NSSet *folders;	// G=0x36f2b805; converted property
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x36f2b6ad
- (int)commandCode;	// 0x36f2b7f1
- (void)dealloc;	// 0x36f2b749
- (void)finishWithError:(id)error;	// 0x36f2bf61
// converted property getter: - (id)folders;	// 0x36f2b805
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36f2bb51
- (int)heartbeat;	// 0x36f2b7f5
- (int)interfaceBinding;	// 0x36f2b7ad
- (void)loadRequest:(id)request;	// 0x36f2b85d
- (BOOL)processContext:(id)context;	// 0x36f2bb65
- (id)requestBody;	// 0x36f2b8ad
- (void)requestCancelTaskWithReason:(int)reason;	// 0x36f2bed5
- (BOOL)shouldHoldPowerAssertion;	// 0x36f2b7ed
- (BOOL)shouldReportTimeInNetwork;	// 0x36f2c349
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x36f2c315
- (double)timeoutInterval;	// 0x36f2b83d
@end

