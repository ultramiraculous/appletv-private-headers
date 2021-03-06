/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"

@class BRImageManager, NSString;

__attribute__((visibility("hidden")))
@interface BRPhotoMediaAsset : BRBaseMediaAsset {
	NSString *_thumbURL;	// 8 = 0x8
	NSString *_coverArtURL;	// 12 = 0xc
	NSString *_fullURL;	// 16 = 0x10
	NSString *_artID;	// 20 = 0x14
	double _dateTakenTimerInterval;	// 24 = 0x18
	BOOL _isLocal;	// 32 = 0x20
	NSString *_title;	// 36 = 0x24
}
@property(retain) NSString *artID;	// G=0x30ad5d; S=0x30ac79; converted property
@property(retain) NSString *coverArtURL;	// G=0x30a885; S=0x30a961; converted property
@property(retain) id dateTaken;	// G=0x30aa45; S=0x30aa8d; converted property
@property(retain) NSString *fullURL;	// G=0x30a505; S=0x30a5e1; converted property
@property(assign) BOOL isLocal;	// G=0x30a031; S=0x30a021; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x30ae65; 
@property(retain) NSString *thumbURL;	// G=0x30a6c5; S=0x30a7a1; converted property
@property(retain) NSString *title;	// G=0x30aab9; S=0x30ab95; converted property
- (id)init;	// 0x309e91
// converted property getter: - (id)artID;	// 0x30ad5d
- (id)assetID;	// 0x30a061
- (id)coverArt;	// 0x30a3bd
- (id)coverArtID;	// 0x30a165
// converted property getter: - (id)coverArtURL;	// 0x30a885
// converted property getter: - (id)dateTaken;	// 0x30aa45
- (void)dealloc;	// 0x309ed5
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x30ae39
- (id)faces;	// 0x30ae51
- (id)fullSizeArt;	// 0x30a451
- (id)fullSizeArtID;	// 0x30a235
// converted property getter: - (id)fullURL;	// 0x30a505
- (unsigned)hash;	// 0x309f75
- (id)imageProxy;	// 0x30a041
- (BOOL)isEqual:(id)equal;	// 0x309f9d
// converted property getter: - (BOOL)isLocal;	// 0x30a031
- (id)mediaType;	// 0x30a4e5
// declared property getter: - (id)preferredImageManager;	// 0x30ae65
- (id)primaryCollection;	// 0x30a501
// converted property setter: - (void)setArtID:(id)anId;	// 0x30ac79
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x30a961
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x30aa8d
// converted property setter: - (void)setFullURL:(id)url;	// 0x30a5e1
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x30a021
// converted property setter: - (void)setThumbURL:(id)url;	// 0x30a7a1
// converted property setter: - (void)setTitle:(id)title;	// 0x30ab95
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x30ae55
// converted property getter: - (id)thumbURL;	// 0x30a6c5
- (id)thumbnailArt;	// 0x30a329
- (id)thumbnailArtID;	// 0x30a095
// converted property getter: - (id)title;	// 0x30aab9
@end

