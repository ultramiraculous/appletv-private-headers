/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x361679dd; converted property
@property(readonly, assign) NSRange range;	// G=0x36167811; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x361679ed; 
- (id)initWithCoder:(id)coder;	// 0x361676dd
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x361675c5
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x36167531
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x36167941
// converted property getter: - (id)components;	// 0x361679dd
- (void)dealloc;	// 0x361675e9
- (void)encodeWithCoder:(id)coder;	// 0x3616764d
// converted property getter: - (NSRange)range;	// 0x36167811
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x36167829
- (unsigned long long)resultType;	// 0x36167809
// declared property getter: - (void *)underlyingResult;	// 0x361679ed
@end

