/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramMapper.h"

@class OADOrientedBounds, NSString;

@interface CMDiagramShapeMapper : CMDiagramMapper {
	int mChildCount;	// 88 = 0x58
	OADOrientedBounds *mDiagramShapeBounds;	// 92 = 0x5c
	NSString *mIdentifier;	// 96 = 0x60
	float mDefaultFontSize;	// 100 = 0x64
	int mMaxMappableTreeDepth;	// 104 = 0x68
	float mDefaultScale;	// 108 = 0x6c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x31851751
- (CGRect)circumscribedBounds;	// 0x318a4bbd
- (float)defaultFontSize;	// 0x31854931
- (void)mapAt:(id)at withState:(id)state;	// 0x31851a5d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x318a4bd1
- (void)setDefaultFonSize;	// 0x318527b1
- (void)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index;	// 0x31852845
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x31852869
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x31886929
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x31852f55
@end

