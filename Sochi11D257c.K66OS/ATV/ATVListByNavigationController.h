/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTumblerDataSource.h"
#import "AppleTV-Structs.h"
#import "ATVListPreviewController.h"
#import "BRTabControlDelegate.h"
#import "BRTumblerDelegate.h"

@class ATVURLDocument, ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, NSString;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVListPreviewController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 104 = 0x68
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 108 = 0x6c
	ATVURLDocument *_documentForTumblerChange;	// 112 = 0x70
	NSString *_onNavigate;	// 116 = 0x74
	OpaqueJSValue *_lastEvent;	// 120 = 0x78
	unsigned _currentTumblerItemIndex;	// 124 = 0x7c
}
@property(assign, nonatomic) unsigned currentTumblerItemIndex;	// G=0xbe5a9; S=0xbe12d; @synthesize=_currentTumblerItemIndex
- (id)initWithDictionary:(id)dictionary;	// 0xbdf95
- (id)initWithFeedElement:(id)feedElement;	// 0xbdef1
- (void)_callJavaScriptEventOnCancel;	// 0xbf7d5
- (void)_callJavaScriptOnNavigateHandler:(id)handler;	// 0xbf8c1
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0xbfe6d
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0xbfd99
- (void)_cancelAllDocumentRequests;	// 0xbf785
- (void)_didMove;	// 0xbfb8d
- (void)_didNavigateToIndex:(unsigned)index;	// 0xbfbe1
- (void)_documentReady:(id)ready;	// 0xbe979
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0xbe5b9
- (void)_loadListForURL:(id)url;	// 0xbe78d
- (void)_showList;	// 0xbff99
- (void)_showSpinner:(BOOL)spinner;	// 0xbff0d
- (id)_tumblerCustomTextAttributes;	// 0xbe769
- (id)_tumblerTextAttributes;	// 0xbe745
- (void)_updateListHeader;	// 0xbed81
- (id)accessibilityLabel;	// 0xbe309
// declared property getter: - (unsigned)currentTumblerItemIndex;	// 0xbe5a9
- (void)dealloc;	// 0xbe075
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0xbe349
// declared property setter: - (void)setCurrentTumblerItemIndex:(unsigned)index;	// 0xbe12d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0xbe565
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0xbe595
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0xbe5a5
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0xbe3d9
- (void)tumblerControlDidTumble:(id)tumblerControl;	// 0xbe555
- (void)wasPushed;	// 0xbe1a1
@end

