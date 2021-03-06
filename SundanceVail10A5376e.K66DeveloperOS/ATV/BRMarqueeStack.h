/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMarqueeScrollingDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMarqueeStack : XXUnknownSuperclass <BRMarqueeScrollingDelegate> {
	NSMutableArray *_controlStack;	// 4 = 0x4
	unsigned _currentScrollingControlIndex;	// 8 = 0x8
	BOOL _isFirstRun;	// 12 = 0xc
	BOOL _shouldStopAllScrolling;	// 13 = 0xd
	BOOL _shouldAnimateOnce;	// 14 = 0xe
	BOOL _allowsSimultaneousScrollingControls;	// 15 = 0xf
	unsigned _maxSimultaneousScrollingControls;	// 16 = 0x10
	int _transitionDirection;	// 20 = 0x14
}
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x2d1f0d; S=0x2d1efd; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x2d1f2d; S=0x2d1f1d; converted property
@property(assign) int transitionDirection;	// G=0x2d1ecd; S=0x2d1ebd; converted property
- (id)init;	// 0x2d1dc5
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x2d22fd
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x2d2311
- (void)addControlToStack:(id)stack;	// 0x2d1f3d
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x2d1f51
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x2d1f0d
- (void)controlDidFinishingScrolling:(id)control;	// 0x2d21b5
- (void)dealloc;	// 0x2d1d15
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x2d1f2d
- (void)removeControlFromStack:(id)stack;	// 0x2d1fc9
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x2d1efd
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x2d1f1d
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x2d1eed
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x2d1edd
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x2d1ebd
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x2d2009
- (id)stack;	// 0x2d1e91
// converted property getter: - (int)transitionDirection;	// 0x2d1ecd
@end

