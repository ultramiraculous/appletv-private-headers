/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISharpenLuminance : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSharpness;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3734c051; S=0x3734c061; @synthesize
@property(copy, nonatomic) NSNumber *inputSharpness;	// G=0x3734c071; S=0x3734c085; @synthesize
+ (id)customAttributes;	// 0x3734bb19
- (bool)_isIdentity;	// 0x3734bef9
- (id)_kernel;	// 0x3734bcf1
// declared property getter: - (id)inputImage;	// 0x3734c051
// declared property getter: - (id)inputSharpness;	// 0x3734c071
- (id)outputImage;	// 0x3734bf49
- (void)setDefaults;	// 0x3734bea9
// declared property setter: - (void)setInputImage:(id)image;	// 0x3734c061
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x3734c085
@end

