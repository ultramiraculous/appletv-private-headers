/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library

@class BRMediaType;

@interface BRMediaPreviewControlFactory : NSObject <BRControlFactory> {
@private
	BRMediaType *_missingType;	// 4 = 0x4
	BOOL _deletterboxArtwork;	// 8 = 0x8
	BOOL _shouldShowMetadata;	// 9 = 0x9
	BOOL _showMetadataImmediately;	// 10 = 0xa
}
@property(retain) BRMediaType *missingType;	// G=0x33053be5; S=0x33053ba1; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x33053c05; S=0x33053bf5; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x33053c25; S=0x33053c15; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x33053c45; S=0x33053c35; converted property
+ (id)factory;	// 0x33053331
+ (id)filterProxies:(id)proxies;	// 0x33053379
- (id)init;	// 0x330535b1
- (id)_coverArtControllerForAssets:(id)assets;	// 0x33053d59
- (id)_metadataControllerForAsset:(id)asset;	// 0x33053e81
- (id)_paradeControllerForAssets:(id)assets;	// 0x33053f21
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33053c55
- (void)dealloc;	// 0x33053625
// converted property getter: - (id)missingType;	// 0x33053be5
- (id)previewControlForAsset:(id)asset;	// 0x33053671
- (id)previewControlForAssets:(id)assets;	// 0x33053751
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x33053a1d
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x330536b1
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x33053c05
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x33053c25
// converted property setter: - (void)setMissingType:(id)type;	// 0x33053ba1
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x33053bf5
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x33053c15
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x33053c35
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x33053c45
@end
