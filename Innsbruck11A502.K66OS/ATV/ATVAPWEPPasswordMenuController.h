/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"
#import "ATVAPPasswordEntryDelegate.h"

@class BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	long _passwordType;	// 148 = 0x94
	id<ATVAPPasswordEntryDelegate> _delegate;	// 152 = 0x98
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x211edd
- (void)dealloc;	// 0x212031
- (float)heightForRow:(long)row;	// 0x212185
- (long)itemCount;	// 0x21217d
- (id)itemForRow:(long)row;	// 0x212119
- (void)itemSelected:(long)selected;	// 0x21207d
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x21218d
- (BOOL)rowSelectable:(long)selectable;	// 0x212189
- (id)titleForRow:(long)row;	// 0x212181
@end

