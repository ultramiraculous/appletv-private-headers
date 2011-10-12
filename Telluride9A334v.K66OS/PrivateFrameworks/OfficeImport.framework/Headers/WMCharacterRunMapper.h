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
+ (void)addNonCollapsableSpanAt:(id)at withState:(id)state;	// 0x35581511
- (id)initWithText:(id)text;	// 0x357d1475
- (id)initWithWDCharacterRun:(id)wdcharacterRun parent:(id)parent;	// 0x3557e665
- (id)baseStyle;	// 0x357d1595
- (id)boldStyle;	// 0x357d1505
- (unsigned)countAndStripLeadingTabs;	// 0x357d1149
- (id)createCharacterStyle;	// 0x3557e721
- (void)dealloc;	// 0x35580295
- (int)defaultTabWidth;	// 0x35581b49
- (BOOL)isDeleted;	// 0x35580285
- (void)map1At:(id)at withState:(id)state;	// 0x357d1261
- (void)mapAt:(id)at withState:(id)state;	// 0x3557fb75
- (void)mapSubstring:(id)substring at:(id)at;	// 0x35580039
- (void)mapTabs:(unsigned)tabs at:(id)at afterText:(id)text;	// 0x355818a9
@end

