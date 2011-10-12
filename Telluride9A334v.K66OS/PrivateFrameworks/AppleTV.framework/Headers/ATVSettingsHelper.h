/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x33123b65
+ (id)singleton;	// 0x33123b55
- (id)init;	// 0x33123b75
- (void)dealloc;	// 0x33123bdd
- (BOOL)haveWeQuitSinceBoot;	// 0x33123d3d
- (BOOL)performObliterate;	// 0x33123c2d
- (BOOL)performRestore;	// 0x33123d39
- (BOOL)performUpdates:(id)updates;	// 0x33123c15
- (void)reboot;	// 0x33123ddd
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x33123c11
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x33123c0d
- (void)setSSHEnabled:(BOOL)enabled;	// 0x33123df1
- (BOOL)setSystemLanguage:(id)language;	// 0x33123c09
@end

