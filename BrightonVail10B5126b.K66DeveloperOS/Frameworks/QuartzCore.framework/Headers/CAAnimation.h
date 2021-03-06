/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import "NSCopying.h"
#import "CAMediaTiming.h"
#import "CAAction.h"
#import "NSMutableCopying.h"
#import "CAPropertyInfo.h"
#import <NSObject.h> // Unknown library

@class NSString, CAStateControllerTransition, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
	void *_attr;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
}
@property(assign) CAStateControllerTransition *CAStateControllerTransition;	// @dynamic
@property(assign) BOOL autoreverses;	// G=0x32929d51; S=0x32949c59; 
@property(assign) double beginTime;	// G=0x32929ca9; S=0x32930575; 
@property(copy) NSString *beginTimeMode;	// G=0x3293022d; S=0x3293059d; 
@property(retain) id delegate;	// G=0x32911cb1; S=0x32928e31; 
@property(assign) double duration;	// G=0x329295e9; S=0x32928e0d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32930c35; S=0x329d11a5; 
@property(copy) NSString *fillMode;	// G=0x32929d69; S=0x3292fe79; 
@property(assign) double frameInterval;	// G=0x32930ccd; S=0x329d11c1; 
@property(assign, getter=isRemovedOnCompletion) BOOL removedOnCompletion;	// G=0x32929629; S=0x32928e4d; 
@property(assign) float repeatCount;	// G=0x32929d11; S=0x32928df1; 
@property(assign) double repeatDuration;	// G=0x32929d29; S=0x329d114d; 
@property(assign) float speed;	// G=0x32929cf9; S=0x329d1131; 
@property(assign) double timeOffset;	// G=0x32929cd1; S=0x329d110d; 
@property(retain) CAMediaTimingFunction *timingFunction;	// G=0x32930c51; S=0x3292fe61; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3292fead
+ (BOOL)CA_encodesPropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x3292ff59
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x3292ff8d
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x3292ff7d
+ (id)animation;	// 0x3293bf3d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x329d102d
+ (id)defaultValueForKey:(id)key;	// 0x3292ffa5
+ (id)properties;	// 0x329d1171
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x3292ff71
- (id)initWithCoder:(id)coder;	// 0x329d1009
- (Object *)CA_copyRenderValue;	// 0x329d1181
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x329d0fbd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x329309f5
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x329d1179
// declared property getter: - (BOOL)autoreverses;	// 0x32929d51
// declared property getter: - (double)beginTime;	// 0x32929ca9
// declared property getter: - (id)beginTimeMode;	// 0x3293022d
- (id)copyWithZone:(NSZone *)zone;	// 0x32929505
- (void)dealloc;	// 0x32911d49
- (id)debugDescription;	// 0x329d104d
// declared property getter: - (id)delegate;	// 0x32911cb1
// declared property getter: - (double)duration;	// 0x329295e9
- (void)encodeWithCoder:(id)coder;	// 0x329d1011
// declared property getter: - (id)fillMode;	// 0x32929d69
// declared property getter: - (double)frameInterval;	// 0x32930ccd
// declared property getter: - (BOOL)isEnabled;	// 0x32930c35
// declared property getter: - (BOOL)isRemovedOnCompletion;	// 0x32929629
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x329d1195
- (BOOL)removedOnCompletion;	// 0x329d10f1
// declared property getter: - (float)repeatCount;	// 0x32929d11
// declared property getter: - (double)repeatDuration;	// 0x32929d29
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x3292fe91
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x32949c59
// declared property setter: - (void)setBeginTime:(double)time;	// 0x32930575
// declared property setter: - (void)setBeginTimeMode:(id)mode;	// 0x3293059d
- (void)setDefaultDuration:(double)duration;	// 0x3292959d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32928e31
// declared property setter: - (void)setDuration:(double)duration;	// 0x32928e0d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x329d11a5
// declared property setter: - (void)setFillMode:(id)mode;	// 0x3292fe79
// declared property setter: - (void)setFrameInterval:(double)interval;	// 0x329d11c1
// declared property setter: - (void)setRemovedOnCompletion:(BOOL)completion;	// 0x32928e4d
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x32928df1
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x329d114d
// declared property setter: - (void)setSpeed:(float)speed;	// 0x329d1131
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x329d110d
// declared property setter: - (void)setTimingFunction:(id)function;	// 0x3292fe61
- (void)setValue:(id)value forKey:(id)key;	// 0x32931a85
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x329d1021
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32931af1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x329d0fc5
// declared property getter: - (float)speed;	// 0x32929cf9
// declared property getter: - (double)timeOffset;	// 0x32929cd1
// declared property getter: - (id)timingFunction;	// 0x32930c51
- (id)valueForKey:(id)key;	// 0x32931b69
- (id)valueForKeyPath:(id)keyPath;	// 0x329d1019
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32931b9d
@end

