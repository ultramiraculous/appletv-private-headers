/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVITunesLibraryTouchRemoteAccess : BRSingleton <ATVITunesTouchRemoteManager> {
	id<ATVITunesTouchRemoteManager> _delegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x238809
+ (id)singleton;	// 0x2387f9
- (void)dealloc;	// 0x238819
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x238905
- (id)pairableTouchRemotes;	// 0x2388e5
- (id)pairedTouchRemotes;	// 0x2388a1
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x2388c1
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x238925
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x238865
@end

