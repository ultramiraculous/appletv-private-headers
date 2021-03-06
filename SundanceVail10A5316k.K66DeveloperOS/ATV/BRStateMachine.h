/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSRunLoop, NSTimer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRStateMachine : XXUnknownSuperclass {
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x370a81; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x370ac1; S=0x370ad1; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x370aa9; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x370a95; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x370a61; S=0x370a71; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x36fca9
+ (void)initialize;	// 0x36fb75
+ (void)registerStateMachine:(id)machine;	// 0x36fbc9
+ (id)stateMachineWithName:(id)name;	// 0x36fdc1
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x36feb5
- (id)_eventHandlerForEvent:(id)event;	// 0x370e65
- (void)_processNextEvent;	// 0x370ae1
// declared property getter: - (id)currentState;	// 0x370a81
- (void)dealloc;	// 0x36ffe9
- (void)deregisterHandlers;	// 0x3706d1
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x370ac1
// declared property getter: - (BOOL)immediate;	// 0x370aa9
- (void)logUnhandledEvents;	// 0x370711
// declared property getter: - (id)name;	// 0x370a95
- (void)postEvent:(id)event withContext:(id)context;	// 0x370165
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x370189
- (void)purgeEventQueue;	// 0x3704b9
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x370651
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x370581
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x370ad1
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x370a71
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x370a61
@end

