/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIPassThroughColor : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315c8191; S=0x315c81a1; @synthesize
+ (id)customAttributes;	// 0x315c7f35
- (id)_kernel;	// 0x315c7fb9
// declared property getter: - (id)inputImage;	// 0x315c8191
- (id)outputImage;	// 0x315c8119
// declared property setter: - (void)setInputImage:(id)image;	// 0x315c81a1
@end

