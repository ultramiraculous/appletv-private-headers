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
@property(readonly, retain) NSDictionary *components;	// G=0x31a45cd1; converted property
@property(readonly, assign) NSRange range;	// G=0x31a45b05; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x31a45ce1; 
- (id)initWithCoder:(id)coder;	// 0x31a459d1
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x31a458b9
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x31a45825
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31a45c35
// converted property getter: - (id)components;	// 0x31a45cd1
- (void)dealloc;	// 0x31a458dd
- (void)encodeWithCoder:(id)coder;	// 0x31a45941
// converted property getter: - (NSRange)range;	// 0x31a45b05
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x31a45b1d
- (unsigned long long)resultType;	// 0x31a45afd
// declared property getter: - (void *)underlyingResult;	// 0x31a45ce1
@end
