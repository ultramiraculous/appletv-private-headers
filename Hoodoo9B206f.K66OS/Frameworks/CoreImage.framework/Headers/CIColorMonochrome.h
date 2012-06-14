/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor;	// G=0x36e39d4d; S=0x36e39d5d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e39d19; S=0x36e39d29; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x36e39d81; S=0x36e39d91; @synthesize
+ (id)customAttributes;	// 0x36e398d5
- (id)_kernel;	// 0x36e39719
// declared property getter: - (id)inputColor;	// 0x36e39d4d
// declared property getter: - (id)inputImage;	// 0x36e39d19
// declared property getter: - (id)inputIntensity;	// 0x36e39d81
- (id)outputImage;	// 0x36e39bc1
- (void)setDefaults;	// 0x36e39b31
// declared property setter: - (void)setInputColor:(id)color;	// 0x36e39d5d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e39d29
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x36e39d91
@end
