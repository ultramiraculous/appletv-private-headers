/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class SettingsParentalLocaleProvider;

__attribute__((visibility("hidden")))
@interface SettingsParentalLocaleController : BRMenuController {
	SettingsParentalLocaleProvider *_localeProvider;	// 144 = 0x90
}
@property(retain, nonatomic) SettingsParentalLocaleProvider *localeProvider;	// G=0x3e68dd; S=0x3e68ed; @synthesize=_localeProvider
- (id)init;	// 0x3e61d9
- (void).cxx_destruct;	// 0x3e6915
- (void)_updateMenuWidth;	// 0x3e668d
- (void)controlWasActivated;	// 0x3e635d
- (void)itemSelected:(long)selected;	// 0x3e64d9
// declared property getter: - (id)localeProvider;	// 0x3e68dd
// declared property setter: - (void)setLocaleProvider:(id)provider;	// 0x3e68ed
@end

