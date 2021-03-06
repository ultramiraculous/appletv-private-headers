/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class ATVFullScreenPhotoBrowserController, NSDictionary, ATVDataClient, ATVDataQuery, ATVDataCollection, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBrowserTemplate : BRViewController {
	ATVFullScreenPhotoBrowserController *_fullScreenController;	// 104 = 0x68
	NSDictionary *_likeTextAttributes;	// 108 = 0x6c
	NSArray *_resultData;	// 112 = 0x70
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 116 = 0x74
	BOOL _dataRequiresUpdate;	// 120 = 0x78
	NSTimer *_spinnerTimer;	// 124 = 0x7c
	BOOL _viewReloadPending;	// 128 = 0x80
	ATVDataCollection *_collection;	// 132 = 0x84
	ATVDataClient *_dataClient;	// 136 = 0x88
}
@property(retain, nonatomic) ATVDataCollection *collection;	// G=0x3bd34d; S=0x3bd35d; @synthesize=_collection
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x3bd385; S=0x3bd395; @synthesize=_dataClient
@property(assign, nonatomic) BOOL dataRequiresUpdate;	// G=0x3bd2ed; S=0x3bd2fd; @synthesize=_dataRequiresUpdate
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *fullScreenController;	// G=0x3bd20d; S=0x3bd21d; @synthesize=_fullScreenController
@property(retain, nonatomic) NSDictionary *likeTextAttributes;	// G=0x3bd245; S=0x3bd255; @synthesize=_likeTextAttributes
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x3bd2b5; S=0x3bd2c5; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) NSArray *resultData;	// G=0x3bd27d; S=0x3bd28d; @synthesize=_resultData
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x3bd30d; S=0x3ba485; @synthesize=_spinnerTimer
@property(assign, nonatomic) BOOL viewReloadPending;	// G=0x3bd32d; S=0x3bd33d; @synthesize=_viewReloadPending
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x3ba23d
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0x3ba2ad
- (void).cxx_destruct;	// 0x3bd3bd
- (void)_dataClientDataUpdated:(id)updated;	// 0x3bd06d
- (void)_dataClientStatusChanged:(id)changed;	// 0x3bd175
- (void)_dataQueryComplete;	// 0x3bc5c5
- (void)_executeDataQuery;	// 0x3bc1bd
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0x3bcdf5
- (void)_handleSlideshowSelection:(id)selection;	// 0x3bcad1
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x3bbd0d
- (void)_playerLastPlayedAsset:(id)asset;	// 0x3bcfa9
- (void)_playerStateChanged:(id)changed;	// 0x3bcebd
- (void)_pushFullScreenControllerWithType:(int)type resultSubset:(id)subset initialIndex:(unsigned)index;	// 0x3ba92d
- (void)_showSpinner:(id)spinner;	// 0x3bc99d
- (id)_standardProvidersForPhotoContextMenuPhotoAtIndex:(int)index;	// 0x3bbf31
- (void)_updateFullScreenPhotoMetadataWithProperties:(id)properties;	// 0x3bbb79
// declared property getter: - (id)collection;	// 0x3bd34d
// declared property getter: - (id)dataClient;	// 0x3bd385
// declared property getter: - (BOOL)dataRequiresUpdate;	// 0x3bd2ed
- (void)dealloc;	// 0x3ba419
// declared property getter: - (id)fullScreenController;	// 0x3bd20d
// declared property getter: - (id)likeTextAttributes;	// 0x3bd245
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x3bd2b5
// declared property getter: - (id)resultData;	// 0x3bd27d
// declared property setter: - (void)setCollection:(id)collection;	// 0x3bd35d
// declared property setter: - (void)setDataClient:(id)client;	// 0x3bd395
// declared property setter: - (void)setDataRequiresUpdate:(BOOL)update;	// 0x3bd2fd
// declared property setter: - (void)setFullScreenController:(id)controller;	// 0x3bd21d
// declared property setter: - (void)setLikeTextAttributes:(id)attributes;	// 0x3bd255
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x3bd2c5
// declared property setter: - (void)setResultData:(id)data;	// 0x3bd28d
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x3ba485
// declared property setter: - (void)setViewReloadPending:(BOOL)pending;	// 0x3bd33d
// declared property getter: - (id)spinnerTimer;	// 0x3bd30d
// declared property getter: - (BOOL)viewReloadPending;	// 0x3bd32d
- (void)wasExhumed;	// 0x3ba7c1
- (void)wasPopped;	// 0x3ba589
- (void)wasPushed;	// 0x3ba4e9
@end

