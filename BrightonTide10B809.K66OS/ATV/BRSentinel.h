/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRSyncProgressAgent, BRYTSigningAgent, BRDAAPListenerEnabler, BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRSentinel : BRSingleton {
	id<BRMusicStoreImageDecryptionAgent> _musicStoreImageDecryptionAgent;	// 4 = 0x4
	id<BRMusicStoreImageDecryptionAgent> _musicStoreTrickPlayImageDecryptionAgent;	// 8 = 0x8
	id<BRSyncProgressAgent> _syncProgressAgent;	// 12 = 0xc
	id<BRYTSigningAgent> _signingAgent;	// 16 = 0x10
	id<BRDAAPListenerEnabler> _daapListenerEnabler;	// 20 = 0x14
}
@property(retain) id YTSigningAgent;	// G=0x39b9d1; S=0x39b995; converted property
@property(retain) id musicStoreImageDecryptionAgent;	// G=0x39b841; S=0x39b805; converted property
@property(retain) id musicStoreTrickPlayImageDecryptionAgent;	// G=0x39b88d; S=0x39b851; converted property
@property(retain) id syncProgressAgent;	// G=0x39b985; S=0x39b89d; converted property
+ (void)setSingleton:(id)singleton;	// 0x39b77d
+ (id)singleton;	// 0x39b76d
// converted property getter: - (id)YTSigningAgent;	// 0x39b9d1
- (id)daapListenerEnabler;	// 0x39b9f1
- (void)dealloc;	// 0x39b78d
// converted property getter: - (id)musicStoreImageDecryptionAgent;	// 0x39b841
// converted property getter: - (id)musicStoreTrickPlayImageDecryptionAgent;	// 0x39b88d
- (void)setDAAPListenerEnabler:(id)enabler;	// 0x39b9e1
// converted property setter: - (void)setMusicStoreImageDecryptionAgent:(id)agent;	// 0x39b805
// converted property setter: - (void)setMusicStoreTrickPlayImageDecryptionAgent:(id)agent;	// 0x39b851
// converted property setter: - (void)setSyncProgressAgent:(id)agent;	// 0x39b89d
// converted property setter: - (void)setYTSigningAgent:(id)agent;	// 0x39b995
// converted property getter: - (id)syncProgressAgent;	// 0x39b985
- (id)urlBagFromStoreBag:(id)storeBag;	// 0x39ba01
@end

