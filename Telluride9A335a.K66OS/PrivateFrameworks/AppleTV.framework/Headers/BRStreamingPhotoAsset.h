/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPhotoMediaAsset.h"
#import "BRATVMediaItem.h"

@class BRImageManager;

@interface BRStreamingPhotoAsset : BRPhotoMediaAsset <BRATVMediaItem> {
@private
	ATVMediaItemRef _mediaItem;	// 40 = 0x28
	ATVDataClientRef _dataClient;	// 44 = 0x2c
	BRImageManager *_preferredImageManager;	// 48 = 0x30
	BOOL _useForScreenSaver;	// 52 = 0x34
}
@property(readonly, retain) BRImageManager *preferredImageManager;	// G=0x341bd6d9; converted property
@property(assign) BOOL useForScreenSaver;	// G=0x341bdab1; S=0x341bdaa1; converted property
+ (id)assetWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x341bd5c9
- (id)initWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x341bd609
- (CGRect)_paddedFaceRectFromFaceRect:(CGRect)faceRect;	// 0x341bdbd1
- (id)artID;	// 0x341bd75d
- (id)dateTaken;	// 0x341bd7dd
- (void)dealloc;	// 0x341bd66d
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x341bd871
- (id)faces;	// 0x341bda09
- (BOOL)hasVideoContent;	// 0x341bdb7d
- (id)imageProxy;	// 0x341bd819
- (BOOL)isLocal;	// 0x341bd6c9
- (ATVMediaItemRef)mediaItemRef;	// 0x341bdac1
- (id)mediaType;	// 0x341bdad1
- (id)mediaURL;	// 0x341bdb29
// converted property getter: - (id)preferredImageManager;	// 0x341bd6d9
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x341bdaa1
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x341bda45
// converted property getter: - (BOOL)useForScreenSaver;	// 0x341bdab1
@end

