/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import "ATVCupidPhotoBrowserTemplate.h"

@class ATVPhotoBatchBrowserView, NSArray, BRPhotoBrowserBannerButton;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatchBrowserController : ATVCupidPhotoBrowserTemplate <ATVCarouselViewDataSource> {
	ATVPhotoBatchBrowserView *_photoBatchBrowserView;	// 104 = 0x68
	BOOL _commentButtonUpdatePending;	// 108 = 0x6c
	int _selectedBatchIndex;	// 112 = 0x70
	BRPhotoBrowserBannerButton *_commentsButton;	// 116 = 0x74
	NSArray *_photoBatches;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL commentButtonUpdatePending;	// G=0x3d8095; S=0x3d80a5; @synthesize=_commentButtonUpdatePending
@property(retain, nonatomic) BRPhotoBrowserBannerButton *commentsButton;	// G=0x3d80d5; S=0x3d80e5; @synthesize=_commentsButton
@property(retain, nonatomic) ATVPhotoBatchBrowserView *photoBatchBrowserView;	// G=0x3d805d; S=0x3d806d; @synthesize=_photoBatchBrowserView
@property(copy, nonatomic) NSArray *photoBatches;	// G=0x3d810d; S=0x3d8121; @synthesize=_photoBatches
@property(assign, nonatomic) int selectedBatchIndex;	// G=0x3d80b5; S=0x3d80c5; @synthesize=_selectedBatchIndex
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0x3d4871
- (void).cxx_destruct;	// 0x3d8131
- (id)_batchesForPhotos:(id)photos;	// 0x3d6d11
- (BOOL)_dataRequiresUpdateWithNotification:(id)notification;	// 0x3d6145
- (void)_focusPhotoAtIndex:(int)index;	// 0x3d56ed
- (BOOL)_handleNewCommentsSelection:(id)selection;	// 0x3d6a8d
- (BOOL)_handlePhotoPlay:(id)play;	// 0x3d6c45
- (BOOL)_handlePhotoSelection:(id)selection;	// 0x3d6b09
- (id)_photosWithNewComments:(int *)newComments;	// 0x3d78f1
- (void)_reloadView;	// 0x3d5925
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x3d6d01
- (BOOL)_shouldDisplayScreensaverButton;	// 0x3d7f25
- (id)_sortedResultForResult:(id)result;	// 0x3d5571
- (void)_updateButtons;	// 0x3d7115
- (void)_updateNewCommentsButton;	// 0x3d7525
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3d4d01
// declared property getter: - (BOOL)commentButtonUpdatePending;	// 0x3d8095
// declared property getter: - (id)commentsButton;	// 0x3d80d5
- (void)dealloc;	// 0x3d4921
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3d4cc5
// declared property getter: - (id)photoBatchBrowserView;	// 0x3d805d
// declared property getter: - (id)photoBatches;	// 0x3d810d
- (id)providersForContextMenu;	// 0x3d53c1
// declared property getter: - (int)selectedBatchIndex;	// 0x3d80b5
// declared property setter: - (void)setCommentButtonUpdatePending:(BOOL)pending;	// 0x3d80a5
// declared property setter: - (void)setCommentsButton:(id)button;	// 0x3d80e5
// declared property setter: - (void)setPhotoBatchBrowserView:(id)view;	// 0x3d806d
// declared property setter: - (void)setPhotoBatches:(id)batches;	// 0x3d8121
// declared property setter: - (void)setSelectedBatchIndex:(int)index;	// 0x3d80c5
- (void)wasExhumed;	// 0x3d4c6d
- (void)wasPushed;	// 0x3d498d
@end
