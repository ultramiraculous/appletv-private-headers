/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BROptionDialog.h"


@interface BROptionAlertControl : BROptionDialog {
@private
	long _cancelIdx;	// 148 = 0x94
}
+ (int)postAlertWithTitle:(id)title primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus;	// 0x35ddffbd
+ (int)postAlertWithTitleAndCancel:(id)titleAndCancel primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier cancelIndex:(int)index;	// 0x35ddfe21
+ (int)postDeleteConfirmationWithName:(id)name;	// 0x35de01bd
+ (void)postError:(id)error;	// 0x35de0001
- (BOOL)_itemSelected:(id)selected;	// 0x35de0395
- (BOOL)brEventAction:(id)action;	// 0x35de02c9
- (void)setCancelIndex:(long)index;	// 0x35de02b9
@end

