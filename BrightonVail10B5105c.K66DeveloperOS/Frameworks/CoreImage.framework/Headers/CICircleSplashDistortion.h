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
@interface CICircleSplashDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x33cf9db9; S=0x33cf9dc9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33cf9d99; S=0x33cf9da9; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x33cf9dd9; S=0x33cf9de9; @synthesize
+ (id)customAttributes;	// 0x33cf96e1
- (id)_kernel;	// 0x33cf9961
// declared property getter: - (id)inputCenter;	// 0x33cf9db9
// declared property getter: - (id)inputImage;	// 0x33cf9d99
// declared property getter: - (id)inputRadius;	// 0x33cf9dd9
- (id)outputImage;	// 0x33cf9bb1
- (void)setDefaults;	// 0x33cf9b29
// declared property setter: - (void)setInputCenter:(id)center;	// 0x33cf9dc9
// declared property setter: - (void)setInputImage:(id)image;	// 0x33cf9da9
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x33cf9de9
@end
