/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRYTSigningAgent, BRSyncProgressAgent, BRDAAPListenerEnabler, BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRSentinel : BRSingleton {
	id<BRMusicStoreImageDecryptionAgent> _musicStoreImageDecryptionAgent;	// 4 = 0x4
	id<BRMusicStoreImageDecryptionAgent> _musicStoreTrickPlayImageDecryptionAgent;	// 8 = 0x8
	id<BRSyncProgressAgent> _syncProgressAgent;	// 12 = 0xc
	id<BRYTSigningAgent> _signingAgent;	// 16 = 0x10
	id<BRDAAPListenerEnabler> _daapListenerEnabler;	// 20 = 0x14
}
@property(retain) id YTSigningAgent;	// G=0x35b335; S=0x35b2f9; converted property
@property(retain) id musicStoreImageDecryptionAgent;	// G=0x35b1a5; S=0x35b169; converted property
@property(retain) id musicStoreTrickPlayImageDecryptionAgent;	// G=0x35b1f1; S=0x35b1b5; converted property
@property(retain) id syncProgressAgent;	// G=0x35b2e9; S=0x35b201; converted property
+ (void)setSingleton:(id)singleton;	// 0x35b0e1
+ (id)singleton;	// 0x35b0d1
// converted property getter: - (id)YTSigningAgent;	// 0x35b335
- (id)daapListenerEnabler;	// 0x35b355
- (void)dealloc;	// 0x35b0f1
// converted property getter: - (id)musicStoreImageDecryptionAgent;	// 0x35b1a5
// converted property getter: - (id)musicStoreTrickPlayImageDecryptionAgent;	// 0x35b1f1
- (void)setDAAPListenerEnabler:(id)enabler;	// 0x35b345
// converted property setter: - (void)setMusicStoreImageDecryptionAgent:(id)agent;	// 0x35b169
// converted property setter: - (void)setMusicStoreTrickPlayImageDecryptionAgent:(id)agent;	// 0x35b1b5
// converted property setter: - (void)setSyncProgressAgent:(id)agent;	// 0x35b201
// converted property setter: - (void)setYTSigningAgent:(id)agent;	// 0x35b2f9
// converted property getter: - (id)syncProgressAgent;	// 0x35b2e9
- (id)urlBagFromStoreBag:(id)storeBag;	// 0x35b365
@end

