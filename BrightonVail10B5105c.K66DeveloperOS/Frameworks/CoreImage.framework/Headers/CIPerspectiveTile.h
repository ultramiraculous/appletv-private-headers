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
@interface CIPerspectiveTile : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputTopLeft;	// 40 = 0x28
	CIVector *inputTopRight;	// 44 = 0x2c
	CIVector *inputBottomRight;	// 48 = 0x30
	CIVector *inputBottomLeft;	// 52 = 0x34
}
@property(copy, nonatomic) CIVector *inputBottomLeft;	// G=0x33d06149; S=0x33d0615d; @synthesize
@property(copy, nonatomic) CIVector *inputBottomRight;	// G=0x33d06125; S=0x33d06139; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33d060bd; S=0x33d060cd; @synthesize
@property(copy, nonatomic) CIVector *inputTopLeft;	// G=0x33d060dd; S=0x33d060f1; @synthesize
@property(copy, nonatomic) CIVector *inputTopRight;	// G=0x33d06101; S=0x33d06115; @synthesize
+ (id)customAttributes;	// 0x33d058c9
- (id)_kernel;	// 0x33d05bd5
// declared property getter: - (id)inputBottomLeft;	// 0x33d06149
// declared property getter: - (id)inputBottomRight;	// 0x33d06125
// declared property getter: - (id)inputImage;	// 0x33d060bd
// declared property getter: - (id)inputTopLeft;	// 0x33d060dd
// declared property getter: - (id)inputTopRight;	// 0x33d06101
- (id)outputImage;	// 0x33d05d99
- (void)setDefaults;	// 0x33d05b11
// declared property setter: - (void)setInputBottomLeft:(id)left;	// 0x33d0615d
// declared property setter: - (void)setInputBottomRight:(id)right;	// 0x33d06139
// declared property setter: - (void)setInputImage:(id)image;	// 0x33d060cd
// declared property setter: - (void)setInputTopLeft:(id)left;	// 0x33d060f1
// declared property setter: - (void)setInputTopRight:(id)right;	// 0x33d06115
@end

