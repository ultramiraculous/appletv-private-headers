/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


@interface PlayReady : XXUnknownSuperclass {
}
+ (id)PlayReadyErrorToString:(int)string;	// 0x4ae839
+ (char *)apiSecret;	// 0x4ae691
+ (void)cleanup;	// 0x4ae7ad
+ (id)getKey:(int *)key;	// 0x4ae7ed
+ (void)parseNetflixContentHeader:(id)header keyEnvelope:(id)envelope drmHeader:(vector<unsigned char, std::allocator<unsigned char> > *)header3 ivData:(vector<unsigned char, std::allocator<unsigned char> > *)data cryptoData:(vector<unsigned char, std::allocator<unsigned char> > *)data5;	// 0x4aeaf5
+ (void)setUniqueId:(char *)anId :(unsigned long)arg2;	// 0x4ae831
+ (void)startWithId:(const char *)anId;	// 0x4ae695
+ (void)triggerKeyRetrieval:(id)retrieval :(id)arg2 :(int)arg3;	// 0x4ae6e5
- (id)init;	// 0x4ae859
- (int)decryptData:(char *)data :(unsigned long)arg2;	// 0x4aea9d
- (void)doGetKey:(id)key;	// 0x4ae895
- (int)generateChallenge:(const char *)challenge :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x4aea7d
- (int)getPRKey:(char *)key :(unsigned long)arg2;	// 0x4aea8d
- (int)isInitialized;	// 0x4aeaf1
- (int)sendRequest:(const char *)request :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x4aea79
- (int)setIv:(char *)iv :(unsigned long)arg2;	// 0x4aea95
- (void)unInitialize;	// 0x4aeaa5
@end

