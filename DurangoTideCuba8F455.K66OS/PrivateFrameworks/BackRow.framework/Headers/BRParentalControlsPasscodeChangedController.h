/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
@private
	BRController *_guardedController;	// 104 = 0x68
	NSString **_menuItemNameKeys;	// 108 = 0x6c
	BOOL _passcodeMatched;	// 112 = 0x70
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x32f96775
- (void)dealloc;	// 0x32f9672d
- (float)heightForRow:(long)row;	// 0x32f964e1
- (long)itemCount;	// 0x32f964c9
- (id)itemForRow:(long)row;	// 0x32f9651d
- (void)itemSelected:(long)selected;	// 0x32f9657d
- (BOOL)rowSelectable:(long)selectable;	// 0x32f964e5
- (id)titleForRow:(long)row;	// 0x32f964e9
@end

