/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAutoDismissable.h"
#import "BROptionDialog.h"


__attribute__((visibility("hidden")))
@interface BROptionAlertControl : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	BOOL _allowAutoDismiss;	// 172 = 0xac
	long _autoDismissIdx;	// 176 = 0xb0
}
+ (int)postAlertWithTitle:(id)title primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier;	// 0x2bd659
+ (int)postAlertWithTitleAndCancel:(id)titleAndCancel primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier cancelIndex:(int)index allowAutoDismiss:(BOOL)dismiss autoDismissIndex:(int)index11;	// 0x2bd47d
+ (int)postDeleteConfirmationWithName:(id)name;	// 0x2bd881
+ (int)postDeleteConfirmationWithName:(id)name identifier:(id)identifier;	// 0x2bd895
+ (void)postError:(id)error;	// 0x2bd6a1
+ (void)postError:(id)error identifier:(id)identifier;	// 0x2bd6f1
- (BOOL)_itemSelected:(id)selected;	// 0x2bdb05
- (BOOL)autoDismiss;	// 0x2bda91
- (BOOL)brEventAction:(id)action;	// 0x2bd9a9
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x2bda71
- (void)setCancelIndex:(long)index;	// 0x2bd999
@end

