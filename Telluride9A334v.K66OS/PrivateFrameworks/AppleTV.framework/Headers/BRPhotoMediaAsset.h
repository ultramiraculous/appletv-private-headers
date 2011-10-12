/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"

@class BRImageManager, NSString;

@interface BRPhotoMediaAsset : BRBaseMediaAsset {
@private
	NSString *_thumbURL;	// 8 = 0x8
	NSString *_coverArtURL;	// 12 = 0xc
	NSString *_fullURL;	// 16 = 0x10
	NSString *_artID;	// 20 = 0x14
	double _dateTakenTimerInterval;	// 24 = 0x18
	BOOL _isLocal;	// 32 = 0x20
	NSString *_title;	// 36 = 0x24
}
@property(retain) NSString *artID;	// G=0x331d94ad; S=0x331d93dd; converted property
@property(retain) NSString *coverArtURL;	// G=0x331d9031; S=0x331d90fd; converted property
@property(retain) id dateTaken;	// G=0x331d91cd; S=0x331d9215; converted property
@property(retain) NSString *fullURL;	// G=0x331d8cf9; S=0x331d8dc5; converted property
@property(assign) BOOL isLocal;	// G=0x331d87f5; S=0x331d87e5; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x331d95b1; 
@property(retain) NSString *thumbURL;	// G=0x331d8e95; S=0x331d8f61; converted property
@property(retain) NSString *title;	// G=0x331d9241; S=0x331d930d; converted property
- (id)init;	// 0x331d865d
// converted property getter: - (id)artID;	// 0x331d94ad
- (id)assetID;	// 0x331d8825
- (id)coverArt;	// 0x331d8bb9
- (id)coverArtID;	// 0x331d8949
// converted property getter: - (id)coverArtURL;	// 0x331d9031
// converted property getter: - (id)dateTaken;	// 0x331d91cd
- (void)dealloc;	// 0x331d86a1
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x331d9579
- (id)faces;	// 0x331d959d
- (id)fullSizeArt;	// 0x331d8c49
- (id)fullSizeArtID;	// 0x331d8a39
// converted property getter: - (id)fullURL;	// 0x331d8cf9
- (unsigned)hash;	// 0x331d873d
- (id)imageProxy;	// 0x331d8805
- (BOOL)isEqual:(id)equal;	// 0x331d8765
// converted property getter: - (BOOL)isLocal;	// 0x331d87f5
- (id)mediaType;	// 0x331d8cd9
// declared property getter: - (id)preferredImageManager;	// 0x331d95b1
- (id)primaryCollection;	// 0x331d8cf5
// converted property setter: - (void)setArtID:(id)anId;	// 0x331d93dd
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x331d90fd
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x331d9215
// converted property setter: - (void)setFullURL:(id)url;	// 0x331d8dc5
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x331d87e5
// converted property setter: - (void)setThumbURL:(id)url;	// 0x331d8f61
// converted property setter: - (void)setTitle:(id)title;	// 0x331d930d
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x331d95a1
// converted property getter: - (id)thumbURL;	// 0x331d8e95
- (id)thumbnailArt;	// 0x331d8b29
- (id)thumbnailArtID;	// 0x331d8859
// converted property getter: - (id)title;	// 0x331d9241
@end

