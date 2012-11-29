/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSURL *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x355f7ce5; converted property
- (id)initWithCoder:(id)coder;	// 0x355f7bb1
- (id)initWithRange:(NSRange)range URL:(id)url;	// 0x355f79fd
- (id)URL;	// 0x355f7e99
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x355f7dfd
- (void)dealloc;	// 0x355f7a65
- (id)description;	// 0x355f7ab1
- (void)encodeWithCoder:(id)coder;	// 0x355f7b21
// converted property getter: - (NSRange)range;	// 0x355f7ce5
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x355f7cfd
- (unsigned long long)resultType;	// 0x355f7cdd
@end
