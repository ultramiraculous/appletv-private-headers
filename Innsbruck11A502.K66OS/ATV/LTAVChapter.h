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
+ (id)chapterWithTimedMetadataGroup:(id)timedMetadataGroup assetID:(id)anId;	// 0x469d51
- (void).cxx_destruct;	// 0x46a0a5
- (void)_setImageMetadataItem:(id)item;	// 0x46a0d9
- (void)_setTitleMetadataItem:(id)item;	// 0x46a101
- (void)dealloc;	// 0x469f79
- (id)imageProxy;	// 0x46a009
- (void)invalidate;	// 0x469fc5
@end
