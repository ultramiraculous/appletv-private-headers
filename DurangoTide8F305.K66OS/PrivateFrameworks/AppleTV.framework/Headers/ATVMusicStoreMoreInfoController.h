/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCatalogApplianceController.h"
#import "AppleTV-Structs.h"

@class NSDictionary, BRListControl, BRMediaShelfControl, BRControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoController : ATVCatalogApplianceController {
@private
	NSDictionary *_catalogItem;	// 96 = 0x60
	BRListControl *_list;	// 100 = 0x64
	BRControl *_previousPosterControl;	// 104 = 0x68
	BOOL _localListContentSelected;	// 108 = 0x6c
	BRMediaShelfControl *_actionShelfControl;	// 112 = 0x70
	long _lastSelectedIndex;	// 116 = 0x74
}
- (id)initWithCatalogItem:(id)catalogItem;	// 0x30751e05
- (id)_coverArtControl;	// 0x307523fd
- (void)_focusedActionChanged:(id)changed;	// 0x3075158d
- (id)_grid;	// 0x30751481
- (void)_listSelectionChanged:(id)changed;	// 0x30751631
- (void)_loadList;	// 0x307518a5
- (void)_loadMoreInfoItemContentFromURL:(id)url;	// 0x30752a6d
- (void)_loadMoreInfoItemContentFromURLString:(id)urlstring;	// 0x3075144d
- (void)_moreInfoItemContentFeedReceived:(id)received;	// 0x30752035
- (BOOL)_selectionIsTopmostSelectable;	// 0x307522f1
- (id)_summaryControl;	// 0x30751575
- (id)_summaryControlForItem:(id)item;	// 0x307525d1
- (id)accessibilityScreenContent;	// 0x3075200d
- (void)addControls;	// 0x30751391
- (BOOL)brEventAction:(id)action;	// 0x30751b45
- (void)controlWasActivated;	// 0x30751cc9
- (void)controlWasDeactivated;	// 0x30751c39
- (void)dealloc;	// 0x30751d71
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x30751e69
- (void)layoutSubcontrols;	// 0x30752b89
- (void)refreshDirtyPage;	// 0x30751301
- (BOOL)shouldAllowControllerContent;	// 0x30752a61
- (id)transitionType;	// 0x307512f1
- (void)updateContent:(id)content;	// 0x30751351
- (void)willEnterCompleteState;	// 0x30751429
@end

