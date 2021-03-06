/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"
#import "AppleTV-Structs.h"

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
@property(retain) NSString *artID;	// G=0x2f921d; S=0x2f9139; converted property
@property(retain) NSString *coverArtURL;	// G=0x2f8d45; S=0x2f8e21; converted property
@property(retain) id dateTaken;	// G=0x2f8f05; S=0x2f8f4d; converted property
@property(retain) NSString *fullURL;	// G=0x2f89c5; S=0x2f8aa1; converted property
@property(assign) BOOL isLocal;	// G=0x2f84f1; S=0x2f84e1; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x2f9325; 
@property(retain) NSString *thumbURL;	// G=0x2f8b85; S=0x2f8c61; converted property
@property(retain) NSString *title;	// G=0x2f8f79; S=0x2f9055; converted property
- (id)init;	// 0x2f8351
// converted property getter: - (id)artID;	// 0x2f921d
- (id)assetID;	// 0x2f8521
- (id)coverArt;	// 0x2f887d
- (id)coverArtID;	// 0x2f8625
// converted property getter: - (id)coverArtURL;	// 0x2f8d45
// converted property getter: - (id)dateTaken;	// 0x2f8f05
- (void)dealloc;	// 0x2f8395
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x2f92f9
- (id)faces;	// 0x2f9311
- (id)fullSizeArt;	// 0x2f8911
- (id)fullSizeArtID;	// 0x2f86f5
// converted property getter: - (id)fullURL;	// 0x2f89c5
- (unsigned)hash;	// 0x2f8435
- (id)imageProxy;	// 0x2f8501
- (BOOL)isEqual:(id)equal;	// 0x2f845d
// converted property getter: - (BOOL)isLocal;	// 0x2f84f1
- (id)mediaType;	// 0x2f89a5
// declared property getter: - (id)preferredImageManager;	// 0x2f9325
- (id)primaryCollection;	// 0x2f89c1
// converted property setter: - (void)setArtID:(id)anId;	// 0x2f9139
// converted property setter: - (void)setCoverArtURL:(id)url;	// 0x2f8e21
// converted property setter: - (void)setDateTaken:(id)taken;	// 0x2f8f4d
// converted property setter: - (void)setFullURL:(id)url;	// 0x2f8aa1
// converted property setter: - (void)setIsLocal:(BOOL)local;	// 0x2f84e1
// converted property setter: - (void)setThumbURL:(id)url;	// 0x2f8c61
// converted property setter: - (void)setTitle:(id)title;	// 0x2f9055
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x2f9315
// converted property getter: - (id)thumbURL;	// 0x2f8b85
- (id)thumbnailArt;	// 0x2f87e9
- (id)thumbnailArtID;	// 0x2f8555
// converted property getter: - (id)title;	// 0x2f8f79
@end

