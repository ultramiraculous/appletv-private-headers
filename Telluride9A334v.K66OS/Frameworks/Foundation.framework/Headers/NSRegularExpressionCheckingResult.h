/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {
}
@property(readonly, assign) NSArray *rangeArray;	// G=0x306e4d09; 
@property(readonly, assign) NSRegularExpression *regularExpression;	// G=0x306e4d05; 
- (id)initWithCoder:(id)coder;	// 0x306e4e35
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x306e4ce1
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x306e4cbd
- (id)description;	// 0x306e4d0d
- (void)encodeWithCoder:(id)coder;	// 0x306e4d7d
// declared property getter: - (id)rangeArray;	// 0x306e4d09
// declared property getter: - (id)regularExpression;	// 0x306e4d05
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x306e4f31
- (unsigned long long)resultType;	// 0x306e4f29
@end

