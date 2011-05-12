/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRMediaCollection.h"

@protocol BRMediaProvider;

@interface BRBaseMediaCollection : NSObject <BRMediaCollection> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x328a1a95
- (id)artist;	// 0x328dd9b1
- (id)artistForSorting;	// 0x328dd9b5
- (id)assetEnumerator;	// 0x328ddb29
- (id)childCollections;	// 0x328dd995
- (id)collectionID;	// 0x328dd999
- (id)collectionType;	// 0x328ddb61
- (int)count;	// 0x328dd9dd
- (id)date;	// 0x328dd9d9
- (void)dealloc;	// 0x328b7541
- (long)duration;	// 0x328dd9c9
- (unsigned)hash;	// 0x328ddb81
- (id)imageProxy;	// 0x328dd9a1
- (BOOL)isAvailable;	// 0x328c8119
- (BOOL)isCompilation;	// 0x328dd9a9
- (BOOL)isHidden;	// 0x328dd9d1
- (BOOL)isLocal;	// 0x328dd9cd
- (BOOL)isSingleArtistCompilation;	// 0x328dd9ad
- (BOOL)isValid;	// 0x328dd99d
- (id)mediaAssets;	// 0x328dd9a5
- (id)mediaObjectID;	// 0x328ddb4d
- (id)mediaType;	// 0x328dda31
- (id)mediaTypes;	// 0x328dda51
- (id)parentCollection;	// 0x328cca0d
- (void)performSelector:(SEL)selector target:(id)target;	// 0x328dda19
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x328dda01
- (id)provider;	// 0x328dd985
- (id)title;	// 0x328dd9b9
- (id)titleForSorting;	// 0x328dd9bd
- (id)titleForSortingNoDefault;	// 0x328dd9c5
- (id)titleNoDefault;	// 0x328dd9c1
- (void)willBeDeleted;	// 0x328dd9d5
@end
