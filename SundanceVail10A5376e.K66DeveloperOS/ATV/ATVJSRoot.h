/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVJSObject.h"

@class ATVJSContext, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVJSRoot : XXUnknownSuperclass <ATVJSObject> {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	NSMutableDictionary *_timers;	// 12 = 0xc
	NSLock *_timersLock;	// 16 = 0x10
}
@property(retain) ATVJSContext *context;	// G=0x164625; S=0x164639; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x164649; S=0x164659; @synthesize=_jsObjectRef
@property(retain, nonatomic) NSMutableDictionary *timers;	// G=0x164669; S=0x164679; @synthesize=_timers
@property(retain, nonatomic) NSLock *timersLock;	// G=0x164689; S=0x164699; @synthesize=_timersLock
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2;	// 0x163a39
- (void)_clearAllTimers;	// 0x1649b1
- (void)_clearTimer:(id)timer;	// 0x16488d
- (id)_startTimer:(double)timer repeating:(BOOL)repeating callback:(OpaqueJSValue *)callback thisObject:(OpaqueJSValue *)object args:(const OpaqueJSValue **)args argCount:(unsigned long)count;	// 0x1646a9
- (void)_timerFired:(id)fired;	// 0x164ad5
// declared property getter: - (id)context;	// 0x164625
- (void)dealloc;	// 0x1645ad
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x164649
// declared property setter: - (void)setContext:(id)context;	// 0x164639
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x164659
// declared property setter: - (void)setTimers:(id)timers;	// 0x164679
// declared property setter: - (void)setTimersLock:(id)lock;	// 0x164699
// declared property getter: - (id)timers;	// 0x164669
// declared property getter: - (id)timersLock;	// 0x164689
@end

