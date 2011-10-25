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
@interface CIBlendModeFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x345a3581; S=0x345a3591; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x345a354d; S=0x345a355d; @synthesize
+ (id)_filter_display_name;	// 0x345a327d
+ (id)_kernel;	// 0x345a3281
+ (id)customAttributes;	// 0x345a3285
- (CGRect)_extent;	// 0x345a3375
// declared property getter: - (id)inputBackgroundImage;	// 0x345a3581
// declared property getter: - (id)inputImage;	// 0x345a354d
- (id)outputImage;	// 0x345a340d
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x345a3591
// declared property setter: - (void)setInputImage:(id)image;	// 0x345a355d
@end

