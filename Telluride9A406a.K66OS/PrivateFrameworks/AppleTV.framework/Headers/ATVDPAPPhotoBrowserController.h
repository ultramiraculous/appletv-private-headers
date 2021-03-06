/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"
#import "BRViewController.h"

@class NSString, ATVPhotoFullScreenView, ATVPhotoBrowserView, NSDateFormatter, BRPhotoControlFactory, NSTimer, NSArray;

@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
@private
	NSTimer *_spinnerTimer;	// 84 = 0x54
	BOOL _dataRequiresUpdate;	// 88 = 0x58
	long _collectionItemCount;	// 92 = 0x5c
	BOOL _photoBrowserViewReloadPending;	// 96 = 0x60
	id _screenSaverSetCollectionBlock;	// 100 = 0x64
	ATVPhotoBrowserView *_photoBrowserView;	// 104 = 0x68
	ATVPhotoFullScreenView *_photoFullScreenView;	// 108 = 0x6c
	BRPhotoControlFactory *_controlFactory;	// 112 = 0x70
	ATVDataClientRef _dataClient;	// 116 = 0x74
	NSString *_collectionType;	// 120 = 0x78
	ATVMediaCollectionRef _collection;	// 124 = 0x7c
	NSDateFormatter *_dateFormatter;	// 128 = 0x80
	ATVMediaQueryRef _pendingDataQuery;	// 132 = 0x84
	ATVMediaQueryRef _pendingCollectionMetaDataQuery;	// 136 = 0x88
	NSArray *_resultData;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVMediaCollectionRef _collection;	// G=0x3317141d; S=0x3317142d; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x331713e9; S=0x331713f9; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x33171381; S=0x33171391; @synthesize
@property(retain, nonatomic) ATVDataClientRef _dataClient;	// G=0x331713b5; S=0x331713c5; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x33171451; S=0x33171461; @synthesize
@property(retain, nonatomic) ATVMediaQueryRef _pendingCollectionMetaDataQuery;	// G=0x331714b9; S=0x331714c9; @synthesize
@property(retain, nonatomic) ATVMediaQueryRef _pendingDataQuery;	// G=0x33171485; S=0x33171495; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x33171319; S=0x33171329; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x3317134d; S=0x3317135d; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x331714ed; S=0x331714fd; @synthesize
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x331712e5; S=0x331712f5; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client;	// 0x33170b5d
+ (id)controllerForCollectionType:(id)collectionType dataClient:(ATVDataClientRef)client;	// 0x33170b09
- (id)initWithColletionType:(id)colletionType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client;	// 0x33170bb1
// declared property getter: - (ATVMediaCollectionRef)_collection;	// 0x3317141d
- (long)_collectionItemCount;	// 0x331723b9
// declared property getter: - (id)_collectionType;	// 0x331713e9
// declared property getter: - (id)_controlFactory;	// 0x33171381
// declared property getter: - (ATVDataClientRef)_dataClient;	// 0x331713b5
- (void)_dataClientDataUpdated:(id)updated;	// 0x33172bd9
- (void)_dataClientStatusChanged:(id)changed;	// 0x33172cdd
- (void)_dataQueryComplete;	// 0x33172801
// declared property getter: - (id)_dateFormatter;	// 0x33171451
- (void)_executeDataQuery;	// 0x3317240d
- (void)_handleSettingsSelection:(id)selection;	// 0x33171a91
- (void)_handleSlideshowSelection:(id)selection;	// 0x33171991
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x33171d4d
// declared property getter: - (ATVMediaQueryRef)_pendingCollectionMetaDataQuery;	// 0x331714b9
// declared property getter: - (ATVMediaQueryRef)_pendingDataQuery;	// 0x33171485
// declared property getter: - (id)_photoBrowserView;	// 0x33171319
// declared property getter: - (id)_photoFullScreenView;	// 0x3317134d
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x33171bb1
- (void)_playerLastPlayedAsset:(id)asset;	// 0x33171ee5
- (void)_playerStateChanged:(id)changed;	// 0x33171e35
- (void)_reload;	// 0x331716d9
// declared property getter: - (id)_resultData;	// 0x331714ed
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x3317183d
- (void)_showSpinner;	// 0x33171521
- (BOOL)_switchToPhotoBrowserView;	// 0x33171621
- (BOOL)brEventAction:(id)action;	// 0x33171281
- (void)controlWasActivated;	// 0x331710ed
- (void)controlWasDeactivated;	// 0x3317118d
- (void)dealloc;	// 0x33170ed9
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x33172399
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x33172385
- (ATVMediaItemRef)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x3317232d
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x33172165
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x33172319
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x33172179
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x331720cd
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x33172079
- (void)layoutSubcontrols;	// 0x3317121d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x33172015
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x33172365
- (long)numberOfItemsInGrid:(id)grid;	// 0x33171f59
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x331712e5
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x331712f5
// declared property setter: - (void)set_collection:(ATVMediaCollectionRef)collection;	// 0x3317142d
// declared property setter: - (void)set_collectionType:(id)type;	// 0x331713f9
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x33171391
// declared property setter: - (void)set_dataClient:(ATVDataClientRef)client;	// 0x331713c5
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x33171461
// declared property setter: - (void)set_pendingCollectionMetaDataQuery:(ATVMediaQueryRef)query;	// 0x331714c9
// declared property setter: - (void)set_pendingDataQuery:(ATVMediaQueryRef)query;	// 0x33171495
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x33171329
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x3317135d
// declared property setter: - (void)set_resultData:(id)data;	// 0x331714fd
- (void)wasPushed;	// 0x33171061
@end

