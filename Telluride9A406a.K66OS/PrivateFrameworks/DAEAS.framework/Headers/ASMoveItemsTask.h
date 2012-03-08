/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSMutableArray, NSArray;

@interface ASMoveItemsTask : ASTask {
	NSMutableArray *_moveItems;	// 104 = 0x68
	NSArray *_pushedMoveRequests;	// 108 = 0x6c
	int _dataclass;	// 112 = 0x70
}
@property(assign) int dataclass;	// G=0x3441e54d; S=0x3441e55d; @synthesize=_dataclass
@property(retain) NSArray *pushedMoveRequests;	// G=0x3441e515; S=0x3441e529; @synthesize=_pushedMoveRequests
- (void)addSourceID:(id)anId sourceFolder:(id)folder destinatonFolder:(id)folder3;	// 0x3441da55
- (int)commandCode;	// 0x3441da51
// declared property getter: - (int)dataclass;	// 0x3441e54d
- (void)dealloc;	// 0x3441d9f1
- (void)finishWithError:(id)error;	// 0x3441e079
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3441db41
- (BOOL)processContext:(id)context;	// 0x3441db51
// declared property getter: - (id)pushedMoveRequests;	// 0x3441e515
- (id)requestBody;	// 0x3441e2c9
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x3441e55d
// declared property setter: - (void)setPushedMoveRequests:(id)requests;	// 0x3441e529
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x3441e489
@end
