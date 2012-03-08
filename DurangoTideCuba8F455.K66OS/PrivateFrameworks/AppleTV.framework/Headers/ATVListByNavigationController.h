/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVGenericCollectionController.h"
#import "ATVUpdatable.h"
#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "BRTabControlDelegate.h"

@class ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, ATVPeriodicItemUpdateTask, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVGenericCollectionController <BRTumblerDelegate, BRTumblerDataSource, ATVUpdatable, BRTabControlDelegate> {
@private
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 88 = 0x58
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 92 = 0x5c
	ATVURLDocument *_documentForTumblerChange;	// 96 = 0x60
	ATVPeriodicItemUpdateTask *_updateTask;	// 100 = 0x64
	BOOL _initialUpdateComplete;	// 104 = 0x68
}
- (id)initWithDictionary:(id)dictionary;	// 0x306d1fc1
- (void)_cancelAllDocumentRequests;	// 0x306d1bcd
- (void)_cancelUpdateTask;	// 0x306d1c15
- (void)_didNavigateToIndex:(unsigned)index;	// 0x306d21bd
- (void)_documentReadyNotification:(id)notification;	// 0x306d29e9
- (void)_loadListForURL:(id)url;	// 0x306d23c1
- (id)_tumblerCustomTextAttributes;	// 0x306d29c5
- (id)_tumblerTextAttributes;	// 0x306d29a1
- (void)_updateListHeader;	// 0x306d2c79
- (void)_willNavigate;	// 0x306d1b95
- (id)accessibilityLabel;	// 0x306d1b59
- (void)dealloc;	// 0x306d1f1d
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x306d1db1
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x306d1c71
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x306d1c5d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x306d1b55
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x306d1c9d
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x306d1cdd
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x306d1cc9
- (void)updateWithPropertyList:(id)propertyList;	// 0x306d2509
- (void)wasPushed;	// 0x306d1e01
@end
