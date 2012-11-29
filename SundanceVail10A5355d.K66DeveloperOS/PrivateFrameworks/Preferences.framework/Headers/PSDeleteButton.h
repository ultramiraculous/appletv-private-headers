/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIView.h> // Unknown library
#import "Preferences-Structs.h"
#import "PSHeaderFooterView.h"

@class UIButton;

@interface PSDeleteButton : UIView <PSHeaderFooterView> {
	UIButton *_deleteButton;	// 84 = 0x54
}
+ (float)deleteButtonHeight;	// 0x34dc3cbd
- (id)initWithFrame:(CGRect)frame;	// 0x34dc3d7d
- (id)initWithSpecifier:(id)specifier;	// 0x34dc3cc5
- (void)addButtonTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x34dc4155
- (void)layoutSubviews;	// 0x34dc4005
- (float)preferredHeightForWidth:(float)width;	// 0x34dc4195
- (void)setButtonTitle:(id)title;	// 0x34dc4175
@end
