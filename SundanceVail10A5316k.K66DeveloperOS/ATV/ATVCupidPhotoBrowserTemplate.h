/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSTimer, NSArray, ATVFullScreenPhotoBrowserController, ATVDataClient, ATVDataQuery, ATVDataCollection, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBrowserTemplate : BRViewController {
	BOOL _viewReloadPending;	// 100 = 0x64
	NSTimer *_spinnerTimer;	// 104 = 0x68
	BOOL _dataRequiresUpdate;	// 108 = 0x6c
	ATVDataCollection *_collection;	// 112 = 0x70
	ATVDataClient *_dataClient;	// 116 = 0x74
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 120 = 0x78
	NSArray *_resultData;	// 124 = 0x7c
	NSDictionary *_likeTextAttributes;	// 128 = 0x80
	ATVFullScreenPhotoBrowserController *_fullScreenController;	// 132 = 0x84
}
@property(retain, nonatomic) ATVDataCollection *collection;	// G=0x38ed65; S=0x38ed75; @synthesize=_collection
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x38ed9d; S=0x38edad; @synthesize=_dataClient
@property(assign, nonatomic) BOOL dataRequiresUpdate;	// G=0x38ed45; S=0x38ed55; @synthesize=_dataRequiresUpdate
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *fullScreenController;	// G=0x38ee7d; S=0x38ee8d; @synthesize=_fullScreenController
@property(retain, nonatomic) NSDictionary *likeTextAttributes;	// G=0x38ee45; S=0x38ee55; @synthesize=_likeTextAttributes
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x38edd5; S=0x38ede5; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) NSArray *resultData;	// G=0x38ee0d; S=0x38ee1d; @synthesize=_resultData
@property(assign, nonatomic) NSTimer *spinnerTimer;	// G=0x38ed35; S=0x38a9dd; @synthesize=_spinnerTimer
@property(assign, nonatomic) BOOL viewReloadPending;	// G=0x38ed15; S=0x38ed25; @synthesize=_viewReloadPending
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x38a795
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0x38a805
- (void).cxx_destruct;	// 0x38eeb5
- (void)_dataClientDataUpdated:(id)updated;	// 0x38eb75
- (void)_dataClientStatusChanged:(id)changed;	// 0x38ec7d
- (void)_dataQueryComplete;	// 0x38e0f9
- (void)_executeDataQuery;	// 0x38dd39
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0x38e949
- (void)_handleSettingsSelection:(id)selection;	// 0x38e759
- (void)_handleSlideshowSelection:(id)selection;	// 0x38e6a5
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x38d889
- (id)_makeFullScreenControllerForNewComments:(BOOL)newComments;	// 0x38ae81
- (void)_playerLastPlayedAsset:(id)asset;	// 0x38eab1
- (void)_playerStateChanged:(id)changed;	// 0x38e9c5
- (void)_showSpinner;	// 0x38e585
- (id)_standardProvidersForPhotoContextMenuPhotoAtIndex:(int)index;	// 0x38daad
- (void)_updateFullScreenPhotoMetadataWithItem:(id)item;	// 0x38cab1
// declared property getter: - (id)collection;	// 0x38ed65
// declared property getter: - (id)dataClient;	// 0x38ed9d
// declared property getter: - (BOOL)dataRequiresUpdate;	// 0x38ed45
- (void)dealloc;	// 0x38a971
// declared property getter: - (id)fullScreenController;	// 0x38ee7d
// declared property getter: - (id)likeTextAttributes;	// 0x38ee45
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x38edd5
// declared property getter: - (id)resultData;	// 0x38ee0d
// declared property setter: - (void)setCollection:(id)collection;	// 0x38ed75
// declared property setter: - (void)setDataClient:(id)client;	// 0x38edad
// declared property setter: - (void)setDataRequiresUpdate:(BOOL)update;	// 0x38ed55
// declared property setter: - (void)setFullScreenController:(id)controller;	// 0x38ee8d
// declared property setter: - (void)setLikeTextAttributes:(id)attributes;	// 0x38ee55
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x38ede5
// declared property setter: - (void)setResultData:(id)data;	// 0x38ee1d
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x38a9dd
// declared property setter: - (void)setViewReloadPending:(BOOL)pending;	// 0x38ed25
// declared property getter: - (id)spinnerTimer;	// 0x38ed35
// declared property getter: - (BOOL)viewReloadPending;	// 0x38ed15
- (void)wasExhumed;	// 0x38ad15
- (void)wasPopped;	// 0x38aadd
- (void)wasPushed;	// 0x38aa3d
@end

