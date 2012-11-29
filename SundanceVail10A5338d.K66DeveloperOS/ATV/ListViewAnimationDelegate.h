/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : XXUnknownSuperclass {
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x2b40e9
- (void)animationDidStart:(id)animation;	// 0x2b41d1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2b41e1
- (void)clearScroll;	// 0x2b412d
- (void)decrementBalance;	// 0x2b4181
- (void)incrementBalance;	// 0x2b4141
- (BOOL)scrolling;	// 0x2b41b9
@end
