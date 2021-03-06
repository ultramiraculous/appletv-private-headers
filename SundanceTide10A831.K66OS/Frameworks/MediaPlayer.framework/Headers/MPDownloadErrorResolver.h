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
@property(readonly, assign) MPMediaItem *mediaItem;	// G=0x36f77a81; 
- (id)initWithMediaItem:(id)mediaItem;	// 0x36f779e1
- (void)dealloc;	// 0x36f77a35
// declared property getter: - (id)mediaItem;	// 0x36f77a81
- (void)resolveError:(id)error;	// 0x36f77ab9
@end

