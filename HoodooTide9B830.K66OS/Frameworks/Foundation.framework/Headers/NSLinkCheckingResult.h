/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSURL *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x31657611; converted property
- (id)initWithCoder:(id)coder;	// 0x316574e1
- (id)initWithRange:(NSRange)range URL:(id)url;	// 0x31657335
- (id)URL;	// 0x316577d5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31657739
- (void)dealloc;	// 0x3165739d
- (id)description;	// 0x316573e9
- (void)encodeWithCoder:(id)coder;	// 0x31657459
// converted property getter: - (NSRange)range;	// 0x31657611
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3165762d
- (unsigned long long)resultType;	// 0x31657609
@end

