/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIFalseColor : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
}
@property(copy, nonatomic) CIColor *inputColor0;	// G=0x36966d3d; S=0x36966d51; @synthesize
@property(copy, nonatomic) CIColor *inputColor1;	// G=0x36966d75; S=0x36966d89; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36966d09; S=0x36966d19; @synthesize
+ (id)customAttributes;	// 0x36966b29
- (id)_kernel;	// 0x36966821
// declared property getter: - (id)inputColor0;	// 0x36966d3d
// declared property getter: - (id)inputColor1;	// 0x36966d75
// declared property getter: - (id)inputImage;	// 0x36966d09
- (id)outputImage;	// 0x369669e1
- (void)setDefaults;	// 0x36966aa9
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x36966d51
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x36966d89
// declared property setter: - (void)setInputImage:(id)image;	// 0x36966d19
@end

