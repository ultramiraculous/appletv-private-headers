/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CICompositeFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x34a0c25d; S=0x34a0c26d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34a0c229; S=0x34a0c239; @synthesize
+ (id)_filter_display_name;	// 0x34a0bdb5
+ (id)_kernel;	// 0x34a0bec5
+ (id)_kernel_name;	// 0x34a0bdb9
+ (id)_kernel_source;	// 0x34a0bdbd
+ (id)customAttributes;	// 0x34a0bdc1
- (CGRect)_extentForInputExtent:(CGRect)inputExtent backgroundExtent:(CGRect)extent;	// 0x34a0c0c9
// declared property getter: - (id)inputBackgroundImage;	// 0x34a0c25d
// declared property getter: - (id)inputImage;	// 0x34a0c229
- (id)outputImage;	// 0x34a0c0fd
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x34a0c26d
// declared property setter: - (void)setInputImage:(id)image;	// 0x34a0c239
@end
