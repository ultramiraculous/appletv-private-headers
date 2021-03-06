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
@interface CIBumpDistortionLinear : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputAngle;	// 48 = 0x30
	NSNumber *inputScale;	// 52 = 0x34
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x36baf341; S=0x36baf355; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x36baf2d5; S=0x36baf2e9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36baf2b5; S=0x36baf2c5; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36baf2f9; S=0x36baf30d; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x36baf31d; S=0x36baf331; @synthesize
+ (id)customAttributes;	// 0x36bae0c9
- (id)_kernel;	// 0x36bae539
// declared property getter: - (id)inputAngle;	// 0x36baf341
// declared property getter: - (id)inputCenter;	// 0x36baf2d5
// declared property getter: - (id)inputImage;	// 0x36baf2b5
// declared property getter: - (id)inputRadius;	// 0x36baf2f9
// declared property getter: - (id)inputScale;	// 0x36baf31d
- (id)outputImage;	// 0x36bae6f1
- (void)setDefaults;	// 0x36bae4b9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x36baf355
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36baf2e9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36baf2c5
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36baf30d
// declared property setter: - (void)setInputScale:(id)scale;	// 0x36baf331
@end

