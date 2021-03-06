/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {
	CALayer *_target;	// 4 = 0x4
	CAAnimation *_animation;	// 8 = 0x8
	NSString *_key;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
}
@property(retain, nonatomic) CAAnimation *animation;	// G=0x304d53bd; S=0x304d53cd; @synthesize=_animation
@property(assign, nonatomic) double beginTime;	// G=0x304d4fc9; S=0x304d5001; 
@property(assign, nonatomic) double duration;	// G=0x304d5021; S=0x304d5059; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x304d5401; S=0x304d5419; @synthesize=_enabled
@property(copy, nonatomic) NSString *key;	// G=0x304d53dd; S=0x304d53f1; @synthesize=_key
@property(assign, nonatomic) CALayer *target;	// G=0x304d539d; S=0x304d53ad; @synthesize=_target
- (id)init;	// 0x304d4f21
- (id)initWithCoder:(id)coder;	// 0x304d513d
// declared property getter: - (id)animation;	// 0x304d53bd
// declared property getter: - (double)beginTime;	// 0x304d4fc9
- (id)copyWithZone:(NSZone *)zone;	// 0x304d5261
- (void)dealloc;	// 0x304d4f61
- (id)debugDescription;	// 0x304d5319
// declared property getter: - (double)duration;	// 0x304d5021
- (void)encodeWithCoder:(id)coder;	// 0x304d5079
// declared property getter: - (BOOL)isEnabled;	// 0x304d5401
// declared property getter: - (id)key;	// 0x304d53dd
// declared property setter: - (void)setAnimation:(id)animation;	// 0x304d53cd
// declared property setter: - (void)setBeginTime:(double)time;	// 0x304d5001
// declared property setter: - (void)setDuration:(double)duration;	// 0x304d5059
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x304d5419
// declared property setter: - (void)setKey:(id)key;	// 0x304d53f1
// declared property setter: - (void)setTarget:(id)target;	// 0x304d53ad
// declared property getter: - (id)target;	// 0x304d539d
@end

