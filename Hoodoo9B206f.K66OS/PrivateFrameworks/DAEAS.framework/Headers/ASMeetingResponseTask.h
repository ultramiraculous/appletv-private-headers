/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASMeetingResponseTask : ASTask {
	NSArray *_responseItems;	// 104 = 0x68
}
@property(readonly, assign) NSArray *responseItems;	// G=0x321a52ed; @synthesize=_responseItems
- (id)initWithResponseItems:(id)responseItems;	// 0x321a4675
- (int)commandCode;	// 0x321a4715
- (void)dealloc;	// 0x321a46c9
- (void)finishWithError:(id)error;	// 0x321a4d3d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321a48d9
- (BOOL)processContext:(id)context;	// 0x321a48ed
- (id)requestBody;	// 0x321a4719
// declared property getter: - (id)responseItems;	// 0x321a52ed
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x321a5271
@end
