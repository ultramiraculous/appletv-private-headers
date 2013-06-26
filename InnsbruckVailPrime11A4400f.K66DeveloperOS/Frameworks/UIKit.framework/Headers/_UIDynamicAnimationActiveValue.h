/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>


@interface _UIDynamicAnimationActiveValue : NSObject {
	double _value;	// 4 = 0x4
	double _minimumActiveValue;	// 12 = 0xc
	double _maximumActiveValue;	// 20 = 0x14
	int _type;	// 28 = 0x1c
	double _boundaryPull;	// 32 = 0x20
	id _applier;	// 40 = 0x28
	unsigned _lowerBoundary : 1;	// 44 = 0x2c
	unsigned _upperBoundary : 1;	// 44 = 0x2c
}
@property(assign, nonatomic) double maximumActiveValue;	// G=0x2f8541d9; S=0x2f853c8d; @synthesize=_maximumActiveValue
@property(assign, nonatomic) double minimumActiveValue;	// G=0x2f8541c1; S=0x2f853c09; @synthesize=_minimumActiveValue
@property(assign, nonatomic) int type;	// G=0x2f8541f1; S=0x2f853d11; @synthesize=_type
@property(assign, nonatomic) double value;	// G=0x2f8541a9; S=0x2f853b95; @synthesize=_value
+ (id)activeValue:(double)value ofType:(int)type;	// 0x2f8539b1
+ (id)lowerBoundary:(double)boundary ofType:(int)type;	// 0x2f8538f9
+ (id)upperBoundary:(double)boundary ofType:(int)type;	// 0x2f853955
- (id)init;	// 0x2f853a15
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x2f853de9
- (id)_applier;	// 0x2f853af9
- (double)_boundaryPull;	// 0x2f853d95
- (BOOL)_isLowerBoundary;	// 0x2f853dc1
- (BOOL)_isUpperBoundary;	// 0x2f853dd5
- (void)_setBoundaryPull:(double)pull;	// 0x2f853dad
- (void)dealloc;	// 0x2f853aad
- (id)description;	// 0x2f854169
// declared property getter: - (double)maximumActiveValue;	// 0x2f8541d9
// declared property getter: - (double)minimumActiveValue;	// 0x2f8541c1
// declared property setter: - (void)setMaximumActiveValue:(double)value;	// 0x2f853c8d
// declared property setter: - (void)setMinimumActiveValue:(double)value;	// 0x2f853c09
// declared property setter: - (void)setType:(int)type;	// 0x2f853d11
// declared property setter: - (void)setValue:(double)value;	// 0x2f853b95
// declared property getter: - (int)type;	// 0x2f8541f1
// declared property getter: - (double)value;	// 0x2f8541a9
@end
