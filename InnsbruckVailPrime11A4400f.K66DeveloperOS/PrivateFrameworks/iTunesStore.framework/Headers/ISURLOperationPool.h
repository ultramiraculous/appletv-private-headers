/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x33c8a579; S=0x33c8a589; @synthesize=_operationQueue
- (id)init;	// 0x33c8a149
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x33c8a3c1
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x33c8a201
- (void)cancelOperation:(id)operation;	// 0x33c8a2b1
- (void)dealloc;	// 0x33c8a1b5
// declared property getter: - (id)operationQueue;	// 0x33c8a579
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x33c8a589
@end

