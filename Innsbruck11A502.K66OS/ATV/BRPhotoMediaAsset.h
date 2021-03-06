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
@property(retain) NSString *artID;	// G=0x32e3e1; S=0x32e2fd; converted property
@property(retain) NSString *coverArtURL;	// G=0x32df09; S=0x32dfe5; converted property
@property(retain) id dateTaken;	// G=0x32e0c9; S=0x32e111; converted property
@property(retain) NSString *fullURL;	// G=0x32db89; S=0x32dc65; converted property
@property(assign) BOOL isLocal;	// G=0x32d6b5; S=0x32d6a5; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x32e4e9; 
@property(retain) NSString *thumbURL;	// G=0x32dd49; S=0x32de25; converted property
@property(retain) NSString *title;	// G=0x32e13d; S=0x32e219; converted property
- (id)init;	// 0x32d515
// converted property getter: - (id)artID;	// 0x32e3e1
- (id)assetID;	// 0x32d6e5
- (id)coverArt;	// 0x32da41
- (id)coverArtID;	// 0x32d7e9
// converted property getter: - (id)coverArtURL;	// 0x32df09
// converted property getter: - (id)dateTaken;	// 0x32e0c9
- (void)dealloc;	// 0x32d559
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x32e4bd
- (id)faces;	// 0x32e4d5
- (id)fullSizeArt;	// 0x32dad5
- (id)fullSizeArtID;	// 0x32d8b9
// converted property getter: - (id)fullURL;	// 0x32db89
- (unsigned)hash;	// 0x32d5f9
- (id)imageProxy;	// 0x32d6c5
- (BOOL)isEqual:(id)equal;	// 0x32d621
// converted property getter: - (BOOL)isLocal;	// 0x32d6b5
- (id)mediaType;	// 0x32db69
// declared property getter: - (id)preferredImageManager;	// 0x32e4e9
- (id)primaryCollection;	// 0x32db85
// converted property setter: - (void)setArtID:(id)anId;	// 0x32e2fd
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x32dfe5
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x32e111
// converted property setter: - (void)setFullURL:(id)url;	// 0x32dc65
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x32d6a5
// converted property setter: - (void)setThumbURL:(id)url;	// 0x32de25
// converted property setter: - (void)setTitle:(id)title;	// 0x32e219
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x32e4d9
// converted property getter: - (id)thumbURL;	// 0x32dd49
- (id)thumbnailArt;	// 0x32d9ad
- (id)thumbnailArtID;	// 0x32d719
// converted property getter: - (id)title;	// 0x32e13d
@end

