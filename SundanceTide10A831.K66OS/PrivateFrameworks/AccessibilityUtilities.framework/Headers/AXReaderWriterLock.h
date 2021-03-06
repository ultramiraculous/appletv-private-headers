/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface AXReaderWriterLock : NSObject {
	NSObject<OS_dispatch_queue> *_concurrentQueue;	// 4 = 0x4
	NSString *label;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *label;	// G=0x33101c7d; @synthesize
+ (id)_copyQueueLabelWithString:(id)string shouldAppendUUID:(BOOL)uuid;	// 0x33101be1
- (id)init;	// 0x33101a51
- (id)initWithLabel:(id)label appendUUIDToLabel:(BOOL)label2;	// 0x33101a65
- (void)_setLabel:(id)label;	// 0x33101c91
- (void)dealloc;	// 0x33101b39
// declared property getter: - (id)label;	// 0x33101c7d
- (void)performAsynchronousReadingBlock:(id)block;	// 0x33101bb9
- (void)performAsynchronousWritingBlock:(id)block;	// 0x33101bcd
- (void)performReadingBlock:(id)block;	// 0x33101b91
- (void)performWritingBlock:(id)block;	// 0x33101ba5
@end

