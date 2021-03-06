/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
	int mSlideLayoutType;	// 40 = 0x28
	PDSlideMaster *mSlideMaster;	// 44 = 0x2c
}
@property(assign) int slideLayoutType;	// G=0x36a3b82d; S=0x36a391b5; converted property
@property(retain) id slideMaster;	// G=0x36a39261; S=0x36a391a5; converted property
- (id)initWithSlideMaster:(id)slideMaster;	// 0x36a390a5
- (void)dealloc;	// 0x36a532cd
- (id)defaultTheme;	// 0x36a45049
- (void)doneWithContent;	// 0x36c4fa71
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a39591
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a394f1
- (id)parentSlideBase;	// 0x36a3bb7d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a39271
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x36a391c5
- (id)parentTextStyleForTables;	// 0x36b5af89
// converted property setter: - (void)setSlideLayoutType:(int)type;	// 0x36a391b5
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x36a391a5
// converted property getter: - (int)slideLayoutType;	// 0x36a3b82d
// converted property getter: - (id)slideMaster;	// 0x36a39261
@end

