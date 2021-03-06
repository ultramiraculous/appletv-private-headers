/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPGradientBrush.h"

@class TSUColor, NSArray;

@interface MFPPathGradientBrush : MFPGradientBrush {
	TSUColor *mCenterColor;	// 52 = 0x34
	CGPoint mCenterPoint;	// 56 = 0x38
	NSArray *mSurroundColors;	// 64 = 0x40
	CGPathRef mPath;	// 68 = 0x44
}
- (id).cxx_construct;	// 0x36cc659d
- (void)createShading;	// 0x36cc64ad
- (void)dealloc;	// 0x36cc6389
- (id)endColor;	// 0x36cc657d
- (void)setCenterColor:(id)color;	// 0x36cc63fd
- (void)setCenterPoint:(CGPoint)point;	// 0x36cc6439
- (void)setPath:(CGPathRef)path;	// 0x36cc6489
- (void)setSurroundColors:(id)colors;	// 0x36cc644d
- (id)startColor;	// 0x36cc656d
@end

