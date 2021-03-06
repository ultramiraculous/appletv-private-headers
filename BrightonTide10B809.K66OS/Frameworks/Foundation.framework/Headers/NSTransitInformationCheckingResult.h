/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x319a64d9; converted property
@property(readonly, assign) NSRange range;	// G=0x319a630d; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x319a64e9; 
- (id)initWithCoder:(id)coder;	// 0x319a61d9
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x319a60c1
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x319a602d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x319a643d
// converted property getter: - (id)components;	// 0x319a64d9
- (void)dealloc;	// 0x319a60e5
- (void)encodeWithCoder:(id)coder;	// 0x319a6149
// converted property getter: - (NSRange)range;	// 0x319a630d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x319a6325
- (unsigned long long)resultType;	// 0x319a6305
// declared property getter: - (void *)underlyingResult;	// 0x319a64e9
@end

