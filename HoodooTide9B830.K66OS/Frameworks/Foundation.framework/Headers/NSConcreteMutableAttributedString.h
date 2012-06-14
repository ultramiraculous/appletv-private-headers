/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableAttributedString.h"

@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
@private
	NSMutableString *mutableString;	// 4 = 0x4
	NSMutableRLEArray *mutableAttributes;	// 8 = 0x8
	struct {
		unsigned attributeFixingDisabled : 8;
		unsigned  : 24;
	} fields;	// 12 = 0xc
}
+ (Class)_mutableStringClass;	// 0x3158eda5
- (id)init;	// 0x3158e9fd
- (id)initWithAttributedString:(id)attributedString;	// 0x3158eb05
- (id)initWithCoder:(id)coder;	// 0x31591441
- (id)initWithString:(id)string;	// 0x3158ea19
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x3164dbb9
- (id)_runArrayHoldingAttributes;	// 0x31590b35
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x3164de75
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x315919d5
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3164dfa1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31591a19
- (Class)classForCoder;	// 0x3164e121
- (void)dealloc;	// 0x31590b89
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x3158f0f1
- (void)finalize;	// 0x3164dd09
- (unsigned)length;	// 0x315919b5
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x3164dd35
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3158ef29
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x31590311
- (id)string;	// 0x31590b25
@end
