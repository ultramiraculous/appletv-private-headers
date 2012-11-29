/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIBarsSwipeTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputBarOffset;	// 52 = 0x34
	NSNumber *inputTime;	// 56 = 0x38
}
@property(retain) NSNumber *inputAngle;	// G=0x369c7759; S=0x369c776d; @synthesize
@property(retain) NSNumber *inputBarOffset;	// G=0x369c77c9; S=0x369c77dd; @synthesize
@property(retain) CIImage *inputImage;	// G=0x369c76e9; S=0x369c76fd; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x369c7721; S=0x369c7735; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x369c7801; S=0x369c7815; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x369c7791; S=0x369c77a5; @synthesize
+ (id)customAttributes;	// 0x369c60d1
- (id)_kernel;	// 0x369c6599
// declared property getter: - (id)inputAngle;	// 0x369c7759
// declared property getter: - (id)inputBarOffset;	// 0x369c77c9
// declared property getter: - (id)inputImage;	// 0x369c76e9
// declared property getter: - (id)inputTargetImage;	// 0x369c7721
// declared property getter: - (id)inputTime;	// 0x369c7801
// declared property getter: - (id)inputWidth;	// 0x369c7791
- (id)outputImage;	// 0x369c6789
- (void)setDefaults;	// 0x369c64d9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x369c776d
// declared property setter: - (void)setInputBarOffset:(id)offset;	// 0x369c77dd
// declared property setter: - (void)setInputImage:(id)image;	// 0x369c76fd
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x369c7735
// declared property setter: - (void)setInputTime:(id)time;	// 0x369c7815
// declared property setter: - (void)setInputWidth:(id)width;	// 0x369c77a5
@end
