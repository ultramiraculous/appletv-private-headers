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
+ (void)playSound:(int)sound;	// 0x427fed
+ (void)reloadSoundPreference;	// 0x42804d
+ (void)setSingleton:(id)singleton;	// 0x427fdd
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x428021
+ (id)singleton;	// 0x427fcd
- (id)init;	// 0x428075
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x4281f5
- (BOOL)_allowedToPlaySound;	// 0x428285
- (void)_playSound:(int)sound;	// 0x4282c5
- (void)_reloadSoundPreference;	// 0x428309
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x4282b5
- (void)dealloc;	// 0x4280fd
@end

