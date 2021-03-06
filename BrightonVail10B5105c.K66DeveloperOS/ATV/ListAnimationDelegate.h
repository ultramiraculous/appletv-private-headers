/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : XXUnknownSuperclass {
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x2df9e9
- (void)animationDidStart:(id)animation;	// 0x2dfad1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2dfae1
- (void)clearScroll;	// 0x2dfa2d
- (void)decrementBalance;	// 0x2dfa81
- (void)incrementBalance;	// 0x2dfa41
- (BOOL)scrolling;	// 0x2dfab9
@end

