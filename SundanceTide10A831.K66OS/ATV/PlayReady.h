/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PlayReady : XXUnknownSuperclass {
}
+ (id)PlayReadyErrorToString:(int)string;	// 0x4f378d
+ (char *)apiSecret;	// 0x4f35bd
+ (void)cleanup;	// 0x4f36e1
+ (id)getKey:(int *)key;	// 0x4f372d
+ (void)parseNetflixContentHeader:(id)header keyEnvelope:(id)envelope drmHeader:(vector<unsigned char, std::allocator<unsigned char> > *)header3 ivData:(vector<unsigned char, std::allocator<unsigned char> > *)data cryptoData:(vector<unsigned char, std::allocator<unsigned char> > *)data5;	// 0x4f3a81
+ (void)setUniqueId:(char *)anId :(unsigned long)arg2;	// 0x4f3785
+ (void)startWithId:(const char *)anId;	// 0x4f35c1
+ (void)triggerKeyRetrieval:(id)retrieval :(id)arg2 :(int)arg3;	// 0x4f3611
- (id)init;	// 0x4f37ad
- (int)decryptData:(char *)data :(unsigned long)arg2;	// 0x4f3a29
- (void)doGetKey:(id)key;	// 0x4f37e9
- (int)generateChallenge:(const char *)challenge :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x4f3a09
- (int)getPRKey:(char *)key :(unsigned long)arg2;	// 0x4f3a19
- (int)isInitialized;	// 0x4f3a7d
- (int)sendRequest:(const char *)request :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x4f3a05
- (int)setIv:(char *)iv :(unsigned long)arg2;	// 0x4f3a21
- (void)unInitialize;	// 0x4f3a31
@end
