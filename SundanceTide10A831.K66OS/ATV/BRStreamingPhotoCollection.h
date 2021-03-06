/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSArray, ATVDataClient, BRImageManager, ATVDataCollection, BRMediaCollectionType;

__attribute__((visibility("hidden")))
@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
	ATVDataCollection *_collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClient *_dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, retain) ATVDataClient *dataClient;	// G=0x2a7959; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x2a7989; 
@property(assign) BOOL useForScreenSaver;	// G=0x2a7979; S=0x2a7969; converted property
+ (id)collectionWithATVMediaCollection:(id)atvmediaCollection;	// 0x2a6e2d
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x2a6e69
- (id)initWithATVItems:(id)atvitems dataClient:(id)client;	// 0x2a6f5d
- (id)initWithATVMediaCollection:(id)atvmediaCollection;	// 0x2a6ed1
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(id)client;	// 0x2a6fcd
- (id)atvCollection;	// 0x2a747d
- (id)collectionID;	// 0x2a7345
- (id)collectionName;	// 0x2a7725
- (id)collectionType;	// 0x2a7735
- (int)count;	// 0x2a7411
// converted property getter: - (id)dataClient;	// 0x2a7959
- (void)dealloc;	// 0x2a703d
- (id)description;	// 0x2a70cd
- (id)imageProxy;	// 0x2a72e9
- (BOOL)isLibrary;	// 0x2a78b5
- (BOOL)isLocal;	// 0x2a7875
- (id)keyAssetID;	// 0x2a7879
- (id)mediaAssets;	// 0x2a748d
- (id)mediaTypes;	// 0x2a7915
- (id)photoAssets;	// 0x2a7675
// declared property getter: - (id)preferredImageManager;	// 0x2a7989
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x2a7969
- (id)title;	// 0x2a76e9
// converted property getter: - (BOOL)useForScreenSaver;	// 0x2a7979
@end

