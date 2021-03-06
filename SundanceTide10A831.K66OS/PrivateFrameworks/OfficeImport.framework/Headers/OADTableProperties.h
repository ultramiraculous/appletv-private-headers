/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADTableStyle, NSArray, NSString;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(assign) BOOL bandColumn;	// G=0x36c1c4a1; S=0x36b5a2a1; converted property
@property(assign) BOOL bandRow;	// G=0x36b5ca09; S=0x36b5a2b1; converted property
@property(retain) id effects;	// G=0x36c1c515; S=0x36b5a2d1; converted property
@property(assign) BOOL firstColumn;	// G=0x36c1c471; S=0x36b5a261; converted property
@property(assign) BOOL firstRow;	// G=0x36b5b98d; S=0x36b5a271; converted property
@property(assign) BOOL lastColumn;	// G=0x36c1c491; S=0x36b5a281; converted property
@property(assign) BOOL lastRow;	// G=0x36c1c481; S=0x36b5a291; converted property
@property(assign) BOOL rightToLeft;	// G=0x36c1c461; S=0x36b5a2c1; converted property
@property(retain) id style;	// G=0x36b5b4b1; S=0x36b5a30d; converted property
@property(retain) id styleId;	// G=0x36c1c451; S=0x36b568d5; converted property
+ (id)defaultProperties;	// 0x36b5669d
- (id)initWithDefaults;	// 0x36b566e5
// converted property getter: - (BOOL)bandColumn;	// 0x36c1c4a1
// converted property getter: - (BOOL)bandRow;	// 0x36b5ca09
- (void)dealloc;	// 0x36b5773d
// converted property getter: - (id)effects;	// 0x36c1c515
// converted property getter: - (BOOL)firstColumn;	// 0x36c1c471
// converted property getter: - (BOOL)firstRow;	// 0x36b5b98d
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x36c1c4b1
- (BOOL)hasEffects;	// 0x36c1c545
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x36c1c4d5
// converted property getter: - (BOOL)lastColumn;	// 0x36c1c491
// converted property getter: - (BOOL)lastRow;	// 0x36c1c481
// converted property getter: - (BOOL)rightToLeft;	// 0x36c1c461
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x36b5a2a1
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x36b5a2b1
// converted property setter: - (void)setEffects:(id)effects;	// 0x36b5a2d1
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x36b5a261
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x36b5a271
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x36b5a281
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x36b5a291
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x36b5a2c1
// converted property setter: - (void)setStyle:(id)style;	// 0x36b5a30d
// converted property setter: - (void)setStyleId:(id)anId;	// 0x36b568d5
// converted property getter: - (id)style;	// 0x36b5b4b1
// converted property getter: - (id)styleId;	// 0x36c1c451
@end

