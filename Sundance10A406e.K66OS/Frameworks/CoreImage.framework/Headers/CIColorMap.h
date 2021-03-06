/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputGradientImage;	// 40 = 0x28
	CIImage *cachedGradientImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *cachedGradientImage;	// G=0x36ba678d; S=0x36ba679d; @synthesize
@property(retain, nonatomic) CIImage *inputGradientImage;	// G=0x36ba677d; S=0x36ba63d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36ba675d; S=0x36ba676d; @synthesize
+ (id)customAttributes;	// 0x36ba6155
- (id)_kernel;	// 0x36ba6239
// declared property getter: - (id)cachedGradientImage;	// 0x36ba678d
- (id)gradientImage;	// 0x36ba6431
// declared property getter: - (id)inputGradientImage;	// 0x36ba677d
// declared property getter: - (id)inputImage;	// 0x36ba675d
- (id)outputImage;	// 0x36ba6685
// declared property setter: - (void)setCachedGradientImage:(id)image;	// 0x36ba679d
// declared property setter: - (void)setInputGradientImage:(id)image;	// 0x36ba63d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x36ba676d
@end

