/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSString, BRAsyncTaskContext;

__attribute__((visibility("hidden")))
@interface BRAsyncTask : XXUnknownSuperclass {
	NSThread *_callingThread;	// 4 = 0x4
	id _target;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _object;	// 16 = 0x10
	id _result;	// 20 = 0x14
	BRAsyncTaskContext *_context;	// 24 = 0x18
	int _state;	// 28 = 0x1c
	NSString *_identifier;	// 32 = 0x20
}
@property(readonly, retain) NSThread *callingThread;	// G=0x386d6d; converted property
@property(readonly, retain) BRAsyncTaskContext *context;	// G=0x3869c5; converted property
@property(retain) NSString *identifier;	// G=0x386a11; S=0x3869d5; converted property
@property(readonly, retain) id object;	// G=0x3869b5; converted property
@property(readonly, retain) id result;	// G=0x386d8d; converted property
@property(readonly, assign) SEL selector;	// G=0x386995; converted property
@property(assign) int state;	// G=0x386985; S=0x386d7d; converted property
@property(readonly, retain) id target;	// G=0x3869a5; converted property
+ (void)_runTaskBlock:(id)block;	// 0x3867d5
+ (void)initialize;	// 0x3865f9
+ (id)taskWithBlock:(id)block;	// 0x3866f9
+ (id)taskWithContext:(id)context withBlock:(id)block;	// 0x386741
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object;	// 0x38666d
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x38669d
+ (id)voidReturnValue;	// 0x38665d
- (id)_initWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x386a21
// converted property getter: - (id)callingThread;	// 0x386d6d
- (void)cancel;	// 0x386955
// converted property getter: - (id)context;	// 0x3869c5
- (void)dealloc;	// 0x3867dd
- (id)description;	// 0x386869
// converted property getter: - (id)identifier;	// 0x386a11
- (id)invoke;	// 0x386ae1
// converted property getter: - (id)object;	// 0x3869b5
// converted property getter: - (id)result;	// 0x386d8d
- (void)run;	// 0x3868d5
// converted property getter: - (SEL)selector;	// 0x386995
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x3869d5
// converted property setter: - (void)setState:(int)state;	// 0x386d7d
// converted property getter: - (int)state;	// 0x386985
// converted property getter: - (id)target;	// 0x3869a5
@end

