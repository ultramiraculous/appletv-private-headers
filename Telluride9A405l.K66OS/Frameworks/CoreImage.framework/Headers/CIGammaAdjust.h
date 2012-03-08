/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGammaAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputPower;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36eba4b1; S=0x36eba4c1; @synthesize
@property(copy, nonatomic) NSNumber *inputPower;	// G=0x36eba4e5; S=0x36eba4f5; @synthesize
+ (id)customAttributes;	// 0x36eba045
- (BOOL)_isIdentity;	// 0x36eba2ad
// declared property getter: - (id)inputImage;	// 0x36eba4b1
// declared property getter: - (id)inputPower;	// 0x36eba4e5
- (id)outputImage;	// 0x36eba2fd
- (void)setDefaults;	// 0x36eba269
// declared property setter: - (void)setInputImage:(id)image;	// 0x36eba4c1
// declared property setter: - (void)setInputPower:(id)power;	// 0x36eba4f5
@end
