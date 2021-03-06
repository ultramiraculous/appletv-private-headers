/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WMStyle, WDCharacterRun, NSString;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper : CMMapper {
@private
	WDCharacterRun *wdCharacterRun;	// 8 = 0x8
	WMStyle *mStyle;	// 12 = 0xc
	float mFontSizeBumpFactor;	// 16 = 0x10
	NSString *mText;	// 20 = 0x14
	BOOL mIsDeleted;	// 24 = 0x18
}
+ (void)addNonCollapsableSpanAt:(id)at withState:(id)state;	// 0x34465b4d
- (id)initWithText:(id)text;	// 0x34577dad
- (id)initWithWDCharacterRun:(id)wdcharacterRun parent:(id)parent;	// 0x3446436d
- (id)baseStyle;	// 0x34577909
- (id)boldStyle;	// 0x34577a19
- (unsigned)countAndStripLeadingTabs;	// 0x34577a99
- (id)createCharacterStyle;	// 0x34464415
- (void)dealloc;	// 0x34465985
- (int)defaultTabWidth;	// 0x34466285
- (BOOL)isDeleted;	// 0x34465975
- (void)map1At:(id)at withState:(id)state;	// 0x34577bb5
- (void)mapAt:(id)at withState:(id)state;	// 0x3446551d
- (void)mapSubstring:(id)substring at:(id)at;	// 0x34465e75
- (void)mapTabs:(unsigned)tabs at:(id)at afterText:(id)text;	// 0x34466039
@end

