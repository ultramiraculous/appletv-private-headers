/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
}
@property(readonly, assign) NSRange range;	// G=0x31655a0d; converted property
- (id)initWithCoder:(id)coder;	// 0x31655921
- (id)initWithRange:(NSRange)range;	// 0x316558cd
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31655b1d
- (void)encodeWithCoder:(id)coder;	// 0x31655911
// converted property getter: - (NSRange)range;	// 0x31655a0d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x31655a29
- (unsigned long long)resultType;	// 0x31655a05
@end

