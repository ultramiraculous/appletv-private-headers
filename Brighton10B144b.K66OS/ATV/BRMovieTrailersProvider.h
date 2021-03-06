/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x2b10bd; converted property
+ (void)initialize;	// 0x2b08c5
+ (BOOL)trailersAvailable;	// 0x2b0a55
- (id)init;	// 0x2b0af1
- (BOOL)_addMediaAsset:(id)asset;	// 0x399391
- (void)_loadTrailers;	// 0x2b10cd
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x2b1309
- (void)_networkStatusChanged:(id)changed;	// 0x2b0a59
- (void)_postLoadedNotification:(id)notification;	// 0x2b1265
- (void)dealloc;	// 0x2b0bc9
- (int)errorCodeForProvider;	// 0x2b1041
// converted property getter: - (int)lastError;	// 0x2b10bd
- (int)load;	// 0x2b0d8d
- (id)mediaForEntityName:(id)entityName;	// 0x2b0c95
- (id)mediaTypes;	// 0x2b0c45
- (id)providerID;	// 0x2b0c89
- (int)unload;	// 0x2b0f5d
@end

