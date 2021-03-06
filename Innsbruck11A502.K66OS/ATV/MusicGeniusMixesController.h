/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVDataClient, NSArray, NSTimer, BRPageStripView, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixesController : BRViewController {
	BRPageStripView *_geniusMixesView;	// 104 = 0x68
	unsigned _dataClientType;	// 108 = 0x6c
	ATVDataClient *_dataClient;	// 112 = 0x70
	NSArray *_data;	// 116 = 0x74
	ATVDataQuery *_dataQuery;	// 120 = 0x78
	ATVDataQuery *_geniusMixSongsQuery;	// 124 = 0x7c
	NSTimer *_spinnerTimer;	// 128 = 0x80
	BOOL _showingSpinner;	// 132 = 0x84
	BOOL _handlingDataClientUpdate;	// 133 = 0x85
	BOOL _refreshNeeded;	// 134 = 0x86
	int _geniusQueryIndex;	// 136 = 0x88
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1b29e9
- (void)_dataClientStatusChanged:(id)changed;	// 0x1b33a1
- (void)_dataClientUpdated:(id)updated;	// 0x1b333d
- (void)_dataQueryComplete;	// 0x1b380d
- (void)_executeDataQuery;	// 0x1b35f9
- (id)_filterDataQueryResults:(id)results;	// 0x1b3a5d
- (void)_geniusMixSongsQueryComplete;	// 0x1b3b75
- (void)_setDataQuery:(id)query;	// 0x1b37c1
- (void)_showSpinner:(BOOL)spinner;	// 0x1b3541
- (void)_spinnerTimerFired;	// 0x1b3409
- (id)accessibilityLabel;	// 0x1b2d3d
- (void)dealloc;	// 0x1b2bb9
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x1b2d5d
- (id)pageStripView:(id)view detailedPageAtIndex:(long)index;	// 0x1b2f2d
- (void)pageStripView:(id)view didPlayPageAtIndex:(long)index;	// 0x1b332d
- (void)pageStripView:(id)view didSelectPageAtIndex:(long)index;	// 0x1b30f9
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x1b2d7d
- (void)wasExhumed;	// 0x1b2cd9
- (void)wasPushed;	// 0x1b2c99
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1b30d5
- (float)yDetailedPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1b30ed
- (float)yPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x1b30e1
@end

