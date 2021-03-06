/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {
@private
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x35553b69; S=0x35553b79; @synthesize=_operationQueue
- (id)init;	// 0x35553771
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x355539c1
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x35553829
- (void)cancelOperation:(id)operation;	// 0x355538d5
- (void)dealloc;	// 0x355537dd
// declared property getter: - (id)operationQueue;	// 0x35553b69
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x35553b79
@end

