/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASMeetingResponseTask : ASTask {
	NSArray *_responseItems;	// 108 = 0x6c
}
@property(readonly, assign) NSArray *responseItems;	// G=0x36c150bd; @synthesize=_responseItems
- (id)initWithResponseItems:(id)responseItems;	// 0x36c14451
- (int)commandCode;	// 0x36c144f1
- (void)dealloc;	// 0x36c144a5
- (void)finishWithError:(id)error;	// 0x36c14af5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36c14771
- (BOOL)processContext:(id)context;	// 0x36c14785
- (id)requestBody;	// 0x36c144f5
// declared property getter: - (id)responseItems;	// 0x36c150bd
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x36c15045
@end

