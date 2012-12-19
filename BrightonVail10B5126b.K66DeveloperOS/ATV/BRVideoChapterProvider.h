/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRVideoChapterProvider : XXUnknownSuperclass <BRProvider> {
	BRMediaPlayer *_player;	// 4 = 0x4
	NSRange _invalidTitlesRange;	// 8 = 0x8
	NSTimer *_checkForChapterTitleUpdateTimer;	// 16 = 0x10
}
- (id)initWithPlayer:(id)player;	// 0x2cd01d
- (void)_checkChapterTitle:(id)title;	// 0x2cd4e1
- (void)_movieLoadedHandler:(id)handler;	// 0x2cd5d1
- (BOOL)_videoIsLoaded;	// 0x2cd4a1
- (id)controlFactory;	// 0x2cd181
- (id)dataAtIndex:(long)index;	// 0x2cd1e1
- (long)dataCount;	// 0x2cd19d
- (void)dealloc;	// 0x2cd105
- (id)hashForDataAtIndex:(long)index;	// 0x2cd445
- (void)stopMonitoring;	// 0x2cd475
@end
