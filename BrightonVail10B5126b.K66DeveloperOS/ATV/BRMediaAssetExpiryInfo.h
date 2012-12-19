/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaAssetExpiryInfo : XXUnknownSuperclass {
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x37d7f9; S=0x37d815; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x37d6fd
+ (void)setImplementationClass:(Class)aClass;	// 0x37d6ed
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x37d745
- (id)asset;	// 0x37d799
- (int)compare:(id)compare;	// 0x37d869
- (void)dealloc;	// 0x37d7a9
// converted property getter: - (id)expiryDate;	// 0x37d7f9
- (id)expiryDescription;	// 0x37d8a5
- (BOOL)hasBeenPlayed;	// 0x37d961
- (BOOL)isExpired;	// 0x37d7f5
- (unsigned)rentalPlaybackDuration;	// 0x37d865
- (id)rentalPlaybackDurationDescription;	// 0x37d8cd
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x37d815
@end
