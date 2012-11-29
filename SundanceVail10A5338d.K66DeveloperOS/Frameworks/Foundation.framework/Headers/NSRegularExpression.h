/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_pattern;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	void *_internal;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	int _checkout;	// 20 = 0x14
	int _reserved2;	// 24 = 0x18
}
@property(readonly, assign) unsigned numberOfCaptureGroups;	// G=0x3740ebed; 
@property(readonly, assign) unsigned options;	// G=0x3740ebdd; 
@property(readonly, assign) NSString *pattern;	// G=0x3740eba5; 
+ (id)escapedPatternForString:(id)string;	// 0x3740ec15
+ (id)escapedTemplateForString:(id)string;	// 0x3740fe41
+ (void)initialize;	// 0x3734ce19
+ (id)regularExpressionWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x3740e731
- (id)initWithCoder:(id)coder;	// 0x3740e85d
- (id)initWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x3734ce59
- (id)copyWithZone:(NSZone *)zone;	// 0x3740e77d
- (void)dealloc;	// 0x3740ea81
- (id)description;	// 0x3740eb2d
- (void)encodeWithCoder:(id)coder;	// 0x3740e78d
- (void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;	// 0x3740ed29
- (void)finalize;	// 0x3740eae5
- (id)firstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x3740f531
- (unsigned)hash;	// 0x3740e989
- (BOOL)isEqual:(id)equal;	// 0x3740e9c9
- (id)matchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x3740f319
// declared property getter: - (unsigned)numberOfCaptureGroups;	// 0x3740ebed
- (unsigned)numberOfMatchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x3740f3dd
// declared property getter: - (unsigned)options;	// 0x3740ebdd
// declared property getter: - (id)pattern;	// 0x3740eba5
- (NSRange)rangeOfFirstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x3740f6d1
- (unsigned)replaceMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x3740fb71
- (id)replacementStringForResult:(id)result inString:(id)string offset:(int)offset template:(id)aTemplate;	// 0x3740fe51
- (id)stringByReplacingMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x3740f845
@end
