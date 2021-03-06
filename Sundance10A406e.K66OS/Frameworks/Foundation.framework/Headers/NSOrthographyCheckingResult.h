/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSOrthography *_orthography;	// 12 = 0xc
}
@property(readonly, retain) NSOrthography *orthography;	// G=0x355f5f45; converted property
@property(readonly, assign) NSRange range;	// G=0x355f5d91; converted property
- (id)initWithCoder:(id)coder;	// 0x355f5c5d
- (id)initWithRange:(NSRange)range orthography:(id)orthography;	// 0x355f5aa9
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x355f5ea9
- (void)dealloc;	// 0x355f5b11
- (id)description;	// 0x355f5b5d
- (void)encodeWithCoder:(id)coder;	// 0x355f5bcd
// converted property getter: - (id)orthography;	// 0x355f5f45
// converted property getter: - (NSRange)range;	// 0x355f5d91
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x355f5da9
- (unsigned long long)resultType;	// 0x355f5d89
@end

