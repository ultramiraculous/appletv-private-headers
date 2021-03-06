/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x37331cd1; S=0x37331ce1; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x37331cf1; S=0x37331d01; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x37331d11; S=0x37331d21; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x37331d31; S=0x37331d41; @synthesize
+ (id)customAttributes;	// 0x373315b9
- (id)_kernel;	// 0x373313d1
// declared property getter: - (id)inputCenter;	// 0x37331cd1
// declared property getter: - (id)inputColor0;	// 0x37331cf1
// declared property getter: - (id)inputColor1;	// 0x37331d11
// declared property getter: - (id)inputRadius;	// 0x37331d31
- (id)outputImage;	// 0x373319b9
- (void)setDefaults;	// 0x373318c9
// declared property setter: - (void)setInputCenter:(id)center;	// 0x37331ce1
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x37331d01
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x37331d21
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x37331d41
@end

