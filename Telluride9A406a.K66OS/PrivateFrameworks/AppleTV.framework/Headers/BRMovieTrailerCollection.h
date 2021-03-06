/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

@interface BRMovieTrailerCollection : BRBaseMediaCollection {
@private
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x33042ef1; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33042d25
- (void)addObject:(id)object;	// 0x33042ea9
- (id)artist;	// 0x33042f05
- (id)artistForSorting;	// 0x33042f41
- (id)collectionID;	// 0x33042df9
- (id)collectionType;	// 0x33042ddd
- (int)count;	// 0x33042ec9
- (id)coverArt;	// 0x33042e35
- (void)dealloc;	// 0x33042d91
- (long)duration;	// 0x33042ff5
- (BOOL)hasCoverArt;	// 0x33042e71
- (BOOL)isCompilation;	// 0x33042f01
- (BOOL)isLocal;	// 0x3304306d
// converted property getter: - (id)mediaAssets;	// 0x33042ef1
- (id)mediaType;	// 0x33043031
- (id)primaryGenre;	// 0x330430a5
- (id)title;	// 0x33042f7d
- (id)titleForSorting;	// 0x33042fb9
@end

