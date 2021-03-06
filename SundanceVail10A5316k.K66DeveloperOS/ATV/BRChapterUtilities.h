/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRChapterUtilities : XXUnknownSuperclass {
}
+ (unsigned)chapterGroupCountForMediaAsset:(id)mediaAsset;	// 0x3467c9
+ (unsigned)chapterGroupCountForMediaItem:(id)mediaItem;	// 0x34689d
+ (long)chapterIndexForTime:(double)time chapters:(id)chapters startSearchFrom:(long)from;	// 0x3468a9
+ (id)mediaAsset:(id)asset chapterGroupAtIndex:(unsigned)index;	// 0x346855
+ (BOOL)mediaAsset:(id)asset hasChapterGroupAtIndex:(unsigned)index;	// 0x34680d
+ (id)mediaItem:(id)item chapterGroupAtIndex:(unsigned)index;	// 0x3468a5
+ (BOOL)mediaItem:(id)item hasChapterGroupAtIndex:(unsigned)index;	// 0x3468a1
@end

