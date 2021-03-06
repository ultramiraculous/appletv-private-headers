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
@property(readonly, assign) NSArray *responseItems;	// G=0x339d8b2d; @synthesize=_responseItems
- (id)initWithResponseItems:(id)responseItems;	// 0x339d7de9
- (int)commandCode;	// 0x339d7e89
- (void)dealloc;	// 0x339d7e3d
- (void)finishWithError:(id)error;	// 0x339d848d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x339d8109
- (BOOL)processContext:(id)context;	// 0x339d811d
- (id)requestBody;	// 0x339d7e8d
// declared property getter: - (id)responseItems;	// 0x339d8b2d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x339d8ab5
@end

