/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject <NSCopying> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mLeftBorderIndex;	// 8 = 0x8
	unsigned mRightBorderIndex;	// 12 = 0xc
	unsigned mTopBorderIndex;	// 16 = 0x10
	unsigned mBottomBorderIndex;	// 20 = 0x14
	unsigned mDiagonalBorderIndex;	// 24 = 0x18
	unsigned mVerticalBorderIndex;	// 28 = 0x1c
	unsigned mHorizontalBorderIndex;	// 32 = 0x20
}
@property(retain) id bottomBorder;	// G=0x34472e2d; S=0x34453c95; converted property
@property(retain) id diagonalBorder;	// G=0x3456e2f5; S=0x34453ce1; converted property
@property(retain) id horizontalBorder;	// G=0x3456e9f9; S=0x34517cc1; converted property
@property(retain) id leftBorder;	// G=0x34472de1; S=0x34453a3d; converted property
@property(retain) id rightBorder;	// G=0x34472e75; S=0x34453a99; converted property
@property(retain) id topBorder;	// G=0x34472c31; S=0x34453c49; converted property
@property(retain) id verticalBorder;	// G=0x3456e1b9; S=0x34517c75; converted property
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal resources:(id)resources;	// 0x344538c9
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal vertical:(id)vertical horizontal:(id)horizontal resources:(id)resources;	// 0x34517c19
+ (id)bordersWithResources:(id)resources;	// 0x3445394d
- (id)initWithResources:(id)resources;	// 0x34453999
// converted property getter: - (id)bottomBorder;	// 0x34472e2d
- (id)copyWithZone:(NSZone *)zone;	// 0x345c0f85
// converted property getter: - (id)diagonalBorder;	// 0x3456e2f5
- (unsigned)hash;	// 0x345c0f59
// converted property getter: - (id)horizontalBorder;	// 0x3456e9f9
- (BOOL)isEqual:(id)equal;	// 0x344544c1
- (BOOL)isEqualToBorders:(id)borders;	// 0x3445451d
// converted property getter: - (id)leftBorder;	// 0x34472de1
// converted property getter: - (id)rightBorder;	// 0x34472e75
// converted property setter: - (void)setBottomBorder:(id)border;	// 0x34453c95
// converted property setter: - (void)setDiagonalBorder:(id)border;	// 0x34453ce1
// converted property setter: - (void)setHorizontalBorder:(id)border;	// 0x34517cc1
// converted property setter: - (void)setLeftBorder:(id)border;	// 0x34453a3d
// converted property setter: - (void)setRightBorder:(id)border;	// 0x34453a99
// converted property setter: - (void)setTopBorder:(id)border;	// 0x34453c49
// converted property setter: - (void)setVerticalBorder:(id)border;	// 0x34517c75
// converted property getter: - (id)topBorder;	// 0x34472c31
// converted property getter: - (id)verticalBorder;	// 0x3456e1b9
@end
