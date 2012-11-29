/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVQueueFeeder : NSObject {
}
- (id)init;	// 0x33ef6241
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x33f06649
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x33f06579
- (void)contentsDidChangeByInsertingRange:(NSRange)contents;	// 0x33f063e1
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x33f064ad
- (unsigned)itemCount;	// 0x33efd6c1
- (unsigned)numberOfPaths;	// 0x33f063d5
- (id)pathAtIndex:(unsigned)index;	// 0x33f063d9
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x33ef66dd
@end
