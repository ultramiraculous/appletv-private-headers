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
@interface CIUnpremultiply : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x35327fb1; S=0x35327fc1; @synthesize
+ (id)customAttributes;	// 0x35327e95
// declared property getter: - (id)inputImage;	// 0x35327fb1
- (id)outputImage;	// 0x35327f89
// declared property setter: - (void)setInputImage:(id)image;	// 0x35327fc1
@end

