/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIStretch : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	CIVector *inputSize;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3153e825; S=0x3153e835; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x3153e845; S=0x3153e859; @synthesize
@property(copy, nonatomic) CIVector *inputSize;	// G=0x3153e869; S=0x3153e87d; @synthesize
+ (id)customAttributes;	// 0x3153e061
- (id)_kernel;	// 0x3153e169
- (CGRect)computeDOD:(vec4)dod;	// 0x3153e371
// declared property getter: - (id)inputImage;	// 0x3153e825
// declared property getter: - (id)inputPoint;	// 0x3153e845
// declared property getter: - (id)inputSize;	// 0x3153e869
- (id)outputImage;	// 0x3153e3c1
- (void)setDefaults;	// 0x3153e32d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3153e835
// declared property setter: - (void)setInputPoint:(id)point;	// 0x3153e859
// declared property setter: - (void)setInputSize:(id)size;	// 0x3153e87d
@end

