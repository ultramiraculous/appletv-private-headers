/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library


@interface BRMediaCollectionGeniusInfo : NSObject {
}
+ (id)geniusInfoForGeniusPlaylist:(id)geniusPlaylist;	// 0x328df33d
+ (BOOL)isGeniusDBAvailable;	// 0x328df319
+ (void)setImplementationClass:(Class)aClass;	// 0x328df2c9
- (id)initWithGeniusPlaylist:(id)geniusPlaylist;	// 0x328df2ed
- (BOOL)assetIsCurrentSeed:(id)seed;	// 0x328df2d5
- (BOOL)assetIsValidSeed:(id)seed;	// 0x328df2d9
- (BOOL)playlistIsDirty;	// 0x328df2e9
- (BOOL)refreshGeniusPlaylist;	// 0x328df2e1
- (id)saveGeniusPlaylist;	// 0x328df2e5
- (BOOL)setGeniusSeed:(id)seed;	// 0x328df2dd
@end

