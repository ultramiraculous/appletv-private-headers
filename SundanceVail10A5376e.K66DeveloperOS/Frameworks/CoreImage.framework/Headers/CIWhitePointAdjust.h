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
@interface CIWhitePointAdjust : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x372f8965; S=0x372f8979; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x372f8945; S=0x372f8955; @synthesize
+ (id)customAttributes;	// 0x372f87a9
- (BOOL)_isIdentity;	// 0x372f8581
- (id)_kernel;	// 0x372f83e5
// declared property getter: - (id)inputColor;	// 0x372f8965
// declared property getter: - (id)inputImage;	// 0x372f8945
- (id)outputImage;	// 0x372f8679
- (void)setDefaults;	// 0x372f875d
// declared property setter: - (void)setInputColor:(id)color;	// 0x372f8979
// declared property setter: - (void)setInputImage:(id)image;	// 0x372f8955
@end

