/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVRadioStationsChangeObserver.h"
#import "BRViewController.h"

@class ATVImage, BRMediaMenuView, ATVRadioStationsDataSource, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRadioEditViewController : BRViewController <ATVRadioStationsChangeObserver> {
	BOOL _lastExplicitContentSetting;	// 104 = 0x68
	ATVRadioStationsDataSource *_dataSource;	// 108 = 0x6c
	NSTimer *_spinnerTimer;	// 112 = 0x70
	BRMediaMenuView *_mediaMenuView;	// 116 = 0x74
	ATVImage *_trashCanImage;	// 120 = 0x78
	ATVImage *_menuDefaultImage;	// 124 = 0x7c
	NSTimer *_explicitSettingChangedTimer;	// 128 = 0x80
}
@property(retain, nonatomic) ATVRadioStationsDataSource *dataSource;	// G=0x2338f9; S=0x233909; @synthesize=_dataSource
@property(assign, nonatomic) __weak NSTimer *explicitSettingChangedTimer;	// G=0x233a0d; S=0x233a2d; @synthesize=_explicitSettingChangedTimer
@property(assign, nonatomic) BOOL lastExplicitContentSetting;	// G=0x233a41; S=0x233a51; @synthesize=_lastExplicitContentSetting
@property(retain, nonatomic) BRMediaMenuView *mediaMenuView;	// G=0x233965; S=0x233975; @synthesize=_mediaMenuView
@property(retain, nonatomic) ATVImage *menuDefaultImage;	// G=0x2339d5; S=0x2339e5; @synthesize=_menuDefaultImage
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x233931; S=0x233951; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVImage *trashCanImage;	// G=0x23399d; S=0x2339ad; @synthesize=_trashCanImage
- (id)init;	// 0x2316d9
- (void).cxx_destruct;	// 0x233a61
- (void)_explicitSettingChanged:(id)changed;	// 0x232afd
- (void)_explicitSettingChangedTimerFired:(id)fired;	// 0x2337d9
- (id)_indexPathForStationWithIdentifier:(id)identifier;	// 0x232031
- (id)_menuItemForStation:(id)station;	// 0x2322f1
- (unsigned)_numberOfStations;	// 0x231f79
- (void)_showSpinner;	// 0x231e15
- (id)_stationForRowAtIndexPath:(id)indexPath;	// 0x231fb5
- (id)_stations;	// 0x231f31
- (id)_stringValueForCurrentExplicitnessOption;	// 0x23258d
- (id)_titleForSectionAtIndex:(unsigned)index;	// 0x2322cd
- (void)_toggleExplicitContentAllowed;	// 0x232605
- (void)_updateExplicitSetting;	// 0x233809
- (void)_updatePreviewForItemAtIndexPath:(id)indexPath;	// 0x232785
- (void)controlWasActivated;	// 0x231c05
- (void)controlWasDeactivated;	// 0x231d8d
// declared property getter: - (id)dataSource;	// 0x2338f9
- (void)dealloc;	// 0x2318b1
// declared property getter: - (id)explicitSettingChangedTimer;	// 0x233a0d
// declared property getter: - (BOOL)lastExplicitContentSetting;	// 0x233a41
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x233321
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2337a9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x233609
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2331f1
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2331a9
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2330cd
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x233015
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x232dd5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x232efd
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x232fa9
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x2331fd
- (void)listWasActivated:(id)activated;	// 0x23314d
// declared property getter: - (id)mediaMenuView;	// 0x233965
// declared property getter: - (id)menuDefaultImage;	// 0x2339d5
- (long)numberOfSectionsInList:(id)list;	// 0x232edd
- (void)radioStationsDataSourceDidChangeStations:(id)radioStationsDataSource;	// 0x232bdd
- (void)radioStationsDataSourceDidChangeStatus:(id)radioStationsDataSource;	// 0x232c49
- (void)radioStationsDataSourceWillChangeStations:(id)radioStationsDataSource;	// 0x232b85
// declared property setter: - (void)setDataSource:(id)source;	// 0x233909
// declared property setter: - (void)setExplicitSettingChangedTimer:(id)timer;	// 0x233a2d
// declared property setter: - (void)setLastExplicitContentSetting:(BOOL)setting;	// 0x233a51
// declared property setter: - (void)setMediaMenuView:(id)view;	// 0x233975
// declared property setter: - (void)setMenuDefaultImage:(id)image;	// 0x2339e5
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x233951
// declared property setter: - (void)setTrashCanImage:(id)image;	// 0x2339ad
// declared property getter: - (id)spinnerTimer;	// 0x233931
// declared property getter: - (id)trashCanImage;	// 0x23399d
- (void)wasPushed;	// 0x231931
- (void)windowMaxBoundsChanged;	// 0x2329ad
@end

