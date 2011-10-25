/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "AVQueueFeeder.h"

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
@private
	NSMutableArray *_items;	// 4 = 0x4
}
- (id)init;	// 0x36bd9519
- (id)initWithArray:(id)array;	// 0x36bd9845
- (void)dealloc;	// 0x36bd97f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x36bd9691
- (unsigned)itemCount;	// 0x36bd97a9
- (id)itemForIndex:(unsigned)index;	// 0x36bd97b9
- (unsigned)numberOfPaths;	// 0x36bd9789
- (id)pathAtIndex:(unsigned)index;	// 0x36bd96d1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x36bd9651
- (void)shuffleWithCurrentIndex:(unsigned)currentIndex;	// 0x36bd957d
@end

