/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"
#import "BRViewController.h"

@class NSDateFormatter, NSString, ATVPhotoBrowserView, NSTimer, ATVPhotoFullScreenView, NSArray, ATVDataClient, BRPhotoControlFactory, ATVDataQuery, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
	NSTimer *_spinnerTimer;	// 100 = 0x64
	BOOL _dataRequiresUpdate;	// 104 = 0x68
	long _collectionItemCount;	// 108 = 0x6c
	BOOL _photoBrowserViewReloadPending;	// 112 = 0x70
	id _screenSaverSetCollectionBlock;	// 116 = 0x74
	ATVPhotoBrowserView *_photoBrowserView;	// 120 = 0x78
	ATVPhotoFullScreenView *_photoFullScreenView;	// 124 = 0x7c
	BRPhotoControlFactory *_controlFactory;	// 128 = 0x80
	ATVDataClient *_dataClient;	// 132 = 0x84
	NSString *_collectionType;	// 136 = 0x88
	ATVDataCollection *_collection;	// 140 = 0x8c
	NSDateFormatter *_dateFormatter;	// 144 = 0x90
	ATVDataQuery *_pendingDataQuery;	// 148 = 0x94
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 152 = 0x98
	NSArray *_resultData;	// 156 = 0x9c
}
@property(retain, nonatomic) ATVDataCollection *_collection;	// G=0x30e6e9; S=0x30e6f9; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x30e6c9; S=0x30e6d9; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x30e689; S=0x30e699; @synthesize
@property(retain, nonatomic) ATVDataClient *_dataClient;	// G=0x30e6a9; S=0x30e6b9; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x30e709; S=0x30e719; @synthesize
@property(retain, nonatomic) ATVDataQuery *_pendingCollectionMetaDataQuery;	// G=0x30e749; S=0x30e759; @synthesize
@property(retain, nonatomic) ATVDataQuery *_pendingDataQuery;	// G=0x30e729; S=0x30e739; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x30e649; S=0x30e659; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x30e669; S=0x30e679; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x30e769; S=0x30e779; @synthesize
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x30e625; S=0x30e639; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x30de79
+ (id)controllerForCollectionType:(id)collectionType dataClient:(id)client;	// 0x30de25
- (id)initWithColletionType:(id)colletionType collection:(id)collection dataClient:(id)client;	// 0x30decd
// declared property getter: - (id)_collection;	// 0x30e6e9
- (long)_collectionItemCount;	// 0x30f619
// declared property getter: - (id)_collectionType;	// 0x30e6c9
// declared property getter: - (id)_controlFactory;	// 0x30e689
// declared property getter: - (id)_dataClient;	// 0x30e6a9
- (void)_dataClientDataUpdated:(id)updated;	// 0x30ffa5
- (void)_dataClientStatusChanged:(id)changed;	// 0x3100c5
- (void)_dataQueryComplete;	// 0x30fb95
// declared property getter: - (id)_dateFormatter;	// 0x30e709
- (void)_executeDataQuery;	// 0x30f65d
- (void)_handleSettingsSelection:(id)selection;	// 0x30ecf1
- (void)_handleSlideshowSelection:(id)selection;	// 0x30ec01
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x30efb9
// declared property getter: - (id)_pendingCollectionMetaDataQuery;	// 0x30e749
// declared property getter: - (id)_pendingDataQuery;	// 0x30e729
// declared property getter: - (id)_photoBrowserView;	// 0x30e649
// declared property getter: - (id)_photoFullScreenView;	// 0x30e669
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x30ee11
- (void)_playerLastPlayedAsset:(id)asset;	// 0x30f149
- (void)_playerStateChanged:(id)changed;	// 0x30f09d
- (void)_reload;	// 0x30e941
// declared property getter: - (id)_resultData;	// 0x30e769
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x30eaa5
- (void)_showSpinner;	// 0x30e789
- (BOOL)_switchToPhotoBrowserView;	// 0x30e889
- (BOOL)brEventAction:(id)action;	// 0x30e5c1
- (void)controlWasActivated;	// 0x30e405
- (void)controlWasDeactivated;	// 0x30e4c1
- (void)dealloc;	// 0x30e1d9
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x30f5f9
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x30f5e5
- (id)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x30f58d
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x30f3d1
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x30f579
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x30f3e5
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30f339
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x30f2e5
- (void)layoutSubcontrols;	// 0x30e561
- (long)numberOfColumnsInGrid:(id)grid;	// 0x30f281
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x30f5c5
- (long)numberOfItemsInGrid:(id)grid;	// 0x30f1c1
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x30e625
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x30e639
// declared property setter: - (void)set_collection:(id)collection;	// 0x30e6f9
// declared property setter: - (void)set_collectionType:(id)type;	// 0x30e6d9
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x30e699
// declared property setter: - (void)set_dataClient:(id)client;	// 0x30e6b9
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x30e719
// declared property setter: - (void)set_pendingCollectionMetaDataQuery:(id)query;	// 0x30e759
// declared property setter: - (void)set_pendingDataQuery:(id)query;	// 0x30e739
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x30e659
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x30e679
// declared property setter: - (void)set_resultData:(id)data;	// 0x30e779
- (void)wasPushed;	// 0x30e375
@end

