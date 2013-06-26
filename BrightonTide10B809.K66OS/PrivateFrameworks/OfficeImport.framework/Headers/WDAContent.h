/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import "OADTextClient.h"
#import <NSObject.h> // Unknown library

@class WDAAnchor, WDATextBox, OADDrawable;

@interface WDAContent : NSObject <OADClient, OADTextClient> {
	WDAAnchor *mAnchor;	// 4 = 0x4
	WDATextBox *mTextBox;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	int mTextType;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x348ee651; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x348ff521; S=0x34aa8f25; converted property
@property(retain) id drawable;	// G=0x348ee491; S=0x348edf6d; converted property
@property(retain) id textBox;	// G=0x348f9381; S=0x348f97b9; converted property
@property(assign) int textType;	// G=0x34951bb1; S=0x348edf21; converted property
+ (Class)classForType:(unsigned short)type;	// 0x34aa9011
- (id)init;	// 0x348eded1
// declared property getter: - (id)anchor;	// 0x348ee651
// converted property getter: - (CGRect)bounds;	// 0x348ff521
- (void)clearAnchor;	// 0x349d5995
- (id)createAnchor;	// 0x348ee4a1
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x34aa8e5d
- (void)dealloc;	// 0x34908c49
// converted property getter: - (id)drawable;	// 0x348ee491
- (BOOL)floating;	// 0x348eec7d
- (BOOL)hasBounds;	// 0x348ff509
- (BOOL)hasText;	// 0x34aa8fcd
- (bool)isLine;	// 0x34aa8f55
- (bool)isShape;	// 0x3490005d
- (bool)isTopLevelObject;	// 0x34aa8f9d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34aa8f25
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x348edf6d
// converted property setter: - (void)setTextBox:(id)box;	// 0x348f97b9
// converted property setter: - (void)setTextType:(int)type;	// 0x348edf21
// converted property getter: - (id)textBox;	// 0x348f9381
// converted property getter: - (int)textType;	// 0x34951bb1
@end
