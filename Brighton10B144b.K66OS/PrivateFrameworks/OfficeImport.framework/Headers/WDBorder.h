/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class TSUColor;

@interface WDBorder : NSObject <NSCopying> {
	int mStyle;	// 4 = 0x4
	TSUColor *mColor;	// 8 = 0x8
	unsigned char mWidth;	// 12 = 0xc
	unsigned char mSpace;	// 13 = 0xd
	BOOL mShadow;	// 14 = 0xe
	BOOL mFrame;	// 15 = 0xf
}
@property(retain) id color;	// G=0x34903489; S=0x348e44e9; converted property
@property(assign) BOOL frame;	// G=0x34aa779d; S=0x34949f19; converted property
@property(assign) BOOL shadow;	// G=0x34aa778d; S=0x34949f09; converted property
@property(assign) unsigned char space;	// G=0x34aa777d; S=0x348e4535; converted property
@property(assign) int style;	// G=0x348e44d9; S=0x348e44c9; converted property
@property(assign) unsigned char width;	// G=0x34903479; S=0x348e4525; converted property
- (id)init;	// 0x348d6d75
// converted property getter: - (id)color;	// 0x34903489
- (id)copyWithZone:(NSZone *)zone;	// 0x34aa77ad
- (void)dealloc;	// 0x3490647d
// converted property getter: - (BOOL)frame;	// 0x34aa779d
- (BOOL)isEqual:(id)equal;	// 0x34aa74f1
- (BOOL)isEqualToBorder:(id)border;	// 0x34aa7441
- (void)setBorder:(id)border;	// 0x34aa754d
// converted property setter: - (void)setColor:(id)color;	// 0x348e44e9
// converted property setter: - (void)setFrame:(BOOL)frame;	// 0x34949f19
- (void)setNullBorder;	// 0x34aa763d
// converted property setter: - (void)setShadow:(BOOL)shadow;	// 0x34949f09
- (void)setSingleBlackBorder;	// 0x34aa76dd
// converted property setter: - (void)setSpace:(unsigned char)space;	// 0x348e4535
// converted property setter: - (void)setStyle:(int)style;	// 0x348e44c9
// converted property setter: - (void)setWidth:(unsigned char)width;	// 0x348e4525
// converted property getter: - (BOOL)shadow;	// 0x34aa778d
// converted property getter: - (unsigned char)space;	// 0x34aa777d
// converted property getter: - (int)style;	// 0x348e44d9
// converted property getter: - (unsigned char)width;	// 0x34903479
@end
