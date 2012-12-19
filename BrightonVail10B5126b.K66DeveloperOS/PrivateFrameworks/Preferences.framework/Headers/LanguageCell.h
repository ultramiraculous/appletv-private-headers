/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSTableCell.h"

@class NSString, UIImageView;

@interface LanguageCell : PSTableCell {
	UIImageView *_languageNameImage;	// 364 = 0x16c
	NSString *_languageNameText;	// 368 = 0x170
}
@property(retain, nonatomic) UIImageView *languageNameImage;	// G=0x352f82a5; S=0x352f82b5; @synthesize=_languageNameImage
@property(retain, nonatomic) NSString *languageNameText;	// G=0x352f8285; S=0x352f8295; @synthesize=_languageNameText
- (void)dealloc;	// 0x352f822d
// declared property getter: - (id)languageNameImage;	// 0x352f82a5
// declared property getter: - (id)languageNameText;	// 0x352f8285
- (void)prepareForReuse;	// 0x352f81b5
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x352f8085
- (void)setChecked:(BOOL)checked;	// 0x352f7f99
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x352f7fe5
// declared property setter: - (void)setLanguageNameImage:(id)image;	// 0x352f82b5
// declared property setter: - (void)setLanguageNameText:(id)text;	// 0x352f8295
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x352f8035
- (void)turnOffLanguageNameImage;	// 0x352f7ef9
@end
