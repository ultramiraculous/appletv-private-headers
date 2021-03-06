/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIPerspectiveTransform : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputTopLeft;	// 40 = 0x28
	CIVector *inputTopRight;	// 44 = 0x2c
	CIVector *inputBottomRight;	// 48 = 0x30
	CIVector *inputBottomLeft;	// 52 = 0x34
}
@property(copy, nonatomic) CIVector *inputBottomLeft;	// G=0x33d058a5; S=0x33d058b9; @synthesize
@property(copy, nonatomic) CIVector *inputBottomRight;	// G=0x33d05881; S=0x33d05895; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33d05819; S=0x33d05829; @synthesize
@property(copy, nonatomic) CIVector *inputTopLeft;	// G=0x33d05839; S=0x33d0584d; @synthesize
@property(copy, nonatomic) CIVector *inputTopRight;	// G=0x33d0585d; S=0x33d05871; @synthesize
+ (id)customAttributes;	// 0x33d05375
// declared property getter: - (id)inputBottomLeft;	// 0x33d058a5
// declared property getter: - (id)inputBottomRight;	// 0x33d05881
// declared property getter: - (id)inputImage;	// 0x33d05819
// declared property getter: - (id)inputTopLeft;	// 0x33d05839
// declared property getter: - (id)inputTopRight;	// 0x33d0585d
- (id)outputImage;	// 0x33d05669
- (void)setDefaults;	// 0x33d055a5
// declared property setter: - (void)setInputBottomLeft:(id)left;	// 0x33d058b9
// declared property setter: - (void)setInputBottomRight:(id)right;	// 0x33d05895
// declared property setter: - (void)setInputImage:(id)image;	// 0x33d05829
// declared property setter: - (void)setInputTopLeft:(id)left;	// 0x33d0584d
// declared property setter: - (void)setInputTopRight:(id)right;	// 0x33d05871
@end

