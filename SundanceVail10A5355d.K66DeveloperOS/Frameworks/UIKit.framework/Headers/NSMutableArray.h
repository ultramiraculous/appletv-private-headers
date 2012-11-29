/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSMutableArray.h> // Unknown library
#import "UIKit-Structs.h"


@interface NSMutableArray (UICollectionAdditions_Performance)
- (void)_addObjectsFromArray:(id)array range:(NSRange)range;	// 0x33ba0d0d
@end

@interface NSMutableArray (UIKBExtras)
- (void)_kb_reverse;	// 0x33c0ff41
@end

@interface NSMutableArray (UIMovieScrubberTrackViewAdditions)
- (void)removeViewsFromSuperview;	// 0x33c6dc39
@end

@interface NSMutableArray (UIKitQueueAdditions)
- (id)_ui_dequeue;	// 0x33de1655
- (void)_ui_enqueue:(id)enqueue;	// 0x33de1645
- (id)_ui_peek;	// 0x33de16c1
@end
