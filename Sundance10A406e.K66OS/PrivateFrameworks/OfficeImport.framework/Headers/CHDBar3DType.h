/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDBar2DType.h"


@interface CHDBar3DType : CHDBar2DType {
	int mGapDepth;	// 40 = 0x28
	int mShapeType;	// 44 = 0x2c
}
@property(assign) int gapDepth;	// G=0x3504bbfd; S=0x3502d309; converted property
@property(assign) int shapeType;	// G=0x35001ff9; S=0x35001f31; converted property
+ (bool)is3DType;	// 0x35002271
- (id)initWithChart:(id)chart;	// 0x35001c5d
// converted property getter: - (int)gapDepth;	// 0x3504bbfd
// converted property setter: - (void)setGapDepth:(int)depth;	// 0x3502d309
// converted property setter: - (void)setShapeType:(int)type;	// 0x35001f31
// converted property getter: - (int)shapeType;	// 0x35001ff9
@end

