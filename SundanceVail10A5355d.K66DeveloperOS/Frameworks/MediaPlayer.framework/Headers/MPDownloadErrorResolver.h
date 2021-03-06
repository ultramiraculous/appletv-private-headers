/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"

@class MPMediaItem;

@interface MPDownloadErrorResolver : MPAVErrorResolver {
	MPMediaItem *_mediaItem;	// 8 = 0x8
}
@property(readonly, assign) MPMediaItem *mediaItem;	// G=0x3377f925; 
- (id)initWithMediaItem:(id)mediaItem;	// 0x3377f885
- (void)dealloc;	// 0x3377f8d9
// declared property getter: - (id)mediaItem;	// 0x3377f925
- (void)resolveError:(id)error;	// 0x3377f95d
@end

