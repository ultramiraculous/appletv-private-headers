/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint0;	// 40 = 0x28
	CIVector *inputPoint1;	// 44 = 0x2c
	CIVector *inputPoint2;	// 48 = 0x30
	CIVector *inputPoint3;	// 52 = 0x34
	CIVector *inputPoint4;	// 56 = 0x38
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34578d75; S=0x34578d85; @synthesize
@property(copy, nonatomic) CIVector *inputPoint0;	// G=0x34578da9; S=0x34578db9; @synthesize
@property(copy, nonatomic) CIVector *inputPoint1;	// G=0x34578ddd; S=0x34578ded; @synthesize
@property(copy, nonatomic) CIVector *inputPoint2;	// G=0x34578e11; S=0x34578e21; @synthesize
@property(copy, nonatomic) CIVector *inputPoint3;	// G=0x34578e45; S=0x34578e55; @synthesize
@property(copy, nonatomic) CIVector *inputPoint4;	// G=0x34578e79; S=0x34578e89; @synthesize
+ (id)curveImageFromPoints:(const CGPoint *)points;	// 0x345787bd
+ (id)curveImageFromPoints:(const CGPoint *)points linear:(BOOL)linear;	// 0x345785c1
+ (id)customAttributes;	// 0x34577a91
+ (void)splineCurveTable:(float *)table tableSize:(int)size gamma:(float)gamma from:(const CGPoint *)from;	// 0x345787dd
- (id)_initFromProperties:(id)properties;	// 0x34579645
- (BOOL)_isIdentity;	// 0x34578211
- (id)_kernel16;	// 0x34578081
- (id)_kernel8;	// 0x34577ef1
- (id)_outputProperties;	// 0x34578ead
// declared property getter: - (id)inputImage;	// 0x34578d75
// declared property getter: - (id)inputPoint0;	// 0x34578da9
// declared property getter: - (id)inputPoint1;	// 0x34578ddd
// declared property getter: - (id)inputPoint2;	// 0x34578e11
// declared property getter: - (id)inputPoint3;	// 0x34578e45
// declared property getter: - (id)inputPoint4;	// 0x34578e79
- (id)outputImage;	// 0x345783a1
- (void)setDefaults;	// 0x34577e21
// declared property setter: - (void)setInputImage:(id)image;	// 0x34578d85
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x34578db9
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x34578ded
// declared property setter: - (void)setInputPoint2:(id)a2;	// 0x34578e21
// declared property setter: - (void)setInputPoint3:(id)a3;	// 0x34578e55
// declared property setter: - (void)setInputPoint4:(id)a4;	// 0x34578e89
@end

