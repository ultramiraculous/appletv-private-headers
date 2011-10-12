/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
@private
	BRController *_guardedController;	// 124 = 0x7c
	id *_menuItemNameKeys;	// 128 = 0x80
	BOOL _passcodeMatched;	// 132 = 0x84
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x3325ff4d
- (void)dealloc;	// 0x33260019
- (float)heightForRow:(long)row;	// 0x332602c9
- (long)itemCount;	// 0x33260281
- (id)itemForRow:(long)row;	// 0x33260219
- (void)itemSelected:(long)selected;	// 0x33260065
- (BOOL)rowSelectable:(long)selectable;	// 0x332602cd
- (id)titleForRow:(long)row;	// 0x33260299
@end

