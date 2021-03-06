/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCupidPhotoBrowserTemplate.h"
#import "ATVCarouselViewDataSource.h"

@class ATVPhotoBatchBrowserView, NSArray, BRPhotoBrowserBannerButton;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatchBrowserController : ATVCupidPhotoBrowserTemplate <ATVCarouselViewDataSource> {
	BRPhotoBrowserBannerButton *_commentsButton;	// 104 = 0x68
	BOOL _commentButtonUpdatePending;	// 108 = 0x6c
	NSArray *_photoBatches;	// 112 = 0x70
	int _selectedBatchIndex;	// 116 = 0x74
	ATVPhotoBatchBrowserView *_photoBatchBrowserView;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL commentButtonUpdatePending;	// G=0x3cd955; S=0x3cd965; @synthesize=_commentButtonUpdatePending
@property(retain, nonatomic) BRPhotoBrowserBannerButton *commentsButton;	// G=0x3cd91d; S=0x3cd92d; @synthesize=_commentsButton
@property(retain, nonatomic) ATVPhotoBatchBrowserView *photoBatchBrowserView;	// G=0x3cd9b9; S=0x3cd9c9; @synthesize=_photoBatchBrowserView
@property(copy, nonatomic) NSArray *photoBatches;	// G=0x3cd975; S=0x3cd989; @synthesize=_photoBatches
@property(assign, nonatomic) int selectedBatchIndex;	// G=0x3cd999; S=0x3cd9a9; @synthesize=_selectedBatchIndex
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0x3ca131
- (void).cxx_destruct;	// 0x3cd9f1
- (id)_batchesForPhotos:(id)photos;	// 0x3cc5d1
- (BOOL)_dataRequiresUpdateWithNotification:(id)notification;	// 0x3cba05
- (void)_focusPhotoAtIndex:(int)index;	// 0x3cafad
- (BOOL)_handleNewCommentsSelection:(id)selection;	// 0x3cc34d
- (BOOL)_handlePhotoPlay:(id)play;	// 0x3cc505
- (BOOL)_handlePhotoSelection:(id)selection;	// 0x3cc3c9
- (id)_photosWithNewComments:(int *)newComments;	// 0x3cd1b1
- (void)_reloadView;	// 0x3cb1e5
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x3cc5c1
- (BOOL)_shouldDisplayScreensaverButton;	// 0x3cd7e5
- (id)_sortedResultForResult:(id)result;	// 0x3cae31
- (void)_updateButtons;	// 0x3cc9d5
- (void)_updateNewCommentsButton;	// 0x3ccde5
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3ca5c1
// declared property getter: - (BOOL)commentButtonUpdatePending;	// 0x3cd955
// declared property getter: - (id)commentsButton;	// 0x3cd91d
- (void)dealloc;	// 0x3ca1e1
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3ca585
// declared property getter: - (id)photoBatchBrowserView;	// 0x3cd9b9
// declared property getter: - (id)photoBatches;	// 0x3cd975
- (id)providersForContextMenu;	// 0x3cac81
// declared property getter: - (int)selectedBatchIndex;	// 0x3cd999
// declared property setter: - (void)setCommentButtonUpdatePending:(BOOL)pending;	// 0x3cd965
// declared property setter: - (void)setCommentsButton:(id)button;	// 0x3cd92d
// declared property setter: - (void)setPhotoBatchBrowserView:(id)view;	// 0x3cd9c9
// declared property setter: - (void)setPhotoBatches:(id)batches;	// 0x3cd989
// declared property setter: - (void)setSelectedBatchIndex:(int)index;	// 0x3cd9a9
- (void)wasExhumed;	// 0x3ca52d
- (void)wasPushed;	// 0x3ca24d
@end

