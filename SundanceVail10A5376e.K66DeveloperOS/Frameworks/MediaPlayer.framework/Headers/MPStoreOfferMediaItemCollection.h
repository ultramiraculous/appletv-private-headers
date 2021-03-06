/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemCollection.h"

@class NSArray, NSDictionary, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {
	NSDictionary *_storeLookupPropertyValues;	// 24 = 0x18
	NSArray *_unmergedStoreMediaItems;	// 28 = 0x1c
	NSArray *_localItems;	// 32 = 0x20
	BOOL _hasHiddenRestrictedContent;	// 36 = 0x24
	int _preferredStoreOfferVariant;	// 40 = 0x28
	MPStoreOfferContentRating *_collectionContentRating;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) unsigned countOfNonLocalItems;	// G=0x36d5a741; 
@property(readonly, assign, nonatomic) BOOL isCollectionOfferPresentable;	// G=0x36d5a8e1; 
@property(readonly, assign) int preferredStoreOfferVariant;	// G=0x36d5a2c5; converted property
+ (id)childItemIDsForLookupCollectionPropertyValues:(id)lookupCollectionPropertyValues;	// 0x36d5bd29
+ (id)collectionLookupKeyForMediaProperty:(id)mediaProperty;	// 0x36d5b9f1
+ (id)contentRatingForCollectionPropertyValues:(id)collectionPropertyValues;	// 0x36d5bbed
+ (id)defaultPropertyValues;	// 0x36d5a2c1
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues mediaProperty:(id)property;	// 0x36d5bb49
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)lookupCollectionPropertyValues;	// 0x36d5bc6d
+ (int)offerPassTypeForLookupCollectionPropertyValues:(id)lookupCollectionPropertyValues;	// 0x36d5bc89
- (id)initWithCoder:(id)coder;	// 0x36d59f4d
- (id)initWithLookupResponseCollectionDictionary:(id)lookupResponseCollectionDictionary preferredStoreOfferVariant:(int)variant;	// 0x36d59d59
- (id)initWithLookupResponseCollectionDictionary:(id)lookupResponseCollectionDictionary preferredStoreOfferVariant:(int)variant offerMediaItems:(id)items localItems:(id)items4;	// 0x36d59ac1
- (BOOL)_checkIsUsableOffer;	// 0x36d59815
- (BOOL)_hasRestrictedContent;	// 0x36d5a999
- (id)_lookupOfferDictionaries;	// 0x36d5ac4d
- (BOOL)_offeredItemAlreadyExists;	// 0x36d5a491
- (id)buyOfferForVariant:(int)variant;	// 0x36d5a5b5
- (id)copyByOverlayingLocalItems:(id)items preferredStoreOfferVariant:(int)variant;	// 0x36d59e2d
- (id)copyWithZone:(NSZone *)zone;	// 0x36d59ead
// declared property getter: - (unsigned)countOfNonLocalItems;	// 0x36d5a741
- (void)dealloc;	// 0x36d59da1
- (id)description;	// 0x36d5a145
- (void)encodeWithCoder:(id)coder;	// 0x36d5a07d
- (BOOL)hasDownloadableStoreOfferItemsForVariant:(int)variant;	// 0x36d5aa91
- (BOOL)hasPurchasableStoreOfferItemsForVariant:(int)variant;	// 0x36d5ab65
- (unsigned)hash;	// 0x36d5a22d
- (BOOL)isCheaperToPurchaseIndividualItems;	// 0x36d5a785
// declared property getter: - (BOOL)isCollectionOfferPresentable;	// 0x36d5a8e1
- (BOOL)isDownloadable;	// 0x36d5a265
- (BOOL)isEqual:(id)equal;	// 0x36d5a1b5
- (id)mediaLibrary;	// 0x36d5a2d5
- (unsigned long long)persistentID;	// 0x36d5a2f1
// converted property getter: - (int)preferredStoreOfferVariant;	// 0x36d5a2c5
- (id)title;	// 0x36d5a471
- (id)valueForProperty:(id)property;	// 0x36d5a349
@end

