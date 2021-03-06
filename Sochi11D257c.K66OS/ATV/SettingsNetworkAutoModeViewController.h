/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@protocol SettingsNetworkAutoModeSelectionDelegate;

__attribute__((visibility("hidden")))
@interface SettingsNetworkAutoModeViewController : BRMenuController <BRMenuListItemProvider> {
	unsigned _forWireless : 1;	// 144 = 0x90
	unsigned _useAuto : 1;	// 144 = 0x90
	BOOL _forDNS;	// 145 = 0x91
	id<SettingsNetworkAutoModeSelectionDelegate> _delegate;	// 148 = 0x94
	BOOL _shouldDisableAuto;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL shouldDisableAuto;	// G=0x2ed42d; S=0x2ed43d; @synthesize=_shouldDisableAuto
- (id)initForAutomaticConfig:(BOOL)automaticConfig wireless:(BOOL)wireless dns:(BOOL)dns notifying:(id)notifying;	// 0x2ed045
- (void).cxx_destruct;	// 0x2ed44d
- (float)heightForRow:(long)row;	// 0x2ed425
- (long)itemCount;	// 0x2ed3dd
- (id)itemForRow:(long)row;	// 0x2ed2ed
- (void)itemSelected:(long)selected;	// 0x2ed229
- (BOOL)rowSelectable:(long)selectable;	// 0x2ed429
// declared property setter: - (void)setShouldDisableAuto:(BOOL)disableAuto;	// 0x2ed43d
// declared property getter: - (BOOL)shouldDisableAuto;	// 0x2ed42d
- (id)titleForRow:(long)row;	// 0x2ed3e1
@end

