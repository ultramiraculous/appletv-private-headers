/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : NSObject {
@private
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x33210a75
- (void)animationDidStart:(id)animation;	// 0x33210b65
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33210b75
- (void)clearScroll;	// 0x33210ab9
- (void)decrementBalance;	// 0x33210b0d
- (void)incrementBalance;	// 0x33210acd
- (BOOL)scrolling;	// 0x33210b4d
@end

