/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreItemDetailController.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAssetController : ATVMusicStoreItemDetailController {
	id<BRMediaAsset> _asset;	// 136 = 0x88
}
- (id)initWithAsset:(id)asset;	// 0x1e5335
- (id)_actionProviders;	// 0x1e58f5
- (BOOL)_assetIsExpired:(id)expired;	// 0x1e5a69
- (void)_assetPlayable:(id)playable;	// 0x1e5a25
- (void)_setCopyrightText;	// 0x1e57bd
- (void)_setImageProxy;	// 0x1e58a5
- (void)_setMetadataControl;	// 0x1e5999
- (void)_setupDetailedControl;	// 0x1e5745
- (id)_storeID;	// 0x1e580d
- (id)asset;	// 0x1e5685
- (void)controlWasActivated;	// 0x1e556d
- (void)dealloc;	// 0x1e5609
- (void)fetchRelatedContent;	// 0x1e5695
@end

