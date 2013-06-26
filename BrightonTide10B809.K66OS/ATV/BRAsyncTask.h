/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRAsyncTaskContext, NSThread, NSString;

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
@property(readonly, retain) NSThread *callingThread;	// G=0x39d1e1; converted property
@property(readonly, retain) BRAsyncTaskContext *context;	// G=0x39ce39; converted property
@property(retain) NSString *identifier;	// G=0x39ce85; S=0x39ce49; converted property
@property(readonly, retain) id object;	// G=0x39ce29; converted property
@property(readonly, retain) id result;	// G=0x39d201; converted property
@property(readonly, assign) SEL selector;	// G=0x39ce09; converted property
@property(assign) int state;	// G=0x39cdf9; S=0x39d1f1; converted property
@property(readonly, retain) id target;	// G=0x39ce19; converted property
+ (void)_runTaskBlock:(id)block;	// 0x39cc49
+ (void)initialize;	// 0x39ca6d
+ (id)taskWithBlock:(id)block;	// 0x39cb6d
+ (id)taskWithContext:(id)context withBlock:(id)block;	// 0x39cbb5
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object;	// 0x39cae1
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x39cb11
+ (id)voidReturnValue;	// 0x39cad1
- (id)_initWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x39ce95
// converted property getter: - (id)callingThread;	// 0x39d1e1
- (void)cancel;	// 0x39cdc9
// converted property getter: - (id)context;	// 0x39ce39
- (void)dealloc;	// 0x39cc51
- (id)description;	// 0x39ccdd
// converted property getter: - (id)identifier;	// 0x39ce85
- (id)invoke;	// 0x39cf55
// converted property getter: - (id)object;	// 0x39ce29
// converted property getter: - (id)result;	// 0x39d201
- (void)run;	// 0x39cd49
// converted property getter: - (SEL)selector;	// 0x39ce09
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x39ce49
// converted property setter: - (void)setState:(int)state;	// 0x39d1f1
// converted property getter: - (int)state;	// 0x39cdf9
// converted property getter: - (id)target;	// 0x39ce19
@end
