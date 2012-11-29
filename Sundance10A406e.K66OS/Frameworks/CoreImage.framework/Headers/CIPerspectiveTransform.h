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
@property(copy, nonatomic) CIVector *inputBottomLeft;	// G=0x36bac8a5; S=0x36bac8b9; @synthesize
@property(copy, nonatomic) CIVector *inputBottomRight;	// G=0x36bac881; S=0x36bac895; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bac819; S=0x36bac829; @synthesize
@property(copy, nonatomic) CIVector *inputTopLeft;	// G=0x36bac839; S=0x36bac84d; @synthesize
@property(copy, nonatomic) CIVector *inputTopRight;	// G=0x36bac85d; S=0x36bac871; @synthesize
+ (id)customAttributes;	// 0x36bac375
// declared property getter: - (id)inputBottomLeft;	// 0x36bac8a5
// declared property getter: - (id)inputBottomRight;	// 0x36bac881
// declared property getter: - (id)inputImage;	// 0x36bac819
// declared property getter: - (id)inputTopLeft;	// 0x36bac839
// declared property getter: - (id)inputTopRight;	// 0x36bac85d
- (id)outputImage;	// 0x36bac669
- (void)setDefaults;	// 0x36bac5a5
// declared property setter: - (void)setInputBottomLeft:(id)left;	// 0x36bac8b9
// declared property setter: - (void)setInputBottomRight:(id)right;	// 0x36bac895
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bac829
// declared property setter: - (void)setInputTopLeft:(id)left;	// 0x36bac84d
// declared property setter: - (void)setInputTopRight:(id)right;	// 0x36bac871
@end
