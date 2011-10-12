/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSNumber.h> // Unknown library


@interface NSNumber (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x31aa2139
@end

@interface NSNumber (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x31b27a29
- (float)CA_distanceToValue:(id)value;	// 0x31b27be9
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x31b27a95
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x31b27b01
@end

