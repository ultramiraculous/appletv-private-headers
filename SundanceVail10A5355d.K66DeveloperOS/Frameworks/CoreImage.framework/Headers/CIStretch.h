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
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36995055; S=0x36995065; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x36995089; S=0x3699509d; @synthesize
+ (id)customAttributes;	// 0x36994929
- (id)_kernel;	// 0x36994a31
- (CGRect)computeDOD:(vec4)dod;	// 0x36994c39
// declared property getter: - (id)inputImage;	// 0x36995055
// declared property getter: - (id)inputPoint;	// 0x36995089
- (id)outputImage;	// 0x36994c89
- (void)setDefaults;	// 0x36994bf5
// declared property setter: - (void)setInputImage:(id)image;	// 0x36995065
// declared property setter: - (void)setInputPoint:(id)point;	// 0x3699509d
@end

