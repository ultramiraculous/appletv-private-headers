/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRChapter.h"

@class AVMetadataItem;

__attribute__((visibility("hidden")))
@interface LTAVChapter : BRChapter {
	AVMetadataItem *_titleMetadataItem;	// 4 = 0x4
	AVMetadataItem *_imageMetadataItem;	// 8 = 0x8
}
+ (id)chapterWithTimedMetadataGroup:(id)timedMetadataGroup assetID:(id)anId;	// 0x63549
- (void).cxx_destruct;	// 0x638a1
- (void)_setImageMetadataItem:(id)item;	// 0x638d5
- (void)_setTitleMetadataItem:(id)item;	// 0x638fd
- (void)dealloc;	// 0x63775
- (id)imageProxy;	// 0x63805
- (void)invalidate;	// 0x637c1
@end

