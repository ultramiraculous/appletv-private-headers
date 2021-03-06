/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer, ATVDataQuery, ATVRadioStationPreviewController, ATVDataClient, ATVDataCollection, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRadioStoreGenreController : BRViewController {
	ATVDataCollection *_parentNode;	// 104 = 0x68
	ATVDataClient *_dataClient;	// 108 = 0x6c
	ATVDataQuery *_subgenreQuery;	// 112 = 0x70
	NSTimer *_spinnerTimer;	// 116 = 0x74
	NSArray *_sections;	// 120 = 0x78
	ATVRadioStationPreviewController *_stationPreviewController;	// 124 = 0x7c
}
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x7c4e1; S=0x7c4f1; @synthesize=_dataClient
@property(retain, nonatomic) ATVDataCollection *parentNode;	// G=0x7c4a9; S=0x7c4b9; @synthesize=_parentNode
@property(copy, nonatomic) NSArray *sections;	// G=0x7c585; S=0x7c599; @synthesize=_sections
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x7c551; S=0x7c571; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVRadioStationPreviewController *stationPreviewController;	// G=0x7c5a9; S=0x7c5b9; @synthesize=_stationPreviewController
@property(retain, nonatomic) ATVDataQuery *subgenreQuery;	// G=0x7c519; S=0x7c529; @synthesize=_subgenreQuery
- (id)initWithGenreNode:(id)genreNode;	// 0x79f79
- (void).cxx_destruct;	// 0x7c5e1
- (unsigned)_numberOfSections;	// 0x7a70d
- (unsigned)_numberOfStationsInSectionAtIndex:(unsigned)index;	// 0x7a795
- (void)_spinnerTimerHandler:(id)handler;	// 0x7c44d
- (id)_stationForRowAtIndexPath:(id)indexPath;	// 0x7a7d1
- (id)_stationsForSectionAtIndex:(unsigned)index;	// 0x7a749
- (void)_updatePreviewStationMetadata;	// 0x7bfdd
- (void)_updatePreviewWithStation:(id)station;	// 0x7bd51
// declared property getter: - (id)dataClient;	// 0x7c4e1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7ae41
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x7b141
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7b111
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x7ad45
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x7a8dd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x7a871
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x7a885
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x7ad51
- (id)mediaMenuView;	// 0x7a00d
- (long)numberOfSectionsInList:(id)list;	// 0x7a861
// declared property getter: - (id)parentNode;	// 0x7c4a9
// declared property getter: - (id)sections;	// 0x7c585
// declared property setter: - (void)setDataClient:(id)client;	// 0x7c4f1
// declared property setter: - (void)setParentNode:(id)node;	// 0x7c4b9
// declared property setter: - (void)setSections:(id)sections;	// 0x7c599
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x7c571
// declared property setter: - (void)setStationPreviewController:(id)controller;	// 0x7c5b9
// declared property setter: - (void)setSubgenreQuery:(id)query;	// 0x7c529
// declared property getter: - (id)spinnerTimer;	// 0x7c551
// declared property getter: - (id)stationPreviewController;	// 0x7c5a9
// declared property getter: - (id)subgenreQuery;	// 0x7c519
- (void)wasPopped;	// 0x7a685
- (void)wasPushed;	// 0x7a091
@end

