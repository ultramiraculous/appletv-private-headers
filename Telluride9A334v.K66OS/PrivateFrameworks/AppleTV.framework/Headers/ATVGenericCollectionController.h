/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class BRMediaMenuView, BRControl, NSIndexPath, ATVFeedDocument, NSString, NSMutableDictionary, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVGenericCollectionController : ATVFeedController {
@private
	bool _forcePreviewRefresh;	// 112 = 0x70
	ATVURLDocument *_documentForPreviewChange;	// 116 = 0x74
	NSString *_previousLoadPreviewURL;	// 120 = 0x78
	NSMutableDictionary *_headerCache;	// 124 = 0x7c
	BRMediaMenuView *_mediaMenuView;	// 128 = 0x80
	BRControl *_sharedPreviewControl;	// 132 = 0x84
	NSIndexPath *_lastPreviewIndexPath;	// 136 = 0x88
	ATVFeedDocument *_lastPreviewFeedDocument;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0x33187bb1; S=0x33187bc1; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0x33187b7d; S=0x33187b8d; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x33187b35; @synthesize=_mediaMenuView
@property(retain) BRControl *sharedPreviewControl;	// G=0x33187b45; S=0x33187b59; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0x33186a21
- (id)initWithFeedElement:(id)feedElement;	// 0x3318690d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3318703d
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x33186f79
- (void)_cancelAllDocumentRequests;	// 0x33188b51
- (void)_cancelDocumentRequest:(id *)request;	// 0x33188ad1
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x33188b71
- (id)_createMediaMenuView;	// 0x33188be5
- (id)_createView;	// 0x33188c6d
- (id)_elementAtIndexPath:(id)indexPath;	// 0x33188521
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x33187089
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x33186fe9
- (id)_initialSelection;	// 0x331885b1
- (id)_itemAtIndexPath:(id)indexPath;	// 0x33188461
- (void)_loadPreviewForURL:(id)url;	// 0x33187e1d
- (void)_previewDocumentReadyNotification:(id)notification;	// 0x33187fad
- (void)_setLastPreviewIndexPath:(id)path;	// 0x33188bd5
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0x33186d91
- (void)_updatePreviewWithElement:(id)element;	// 0x33187d21
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x33187be5
- (void)dealloc;	// 0x33186b9d
// declared property getter: - (id)lastPreviewFeedDocument;	// 0x33187bb1
// declared property getter: - (id)lastPreviewIndexPath;	// 0x33187b7d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x331876f9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x331876e5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x331876f5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33187641
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33187561
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x331874e9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3318742d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3318731d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3318716d
// declared property getter: - (id)mediaMenuView;	// 0x33187b35
- (long)numberOfSectionsInList:(id)list;	// 0x331870cd
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0x33187bc1
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0x33187b8d
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0x33187b59
// declared property getter: - (id)sharedPreviewControl;	// 0x33187b45
- (void)wasPushed;	// 0x33186ccd
@end
