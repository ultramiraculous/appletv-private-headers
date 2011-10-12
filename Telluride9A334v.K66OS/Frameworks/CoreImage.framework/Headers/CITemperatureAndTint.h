/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputNeutral;	// 40 = 0x28
	CIVector *inputTargetNeutral;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3588c28d; S=0x3588c29d; @synthesize
@property(copy, nonatomic) CIVector *inputNeutral;	// G=0x3588ac29; S=0x3588ac39; @dynamic
@property(copy, nonatomic) CIVector *inputTargetNeutral;	// G=0x3588c2c1; S=0x3588c2d1; @synthesize
+ (id)customAttributes;	// 0x3588aa11
// declared property getter: - (id)inputImage;	// 0x3588c28d
// declared property getter: - (id)inputNeutral;	// 0x3588ac29
// declared property getter: - (id)inputTargetNeutral;	// 0x3588c2c1
- (id)outputImage;	// 0x3588b7b1
- (void)setDefaults;	// 0x3588b73d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3588c29d
// declared property setter: - (void)setInputNeutral:(id)neutral;	// 0x3588ac39
// declared property setter: - (void)setInputTargetNeutral:(id)neutral;	// 0x3588c2d1
@end

