/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRVideoChapterProvider : XXUnknownSuperclass <BRProvider> {
	BRMediaPlayer *_player;	// 4 = 0x4
	NSRange _invalidTitlesRange;	// 8 = 0x8
	NSTimer *_checkForChapterTitleUpdateTimer;	// 16 = 0x10
}
- (id)initWithPlayer:(id)player;	// 0x31bbd5
- (void)_checkChapterTitle:(id)title;	// 0x31c09d
- (void)_movieLoadedHandler:(id)handler;	// 0x31c199
- (BOOL)_videoIsLoaded;	// 0x31c05d
- (id)controlFactory;	// 0x31bd39
- (id)dataAtIndex:(long)index;	// 0x31bd99
- (long)dataCount;	// 0x31bd55
- (void)dealloc;	// 0x31bcbd
- (id)hashForDataAtIndex:(long)index;	// 0x31c001
- (void)stopMonitoring;	// 0x31c031
@end
