/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer, ATVDataClient, NSArray, BRPageStripView, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixesController : BRViewController {
	BRPageStripView *_geniusMixesView;	// 100 = 0x64
	unsigned long _dataClientType;	// 104 = 0x68
	ATVDataClient *_dataClient;	// 108 = 0x6c
	NSArray *_data;	// 112 = 0x70
	ATVDataQuery *_dataQuery;	// 116 = 0x74
	ATVDataQuery *_geniusMixSongsQuery;	// 120 = 0x78
	NSTimer *_spinnerTimer;	// 124 = 0x7c
	BOOL _showingSpinner;	// 128 = 0x80
	BOOL _handlingDataClientUpdate;	// 129 = 0x81
	BOOL _refreshNeeded;	// 130 = 0x82
	int _geniusQueryIndex;	// 132 = 0x84
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1a15d9
- (void)_dataClientStatusChanged:(id)changed;	// 0x1a1fd5
- (void)_dataClientUpdated:(id)updated;	// 0x1a1f71
- (void)_dataQueryComplete;	// 0x1a2459
- (void)_executeDataQuery;	// 0x1a2245
- (id)_filterDataQueryResults:(id)results;	// 0x1a26c1
- (void)_geniusMixSongsQueryComplete;	// 0x1a27d9
- (void)_setDataQuery:(id)query;	// 0x1a240d
- (void)_showSpinner:(BOOL)spinner;	// 0x1a2191
- (void)_spinnerTimerFired;	// 0x1a203d
- (id)accessibilityLabel;	// 0x1a1945
- (void)dealloc;	// 0x1a17c1
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x1a1965
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x1a1b51
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x1a1f61
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x1a1d39
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x1a1985
- (void)wasExhumed;	// 0x1a18e1
- (void)wasPushed;	// 0x1a18a1
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a1d15
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a1d2d
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1a1d21
@end

