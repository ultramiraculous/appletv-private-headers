/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSString *_phoneNumber;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSString *phoneNumber;	// G=0x31ad547d; converted property
@property(readonly, assign) NSRange range;	// G=0x31ad52c9; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x31ad548d; 
- (id)initWithCoder:(id)coder;	// 0x31ad5195
- (id)initWithRange:(NSRange)range phoneNumber:(id)number;	// 0x31ad500d
- (id)initWithRange:(NSRange)range phoneNumber:(id)number underlyingResult:(void *)result;	// 0x31ad4f79
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31ad53e1
- (void)dealloc;	// 0x31ad5031
- (id)description;	// 0x31ad5095
- (void)encodeWithCoder:(id)coder;	// 0x31ad5105
// converted property getter: - (id)phoneNumber;	// 0x31ad547d
// converted property getter: - (NSRange)range;	// 0x31ad52c9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x31ad52e1
- (unsigned long long)resultType;	// 0x31ad52c1
// declared property getter: - (void *)underlyingResult;	// 0x31ad548d
@end
