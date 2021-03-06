/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSControlTableCell.h"

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
	UIView *_disabledView;	// 420 = 0x1a4
}
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3249de19
- (BOOL)canReload;	// 0x3249e2d9
- (id)controlValue;	// 0x3249e381
- (void)dealloc;	// 0x3249e335
- (void)layoutSubviews;	// 0x3249e445
- (id)newControl;	// 0x3249e171
- (void)prepareForReuse;	// 0x3249e09d
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x3249de65
- (void)setCellEnabled:(BOOL)enabled;	// 0x3249e1c1
- (void)setValue:(id)value;	// 0x3249e3c9
- (id)titleLabel;	// 0x3249e1bd
@end

