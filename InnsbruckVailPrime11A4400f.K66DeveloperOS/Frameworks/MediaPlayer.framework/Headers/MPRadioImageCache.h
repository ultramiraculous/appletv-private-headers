/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPImageCache.h"


@interface MPRadioImageCache : MPImageCache {
}
+ (void)_cacheRawStationImage:(id)image forKey:(id)key;	// 0x2e381225
+ (void)_cacheRawTrackImage:(id)image forKey:(id)key;	// 0x2e38125d
+ (CGSize)_maximumSizeForRadioStations;	// 0x2e381295
+ (CGSize)_maximumSizeForRadioTracks;	// 0x2e381575
+ (id)_rawStationImageForKey:(id)key;	// 0x2e381841
+ (id)_rawTrackImageForKey:(id)key;	// 0x2e38185d
+ (void)initialize;	// 0x2e380e75
+ (void)registerRadioStationStyle:(id)style;	// 0x2e380fc5
+ (void)registerRadioTrackStyle:(id)style;	// 0x2e38105d
+ (void)unregisterRadioStationStyle:(id)style;	// 0x2e3810f5
+ (void)unregisterRadioTrackStyle:(id)style;	// 0x2e38118d
@end
