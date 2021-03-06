/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
@private
	BOOL _queryPending;	// 4 = 0x4
	ATVMediaQueryRef _geniusMixSongsQuery;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x33b9f8c5
+ (id)singleton;	// 0x33b9f8b5
- (ATVDataClientRef)_dataClient;	// 0x33b9fb2d
- (void)_geniusMixSongsQueryComplete;	// 0x33b9fc05
- (void)_playerAssetChanged:(id)changed;	// 0x33b9fa81
- (void)_playerStateChanged:(id)changed;	// 0x33b9f9f1
- (void)_setGeniusMixSongsQuery:(ATVMediaQueryRef)query;	// 0x33b9fb65
- (void)dealloc;	// 0x33b9f8d5
- (void)enableWithQuery:(ATVMediaQueryRef)query;	// 0x33b9f94d
@end

