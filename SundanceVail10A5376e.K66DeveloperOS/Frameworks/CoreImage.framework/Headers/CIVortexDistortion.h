/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVortexDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputAngle;	// 48 = 0x30
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x3734ef59; S=0x3734ef6d; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x3734ef11; S=0x3734ef25; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3734eef1; S=0x3734ef01; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x3734ef35; S=0x3734ef49; @synthesize
+ (id)customAttributes;	// 0x3734e469
- (bool)_isIdentity;	// 0x3734ea19
- (id)_kernel;	// 0x3734e7b9
// declared property getter: - (id)inputAngle;	// 0x3734ef59
// declared property getter: - (id)inputCenter;	// 0x3734ef11
// declared property getter: - (id)inputImage;	// 0x3734eef1
// declared property getter: - (id)inputRadius;	// 0x3734ef35
- (id)outputImage;	// 0x3734eaa9
- (void)setDefaults;	// 0x3734e979
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x3734ef6d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3734ef25
// declared property setter: - (void)setInputImage:(id)image;	// 0x3734ef01
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x3734ef49
@end

