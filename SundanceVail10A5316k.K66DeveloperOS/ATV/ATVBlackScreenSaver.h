/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVScreenSaverPluginProtocol.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : XXUnknownSuperclass <ATVScreenSaverPluginProtocol> {
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x20ccbd
- (void)dealloc;	// 0x20cd71
- (id)screenSaverControl;	// 0x20cdbd
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x20cdcd
- (BOOL)usesVideoPlayback;	// 0x20cdd1
@end

