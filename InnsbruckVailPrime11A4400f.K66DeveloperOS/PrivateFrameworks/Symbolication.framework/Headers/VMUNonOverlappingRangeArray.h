/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMURangeArray.h"
#import "Symbolication-Structs.h"


@interface VMUNonOverlappingRangeArray : VMURangeArray {
}
- (void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;	// 0x32918dad
- (void)addOrExtendRange:(VMURange)range;	// 0x3291892d
- (VMURange)largestUnusedWithInUse:(id)use;	// 0x32918fa1
- (void)mergeRange:(VMURange)range;	// 0x32918afd
- (void)mergeRange:(VMURange)range excludingRanges:(id)ranges;	// 0x32918ccd
- (void)mergeRanges:(id)ranges;	// 0x32918c61
- (void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;	// 0x32918d35
- (void)sortAndMergeRanges;	// 0x32918a3d
- (id)subtract:(id)subtract mergeRanges:(BOOL)ranges;	// 0x32918edd
@end
