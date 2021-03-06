/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "CAAction.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CAMediaTiming.h"
#import "QuartzCore-Structs.h"

@class CAMediaTimingFunction, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
@private
	void *_attr;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
}
@property(assign) BOOL autoreverses;	// G=0x36c3caad; S=0x36c5128d; 
@property(assign) double beginTime;	// G=0x36c3c2c9; S=0x36c3c539; 
@property(retain) id delegate;	// G=0x36c32aad; S=0x36c3b2c1; 
@property(assign) double duration;	// G=0x36c3b8d1; S=0x36c3b085; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x36c3cb6d; S=0x36cc3be1; 
@property(copy) NSString *fillMode;	// G=0x36c3cac5; S=0x36c3b2a9; 
@property(assign) double frameInterval;	// G=0x36c3cc25; S=0x36cc3b8d; 
@property(assign, getter=isRemovedOnCompletion) BOOL removedOnCompletion;	// G=0x36c3ba99; S=0x36c3d99d; 
@property(assign) float repeatCount;	// G=0x36c3ca71; S=0x36c3d985; 
@property(assign) double repeatDuration;	// G=0x36c3ca89; S=0x36cc24dd; 
@property(assign) float speed;	// G=0x36c3ca59; S=0x36c5d7b5; 
@property(assign) double timeOffset;	// G=0x36c3ca35; S=0x36c5d7cd; 
@property(retain) CAMediaTimingFunction *timingFunction;	// G=0x36c3cb85; S=0x36c3b291; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36c3bab5
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x36c3bb55
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x36cc23a9
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x36cc1be1
+ (id)animation;	// 0x36c55ec9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36cc24bd
+ (id)defaultValueForKey:(id)key;	// 0x36c3bb6d
+ (id)properties;	// 0x36cc3d05
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x36c3d511
- (id)initWithCoder:(id)coder;	// 0x36cc25cd
- (Object *)CA_copyRenderValue;	// 0x36cc36f9
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x36cc1bd9
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x36c3c939
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x36cc1bdd
// declared property getter: - (BOOL)autoreverses;	// 0x36c3caad
// declared property getter: - (double)beginTime;	// 0x36c3c2c9
- (id)copyWithZone:(NSZone *)zone;	// 0x36c3b7f5
- (void)dealloc;	// 0x36c329f5
- (id)debugDescription;	// 0x36cc2501
// declared property getter: - (id)delegate;	// 0x36c32aad
// declared property getter: - (double)duration;	// 0x36c3b8d1
- (void)encodeWithCoder:(id)coder;	// 0x36cc25c5
// declared property getter: - (id)fillMode;	// 0x36c3cac5
// declared property getter: - (double)frameInterval;	// 0x36c3cc25
// declared property getter: - (BOOL)isEnabled;	// 0x36c3cb6d
// declared property getter: - (BOOL)isRemovedOnCompletion;	// 0x36c3ba99
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36cc370d
- (BOOL)removedOnCompletion;	// 0x36cc24a5
// declared property getter: - (float)repeatCount;	// 0x36c3ca71
// declared property getter: - (double)repeatDuration;	// 0x36c3ca89
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x36c3b2d9
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x36c5128d
// declared property setter: - (void)setBeginTime:(double)time;	// 0x36c3c539
- (void)setDefaultDuration:(double)duration;	// 0x36c3b889
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36c3b2c1
// declared property setter: - (void)setDuration:(double)duration;	// 0x36c3b085
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36cc3be1
// declared property setter: - (void)setFillMode:(id)mode;	// 0x36c3b2a9
// declared property setter: - (void)setFrameInterval:(double)interval;	// 0x36cc3b8d
// declared property setter: - (void)setRemovedOnCompletion:(BOOL)completion;	// 0x36c3d99d
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x36c3d985
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x36cc24dd
// declared property setter: - (void)setSpeed:(float)speed;	// 0x36c5d7b5
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x36c5d7cd
// declared property setter: - (void)setTimingFunction:(id)function;	// 0x36c3b291
- (void)setValue:(id)value forKey:(id)key;	// 0x36c5d701
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36cc25b1
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x36c5d739
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x36cc25d5
// declared property getter: - (float)speed;	// 0x36c3ca59
// declared property getter: - (double)timeOffset;	// 0x36c3ca35
// declared property getter: - (id)timingFunction;	// 0x36c3cb85
- (id)valueForKey:(id)key;	// 0x36c51729
- (id)valueForKeyPath:(id)keyPath;	// 0x36cc25bd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x36c5175d
@end

