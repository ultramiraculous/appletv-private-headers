/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADTextListStyle, OADColorMap;

@interface PDNotesMaster : PDSlideBase {
	OADTheme *mTheme;	// 32 = 0x20
	OADColorMap *mColorMap;	// 36 = 0x24
	OADTextListStyle *mNotesTextStyle;	// 40 = 0x28
}
- (id)init;	// 0x37056ca5
- (id)colorMap;	// 0x37056d89
- (id)colorScheme;	// 0x37056da9
- (void)dealloc;	// 0x370574d5
- (void)doneWithContent;	// 0x37181cdd
- (id)drawingTheme;	// 0x37181d6d
- (id)fontScheme;	// 0x37056de1
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37056e39
- (id)notesTextStyle;	// 0x37056d99
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37056e35
- (id)parentSlideBase;	// 0x37181c69
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x37056e31
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x37056e19
- (id)parentTextStyleForTables;	// 0x37181cd9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;	// 0x37181ca5
- (id)styleMatrix;	// 0x37181c6d
- (id)theme;	// 0x37056d79
@end
