/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIFlashTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIVector *inputCenter;	// 44 = 0x2c
	CIVector *inputExtent;	// 48 = 0x30
	CIColor *inputColor;	// 52 = 0x34
	NSNumber *inputTime;	// 56 = 0x38
	NSNumber *inputMaxStriationRadius;	// 60 = 0x3c
	NSNumber *inputStriationStrength;	// 64 = 0x40
	NSNumber *inputStriationContrast;	// 68 = 0x44
	NSNumber *inputFadeThreshold;	// 72 = 0x48
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x31572de1; S=0x31572df5; @synthesize
@property(copy, nonatomic) CIColor *inputColor;	// G=0x31572e29; S=0x31572e3d; @synthesize
@property(copy, nonatomic) CIVector *inputExtent;	// G=0x31572e05; S=0x31572e19; @synthesize
@property(copy, nonatomic) NSNumber *inputFadeThreshold;	// G=0x31572edd; S=0x31572ef1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31572da1; S=0x31572db1; @synthesize
@property(copy, nonatomic) NSNumber *inputMaxStriationRadius;	// G=0x31572e71; S=0x31572e85; @synthesize
@property(copy, nonatomic) NSNumber *inputStriationContrast;	// G=0x31572eb9; S=0x31572ecd; @synthesize
@property(copy, nonatomic) NSNumber *inputStriationStrength;	// G=0x31572e95; S=0x31572ea9; @synthesize
@property(retain, nonatomic) CIImage *inputTargetImage;	// G=0x31572dc1; S=0x31572dd1; @synthesize
@property(copy, nonatomic) NSNumber *inputTime;	// G=0x31572e4d; S=0x31572e61; @synthesize
+ (id)customAttributes;	// 0x31571ac9
- (id)_colorKernel;	// 0x315722a1
- (id)_geomKernel;	// 0x31572519
// declared property getter: - (id)inputCenter;	// 0x31572de1
// declared property getter: - (id)inputColor;	// 0x31572e29
// declared property getter: - (id)inputExtent;	// 0x31572e05
// declared property getter: - (id)inputFadeThreshold;	// 0x31572edd
// declared property getter: - (id)inputImage;	// 0x31572da1
// declared property getter: - (id)inputMaxStriationRadius;	// 0x31572e71
// declared property getter: - (id)inputStriationContrast;	// 0x31572eb9
// declared property getter: - (id)inputStriationStrength;	// 0x31572e95
// declared property getter: - (id)inputTargetImage;	// 0x31572dc1
// declared property getter: - (id)inputTime;	// 0x31572e4d
- (id)outputImage;	// 0x315726b1
- (void)setDefaults;	// 0x315720f9
// declared property setter: - (void)setInputCenter:(id)center;	// 0x31572df5
// declared property setter: - (void)setInputColor:(id)color;	// 0x31572e3d
// declared property setter: - (void)setInputExtent:(id)extent;	// 0x31572e19
// declared property setter: - (void)setInputFadeThreshold:(id)threshold;	// 0x31572ef1
// declared property setter: - (void)setInputImage:(id)image;	// 0x31572db1
// declared property setter: - (void)setInputMaxStriationRadius:(id)radius;	// 0x31572e85
// declared property setter: - (void)setInputStriationContrast:(id)contrast;	// 0x31572ecd
// declared property setter: - (void)setInputStriationStrength:(id)strength;	// 0x31572ea9
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x31572dd1
// declared property setter: - (void)setInputTime:(id)time;	// 0x31572e61
@end

