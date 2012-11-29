/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPStoreOfferMediaItemCollection, NSArray, MPMediaQuery;

@interface MPStoreCollectionCompletionOffering : NSObject {
	MPMediaQuery *_localItemsQuery;	// 4 = 0x4
	MPStoreOfferMediaItemCollection *_mergedCollection;	// 8 = 0x8
	MPStoreOfferMediaItemCollection *_offeredCollection;	// 12 = 0xc
	int _preferredStoreOfferVariant;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;	// G=0x36f83161; 
@property(readonly, assign, nonatomic) NSArray *localItems;	// G=0x36f83171; 
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *mergedCollection;	// G=0x36f83209; @synthesize=_mergedCollection
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *offeredCollection;	// G=0x36f83219; @synthesize=_offeredCollection
@property(readonly, assign, nonatomic) int preferredStoreOfferVariant;	// G=0x36f83229; @synthesize=_preferredStoreOfferVariant
- (id)initWithOfferedCollection:(id)offeredCollection localItemsQuery:(id)query preferredStoreOfferVariant:(int)variant;	// 0x36f8309d
- (void)dealloc;	// 0x36f83191
// declared property getter: - (id)itemsWithCompletionsCollection;	// 0x36f83161
// declared property getter: - (id)localItems;	// 0x36f83171
// declared property getter: - (id)mergedCollection;	// 0x36f83209
// declared property getter: - (id)offeredCollection;	// 0x36f83219
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x36f83229
@end
