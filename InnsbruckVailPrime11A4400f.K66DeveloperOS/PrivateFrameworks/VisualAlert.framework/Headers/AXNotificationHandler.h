/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import </libobjc.A.h>

@class NSString;

@interface AXNotificationHandler : NSObject {
	NSString *_notificationName;	// 4 = 0x4
	id _target;	// 8 = 0x8
	id _dispatcher;	// 12 = 0xc
	unsigned _observerIdentifier;	// 16 = 0x10
	BOOL _valid;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;	// G=0x32e27841; S=0x32e27851; 
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;	// G=0x32e28115; S=0x32e28125; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x32e28135; S=0x32e28145; @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x32e28105; @synthesize=_valid
+ (id)_safelyGetObserverForIdentifier:(unsigned)identifier;	// 0x32e27f2d
+ (unsigned)_safelyRegisterObserver:(id)observer;	// 0x32e27c69
+ (void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;	// 0x32e27e59
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;	// 0x32e27691
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x32e276b5
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x32e27631
// declared property getter: - (id)_dispatcher;	// 0x32e27841
- (void)_handleNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x32e27c21
// declared property getter: - (id)_notificationName;	// 0x32e28115
- (id)_notificationTypeDescription;	// 0x32e27919
// declared property setter: - (void)_setDispatcher:(id)dispatcher;	// 0x32e27851
// declared property setter: - (void)_setNotificationName:(id)name;	// 0x32e28125
// declared property setter: - (void)_setTarget:(id)target;	// 0x32e28145
- (void)_startObserving;	// 0x32e27ad1
- (void)_stopObserving;	// 0x32e27b05
// declared property getter: - (id)_target;	// 0x32e28135
- (void)dealloc;	// 0x32e27801
- (id)description;	// 0x32e27885
- (void)invalidate;	// 0x32e2794d
// declared property getter: - (BOOL)isValid;	// 0x32e28105
- (void)processHandler:(SEL)handler;	// 0x32e27b39
@end

