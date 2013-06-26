/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AXAccessQueue : NSObject {
	NSString *_threadLocalStorageKey;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_concurrentQueue;	// 8 = 0x8
	unsigned _specialBehaviors;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL behavesAsMainQueue;	// G=0x2fe5a56d; 
@property(readonly, assign, nonatomic) BOOL behavesWithoutErrorReporting;	// G=0x2fe5a589; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;	// G=0x2fe5adc9; S=0x2fe5add9; @synthesize=_concurrentQueue
@property(readonly, assign, nonatomic) NSString *label;	// G=0x2fe5a505; 
@property(assign, nonatomic) unsigned specialBehaviors;	// G=0x2fe5ade9; S=0x2fe5adf9; @synthesize=_specialBehaviors
@property(copy, nonatomic) NSString *threadLocalStorageKey;	// G=0x2fe5ada5; S=0x2fe5adb9; @synthesize=_threadLocalStorageKey
+ (id)backgroundAccessQueue;	// 0x2fe5a081
+ (id)mainAccessQueue;	// 0x2fe59fd1
- (id)init;	// 0x2fe5a13d
- (id)initWithLabel:(id)label appendUUIDToLabel:(BOOL)label2;	// 0x2fe5a151
- (id)initWithParentClass:(Class)parentClass description:(id)description appendUUIDToLabel:(BOOL)label;	// 0x2fe5a3a5
- (unsigned)_accessQueueContextInCurrentExecutionThread;	// 0x2fe5ab11
- (id)_initWithLabel:(id)label appendUUIDToLabel:(BOOL)label2 specialBehaviors:(unsigned)behaviors;	// 0x2fe5a175
- (void)_performBlock:(id)block withDispatchFunction:(/*function-pointer*/ void *)dispatchFunction synchronously:(BOOL)synchronously accessQueueContext:(unsigned)context;	// 0x2fe5ab91
- (void)afterDelay:(double)delay processReadingBlock:(id)block;	// 0x2fe5a741
- (void)afterDelay:(double)delay processWritingBlock:(id)block;	// 0x2fe5a891
// declared property getter: - (BOOL)behavesAsMainQueue;	// 0x2fe5a56d
// declared property getter: - (BOOL)behavesWithoutErrorReporting;	// 0x2fe5a589
- (BOOL)canOnlyReadInCurrentExecutionThread;	// 0x2fe5aa61
- (BOOL)canReadInCurrentExecutionThread;	// 0x2fe5a9a1
- (BOOL)canWriteInCurrentExecutionThread;	// 0x2fe5aa05
// declared property getter: - (id)concurrentQueue;	// 0x2fe5adc9
- (void)dealloc;	// 0x2fe5a4ad
- (id)description;	// 0x2fe5aaa1
// declared property getter: - (id)label;	// 0x2fe5a505
- (void)performAsynchronousReadingBlock:(id)block;	// 0x2fe5a669
- (void)performAsynchronousWritingBlock:(id)block;	// 0x2fe5a6d5
- (void)performSynchronousReadingBlock:(id)block;	// 0x2fe5a5a5
- (void)performSynchronousWritingBlock:(id)block;	// 0x2fe5a5fd
// declared property setter: - (void)setConcurrentQueue:(id)queue;	// 0x2fe5add9
// declared property setter: - (void)setSpecialBehaviors:(unsigned)behaviors;	// 0x2fe5adf9
// declared property setter: - (void)setThreadLocalStorageKey:(id)key;	// 0x2fe5adb9
// declared property getter: - (unsigned)specialBehaviors;	// 0x2fe5ade9
// declared property getter: - (id)threadLocalStorageKey;	// 0x2fe5ada5
@end
