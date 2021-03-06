/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPhotoMediaCollection.h"

@class NSArray, BRImageManager, BRMediaCollectionType;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClientRef _dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x3026b3f1; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x3026b421; 
@property(assign) BOOL useForScreenSaver;	// G=0x3026b411; S=0x3026b401; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x3026a8a1
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x3026a8dd
- (id)initWithATVItems:(id)atvitems dataClient:(ATVDataClientRef)client;	// 0x3026a9a5
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x3026a939
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(ATVDataClientRef)client;	// 0x3026aa15
- (ATVMediaCollectionRef)atvCollection;	// 0x3026aee9
- (id)collectionID;	// 0x3026ada9
- (id)collectionName;	// 0x3026b189
- (id)collectionType;	// 0x3026b199
- (int)count;	// 0x3026ae69
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x3026b3f1
- (void)dealloc;	// 0x3026aa89
- (id)description;	// 0x3026ab15
- (id)imageProxy;	// 0x3026ad4d
- (BOOL)isLibrary;	// 0x3026b341
- (BOOL)isLocal;	// 0x3026b2f9
- (id)keyAssetID;	// 0x3026b2fd
- (id)mediaAssets;	// 0x3026aef9
- (id)mediaTypes;	// 0x3026b3ad
- (id)photoAssets;	// 0x3026b0d1
// declared property getter: - (id)preferredImageManager;	// 0x3026b421
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x3026b401
- (id)title;	// 0x3026b145
// converted property getter: - (BOOL)useForScreenSaver;	// 0x3026b411
@end

