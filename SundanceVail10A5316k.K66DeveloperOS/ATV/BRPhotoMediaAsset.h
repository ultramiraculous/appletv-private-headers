/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRBaseMediaAsset.h"

@class NSString, BRImageManager;

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
@property(retain) NSString *artID;	// G=0x2757fd; S=0x275715; converted property
@property(retain) NSString *coverArtURL;	// G=0x275319; S=0x2753f5; converted property
@property(retain) id dateTaken;	// G=0x2754dd; S=0x275525; converted property
@property(retain) NSString *fullURL;	// G=0x274f91; S=0x27506d; converted property
@property(assign) BOOL isLocal;	// G=0x274aa9; S=0x274a99; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x275911; 
@property(retain) NSString *thumbURL;	// G=0x275155; S=0x275231; converted property
@property(retain) NSString *title;	// G=0x275551; S=0x27562d; converted property
- (id)init;	// 0x274909
// converted property getter: - (id)artID;	// 0x2757fd
- (id)assetID;	// 0x274ad9
- (id)coverArt;	// 0x274e39
- (id)coverArtID;	// 0x274bdd
// converted property getter: - (id)coverArtURL;	// 0x275319
// converted property getter: - (id)dateTaken;	// 0x2754dd
- (void)dealloc;	// 0x27494d
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x2758d9
- (id)faces;	// 0x2758fd
- (id)fullSizeArt;	// 0x274ed5
- (id)fullSizeArtID;	// 0x274cad
// converted property getter: - (id)fullURL;	// 0x274f91
- (unsigned)hash;	// 0x2749ed
- (id)imageProxy;	// 0x274ab9
- (BOOL)isEqual:(id)equal;	// 0x274a15
// converted property getter: - (BOOL)isLocal;	// 0x274aa9
- (id)mediaType;	// 0x274f71
// declared property getter: - (id)preferredImageManager;	// 0x275911
- (id)primaryCollection;	// 0x274f8d
// converted property setter: - (void)setArtID:(id)anId;	// 0x275715
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x2753f5
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x275525
// converted property setter: - (void)setFullURL:(id)url;	// 0x27506d
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x274a99
// converted property setter: - (void)setThumbURL:(id)url;	// 0x275231
// converted property setter: - (void)setTitle:(id)title;	// 0x27562d
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x275901
// converted property getter: - (id)thumbURL;	// 0x275155
- (id)thumbnailArt;	// 0x274d9d
- (id)thumbnailArtID;	// 0x274b0d
// converted property getter: - (id)title;	// 0x275551
@end

