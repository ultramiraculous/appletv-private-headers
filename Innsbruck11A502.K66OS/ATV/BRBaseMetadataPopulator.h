/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMetadataPopulator.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : XXUnknownSuperclass <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3ecfd5
- (id)axMetadataFromAsset:(id)asset;	// 0x3ec9e5
- (id)copyrightForAsset:(id)asset;	// 0x3ecd0d
- (void)likesRatingForAsset:(id)asset numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x3ecba9
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x3ecd61
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x3eceb5
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3ecd11
- (id)ratingForAsset:(id)asset;	// 0x3ecb61
- (id)summaryForAsset:(id)asset;	// 0x3ecc75
- (id)titleForAsset:(id)asset;	// 0x3ecb19
@end
