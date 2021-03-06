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
+ (void)setSingleton:(id)singleton;	// 0x2285b9
+ (id)singleton;	// 0x2285a9
- (void)dealloc;	// 0x2285c9
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x2286b5
- (id)pairableTouchRemotes;	// 0x228695
- (id)pairedTouchRemotes;	// 0x228651
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x228671
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x2286d5
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x228615
@end

