/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import </libobjc.A.h>

@class NSMutableArray, TDLogger, NSConditionLock, CoreThemeDocument;

@interface TDRenditionsDistiller : NSObject {
	CoreThemeDocument *document;	// 4 = 0x4
	NSMutableArray *renditionInQueue;	// 8 = 0x8
	NSMutableArray *psiDataInfoOutQueue;	// 12 = 0xc
	NSConditionLock *inQueueLock;	// 16 = 0x10
	NSConditionLock *outQueueLock;	// 20 = 0x14
	BOOL shouldCompressCSIDataFlag;	// 24 = 0x18
	BOOL noMoreCSIDataInfo;	// 25 = 0x19
	BOOL noMoreRenditions;	// 26 = 0x1a
	TDLogger *_logger;	// 28 = 0x1c
}
@property(retain) TDLogger *logger;	// G=0x3074f7c1; S=0x3074f7d5; @synthesize=_logger
- (id)initWithDocument:(id)document shouldCompressCSIDataFlag:(BOOL)flag;	// 0x3074ebdd
- (void)_distill:(id)distill;	// 0x3074f0d1
- (void)_enqueueCSIDataInfo:(id)info;	// 0x3074ee61
- (void)_enqueueDistillingAbortedInfo;	// 0x3074eead
- (void)_enqueueLastCSIDataInfoFlag;	// 0x3074ee71
- (void)_enqueueOnInQueueTheObject:(id)queueTheObject;	// 0x3074ede1
- (void)_enqueueOnOutQueueTheObject:(id)object;	// 0x3074ee21
- (void)_enqueueOnQueue:(id)queue withQueueLock:(id)queueLock object:(id)object;	// 0x3074ed99
- (id)_nextObjectFromInQueue;	// 0x3074ef61
- (void)dealloc;	// 0x3074ecf9
- (void)detachDistillationThread;	// 0x3074f4a1
- (void)enqueueAbortFlag;	// 0x3074f519
- (void)enqueueLastRenditionFlag;	// 0x3074f4dd
- (void)enqueueRenditionSpec:(id)spec;	// 0x3074f599
// declared property getter: - (id)logger;	// 0x3074f7c1
- (id)nextCSIDataInfoFromQueue;	// 0x3074f5c9
// declared property setter: - (void)setLogger:(id)logger;	// 0x3074f7d5
@end
