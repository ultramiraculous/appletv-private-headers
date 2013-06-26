/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface BRSoundHandler : BRSingleton {
	BOOL _isSoundPrefEnabled;	// 4 = 0x4
	BOOL _soundSuppressed;	// 5 = 0x5
	unsigned long _soundIDs[25];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x3b6ce9
+ (void)reloadSoundPreference;	// 0x3b6d49
+ (void)setSingleton:(id)singleton;	// 0x3b6cd9
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x3b6d1d
+ (id)singleton;	// 0x3b6cc9
- (id)init;	// 0x3b6d71
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x3b6ecd
- (BOOL)_allowedToPlaySound;	// 0x3b6f5d
- (void)_playSound:(int)sound;	// 0x3b6f9d
- (void)_reloadSoundPreference;	// 0x3b6fe1
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x3b6f8d
- (void)dealloc;	// 0x3b6dcd
@end
