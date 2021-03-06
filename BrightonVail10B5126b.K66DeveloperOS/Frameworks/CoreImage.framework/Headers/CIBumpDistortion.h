/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBumpDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputScale;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x31577059; S=0x3157706d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31577039; S=0x31577049; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x3157707d; S=0x31577091; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x315770a1; S=0x315770b5; @synthesize
+ (id)customAttributes;	// 0x31576241
- (id)_kernel;	// 0x315765f1
// declared property getter: - (id)inputCenter;	// 0x31577059
// declared property getter: - (id)inputImage;	// 0x31577039
// declared property getter: - (id)inputRadius;	// 0x3157707d
// declared property getter: - (id)inputScale;	// 0x315770a1
- (id)outputImage;	// 0x31576789
- (void)setDefaults;	// 0x31576591
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3157706d
// declared property setter: - (void)setInputImage:(id)image;	// 0x31577049
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x31577091
// declared property setter: - (void)setInputScale:(id)scale;	// 0x315770b5
@end

