/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface BRAccessibilityManager : BRSingleton {
	BRContextMenuControl *_utilityMenu;	// 4 = 0x4
	BOOL _optionMenuEnabled;	// 8 = 0x8
	BOOL _ignoreNextEvent;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL ignoreNextEvent;	// G=0x3f107d; S=0x3f108d; @synthesize=_ignoreNextEvent
@property(assign, nonatomic) BOOL optionMenuEnabled;	// G=0x3f106d; S=0x3f0795; @synthesize=_optionMenuEnabled
+ (void)setSingleton:(id)singleton;	// 0x3f06c9
+ (id)singleton;	// 0x3f06b9
- (id)init;	// 0x3f06ed
- (void).cxx_destruct;	// 0x3f109d
- (void)_captionsSelected:(id)selected;	// 0x3f0861
- (void)_dismissContextMenu:(id)menu;	// 0x3f0825
- (void)_returnHome:(id)home;	// 0x3f0971
- (void)_showAccessibilityMenu;	// 0x3f0ab1
- (void)_voiceOverSelected:(id)selected;	// 0x3f08d5
- (BOOL)contextMenuIsVisible;	// 0x3f07f9
- (BOOL)handleEventAction:(id)action;	// 0x3f0f61
// declared property getter: - (BOOL)ignoreNextEvent;	// 0x3f107d
// declared property getter: - (BOOL)optionMenuEnabled;	// 0x3f106d
// declared property setter: - (void)setIgnoreNextEvent:(BOOL)event;	// 0x3f108d
// declared property setter: - (void)setOptionMenuEnabled:(BOOL)enabled;	// 0x3f0795
@end

