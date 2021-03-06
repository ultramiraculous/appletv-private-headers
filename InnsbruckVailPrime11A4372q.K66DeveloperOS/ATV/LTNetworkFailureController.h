/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"
#import "ATVTCPIPConfigDelegate.h"

@class BRAirportNetwork, NSString;

__attribute__((visibility("hidden")))
@interface LTNetworkFailureController : BRMenuController <BRMenuListItemProvider, ATVTCPIPConfigDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	BOOL _localNetworkUp;	// 148 = 0x94
	NSString *_popToLabel;	// 152 = 0x98
}
- (id)initForNetwork:(id)network withPopToLabel:(id)label;	// 0x46dad9
- (void).cxx_destruct;	// 0x46dead
- (void)_setTitleAndPromptStrings;	// 0x46dee1
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x46de0d
- (void)configurationPending:(id)pending forInterface:(int)interface;	// 0x46de09
- (float)heightForRow:(long)row;	// 0x46de01
- (long)itemCount;	// 0x46dde5
- (id)itemForRow:(long)row;	// 0x46dd59
- (void)itemSelected:(long)selected;	// 0x46dc01
- (BOOL)rowSelectable:(long)selectable;	// 0x46de05
- (id)titleForRow:(long)row;	// 0x46ddfd
@end

