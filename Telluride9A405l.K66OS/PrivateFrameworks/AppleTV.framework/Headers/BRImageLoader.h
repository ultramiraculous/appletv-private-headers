/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRInvalidatable.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, BRAsyncTaskContext;
@protocol BRProvider;

@interface BRImageLoader : NSObject <BRInvalidatable> {
@private
	long _queueSize;	// 4 = 0x4
	NSMutableArray *_imageQueue;	// 8 = 0x8
	NSMutableArray *_candidateImages;	// 12 = 0xc
	NSMutableArray *_pendingImages;	// 16 = 0x10
	id<BRProvider> _provider;	// 20 = 0x14
	BOOL _randomize;	// 24 = 0x18
	long _serialIndex;	// 28 = 0x1c
	long _imageArrayIndex;	// 32 = 0x20
	long _segmentCount;	// 36 = 0x24
	int _fillStrategy;	// 40 = 0x28
	long _failedLoadCount;	// 44 = 0x2c
	BRAsyncTaskContext *_taskContext;	// 48 = 0x30
	BOOL _saveQueueOnFlush;	// 52 = 0x34
	NSMutableArray *_savedImageProxyQueue;	// 56 = 0x38
	NSMutableArray *_activeImageProxyQueue;	// 60 = 0x3c
	BOOL _hasBeenInvalidated;	// 64 = 0x40
}
@property(assign) int fillStrategy;	// G=0x35ec14c9; S=0x35ec134d; converted property
@property(assign) long queueSize;	// G=0x35ec15f9; S=0x35ec14d9; converted property
@property(assign) BOOL randomize;	// G=0x35ec18bd; S=0x35ec18ad; converted property
@property(assign) long segmentCount;	// G=0x35ec1141; S=0x35ec10f1; converted property
- (id)init;	// 0x35ec0e95
- (void)_abandonArtwork:(id)artwork;	// 0x35ec2c09
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x35ec26d9
- (void)_enqueueImage:(id)image;	// 0x35ec1cf9
- (BOOL)_isQueuePrimed;	// 0x35ec1fcd
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x35ec2929
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x35ec1b01
- (void)_primeQueue;	// 0x35ec20e9
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x35ec2525
- (void)_providerUpdated:(id)updated;	// 0x35ec2cf9
- (id)_pullNextImageProxy;	// 0x35ec2275
- (id)_pullNextImageProxyRandomly;	// 0x35ec23c9
- (void)_setupForNewProvider;	// 0x35ec2d4d
- (void)_updateArtwork:(id)artwork;	// 0x35ec2a61
- (void)dealloc;	// 0x35ec102d
// converted property getter: - (int)fillStrategy;	// 0x35ec14c9
- (id)finalFormForImage:(id)image;	// 0x35ec18ed
- (void)flushQueue;	// 0x35ec163d
- (long)imageCount;	// 0x35ec18cd
- (void)invalidate;	// 0x35ec1ab9
- (BOOL)isImageFinalForm:(id)form;	// 0x35ec18f1
- (id)nextImage;	// 0x35ec18f5
- (BOOL)queueReady;	// 0x35ec17cd
// converted property getter: - (long)queueSize;	// 0x35ec15f9
// converted property getter: - (BOOL)randomize;	// 0x35ec18bd
// converted property getter: - (long)segmentCount;	// 0x35ec1141
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x35ec134d
- (void)setImageProxies:(id)proxies;	// 0x35ec1151
- (void)setProvider:(id)provider;	// 0x35ec118d
// converted property setter: - (void)setQueueSize:(long)size;	// 0x35ec14d9
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x35ec18ad
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x35ec1609
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x35ec10f1
@end

