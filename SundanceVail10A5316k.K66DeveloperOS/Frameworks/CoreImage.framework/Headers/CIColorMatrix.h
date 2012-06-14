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
@interface CIColorMatrix : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRVector;	// 40 = 0x28
	CIVector *inputGVector;	// 44 = 0x2c
	CIVector *inputBVector;	// 48 = 0x30
	CIVector *inputAVector;	// 52 = 0x34
	CIVector *inputBiasVector;	// 56 = 0x38
}
@property(copy, nonatomic) CIVector *inputAVector;	// G=0x36bb309d; S=0x36bb30b1; @synthesize
@property(copy, nonatomic) CIVector *inputBVector;	// G=0x36bb3065; S=0x36bb3079; @synthesize
@property(copy, nonatomic) CIVector *inputBiasVector;	// G=0x36bb30d5; S=0x36bb30e9; @synthesize
@property(copy, nonatomic) CIVector *inputGVector;	// G=0x36bb302d; S=0x36bb3041; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bb2fc1; S=0x36bb2fd1; @synthesize
@property(copy, nonatomic) CIVector *inputRVector;	// G=0x36bb2ff5; S=0x36bb3009; @synthesize
+ (id)customAttributes;	// 0x36bb252d
// declared property getter: - (id)inputAVector;	// 0x36bb309d
// declared property getter: - (id)inputBVector;	// 0x36bb3065
// declared property getter: - (id)inputBiasVector;	// 0x36bb30d5
// declared property getter: - (id)inputGVector;	// 0x36bb302d
// declared property getter: - (id)inputImage;	// 0x36bb2fc1
// declared property getter: - (id)inputRVector;	// 0x36bb2ff5
- (id)outputImage;	// 0x36bb2949
- (void)setDefaults;	// 0x36bb284d
// declared property setter: - (void)setInputAVector:(id)vector;	// 0x36bb30b1
// declared property setter: - (void)setInputBVector:(id)vector;	// 0x36bb3079
// declared property setter: - (void)setInputBiasVector:(id)vector;	// 0x36bb30e9
// declared property setter: - (void)setInputGVector:(id)vector;	// 0x36bb3041
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bb2fd1
// declared property setter: - (void)setInputRVector:(id)vector;	// 0x36bb3009
@end
