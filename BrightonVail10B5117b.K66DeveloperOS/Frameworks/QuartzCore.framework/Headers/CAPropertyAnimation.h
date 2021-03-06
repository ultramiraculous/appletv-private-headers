/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x32ad6cf1; S=0x32aefc71; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x32ad6d09; S=0x32b771f1; 
@property(copy) NSString *keyPath;	// G=0x32acf611; S=0x32acec91; 
@property(retain) CAValueFunction *valueFunction;	// G=0x32ad6d21; S=0x32aeff39; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x32ad5c05
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x32acf649
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32ad682d
- (BOOL)additive;	// 0x32b77209
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x32b771e9
- (BOOL)cumulative;	// 0x32b77221
// declared property getter: - (BOOL)isAdditive;	// 0x32ad6cf1
// declared property getter: - (BOOL)isCumulative;	// 0x32ad6d09
// declared property getter: - (id)keyPath;	// 0x32acf611
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x32aefc71
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x32b771f1
// declared property setter: - (void)setKeyPath:(id)path;	// 0x32acec91
// declared property setter: - (void)setValueFunction:(id)function;	// 0x32aeff39
// declared property getter: - (id)valueFunction;	// 0x32ad6d21
@end

