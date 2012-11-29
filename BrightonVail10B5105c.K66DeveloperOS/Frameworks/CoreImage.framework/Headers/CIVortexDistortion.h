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
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x33cf6829; S=0x33cf683d; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x33cf67e1; S=0x33cf67f5; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33cf67c1; S=0x33cf67d1; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x33cf6805; S=0x33cf6819; @synthesize
+ (id)customAttributes;	// 0x33cf5d39
- (bool)_isIdentity;	// 0x33cf62e9
- (id)_kernel;	// 0x33cf6089
// declared property getter: - (id)inputAngle;	// 0x33cf6829
// declared property getter: - (id)inputCenter;	// 0x33cf67e1
// declared property getter: - (id)inputImage;	// 0x33cf67c1
// declared property getter: - (id)inputRadius;	// 0x33cf6805
- (id)outputImage;	// 0x33cf6379
- (void)setDefaults;	// 0x33cf6249
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x33cf683d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x33cf67f5
// declared property setter: - (void)setInputImage:(id)image;	// 0x33cf67d1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x33cf6819
@end
