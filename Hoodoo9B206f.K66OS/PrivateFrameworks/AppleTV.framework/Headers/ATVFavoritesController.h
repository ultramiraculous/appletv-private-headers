/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRScrollControl, NSMutableDictionary, BRCursorControl, BRTextControl, NSMutableArray, BRWaitPromptControl, NSTimer, BRGridView;

@interface ATVFavoritesController : BRController {
@private
	int _itemType;	// 84 = 0x54
	NSMutableArray *_favorites;	// 88 = 0x58
	BRScrollControl *_scroller;	// 92 = 0x5c
	BRGridView *_grid;	// 96 = 0x60
	BRCursorControl *_cursor;	// 100 = 0x64
	BRTextControl *_rearrangeInstructions;	// 104 = 0x68
	BOOL _hasBeenActivated;	// 108 = 0x6c
	NSMutableDictionary *_redDotMap;	// 112 = 0x70
	NSTimer *_spinnerTimer;	// 116 = 0x74
	BRWaitPromptControl *_spinner;	// 120 = 0x78
	BOOL _showsSpinner;	// 124 = 0x7c
	BOOL _favoriteOrderChanged;	// 125 = 0x7d
}
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x36555831
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x36556d49
- (void)_favoriteChanged:(id)changed;	// 0x36556a35
- (void)_favoriteInsertedNotification:(id)notification;	// 0x365568b1
- (void)_favoriteRemovedNotification:(id)notification;	// 0x36556999
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x36556c91
- (void)_fetchEpisodesForCurrentSeason:(id)currentSeason;	// 0x36557a1d
- (void)_fetchFavorites:(id)favorites;	// 0x36557991
- (void)_fetchShowInfo:(id)info;	// 0x36557c3d
- (void)_initiateNetworkFetches;	// 0x365561a9
- (ATVMediaTypeRef)_mediaType;	// 0x3655771d
- (id)_noFavoritesController;	// 0x36556cc1
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x3655789d
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x36557831
- (void)_reload;	// 0x365566d9
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x365577d9
- (void)_resort;	// 0x36556745
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x36557761
- (BOOL)_setupAfterFavoritesFetch;	// 0x365563c1
- (BOOL)_shouldShowRedDots;	// 0x36556d29
- (void)_showDataChangedNotification:(id)notification;	// 0x36556bb5
- (void)_showGrid;	// 0x36556f49
- (void)_showSpinner:(BOOL)spinner;	// 0x36556d91
- (id)_sortedFavorites;	// 0x36556559
- (void)_spinnerTimerFired:(id)fired;	// 0x36556e75
- (id)accessibilityScreenContent;	// 0x36557ed9
- (void)controlWasActivated;	// 0x365559d9
- (void)controlWasDeactivated;	// 0x36555a81
- (void)dealloc;	// 0x365558e5
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x36556055
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x36556171
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x3655604d
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x36555d2d
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x36556049
- (void)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x36556059
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x3655617d
- (BOOL)isNetworkDependent;	// 0x36555b65
- (void)layoutSubcontrols;	// 0x36555b69
- (long)numberOfColumnsInGrid:(id)grid;	// 0x36555d15
- (long)numberOfItemsInGrid:(id)grid;	// 0x36555cf5
- (void)setRearrangeInstructionsHidden:(BOOL)hidden;	// 0x36557529
- (void)wasPushed;	// 0x36555b11
@end

