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
@interface CIPremultiply : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3699c5f1; S=0x3699c601; @synthesize
+ (id)customAttributes;	// 0x3699c4d5
// declared property getter: - (id)inputImage;	// 0x3699c5f1
- (id)outputImage;	// 0x3699c5c9
// declared property setter: - (void)setInputImage:(id)image;	// 0x3699c601
@end

