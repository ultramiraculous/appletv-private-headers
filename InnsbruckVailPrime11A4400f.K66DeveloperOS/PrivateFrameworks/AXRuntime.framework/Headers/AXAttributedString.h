/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "NSCopying.h"
#import <Foundation/NSString.h>
#import "AXRuntime-Structs.h"


@interface AXAttributedString : NSString <NSCopying> {
	CFAttributedStringRef _string;	// 4 = 0x4
}
+ (id)axAttributedStringWithString:(id)string;	// 0x2fdfe969
+ (id)string;	// 0x2fdfe9b5
- (id)initWithCFAttributedString:(CFAttributedStringRef)cfattributedString;	// 0x2fdfea59
- (id)initWithString:(id)string;	// 0x2fdfe9d1
- (void)appendAXAttributedString:(id)string;	// 0x2fdfef69
- (void)appendString:(id)string;	// 0x2fdfef05
- (id)attributeValueForKey:(id)key;	// 0x2fdfefed
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x2fdff309
- (id)attributesAtIndex:(int)index effectiveRange:(NSRange *)range;	// 0x2fdfefa5
- (id)axAttributedStringDescription;	// 0x2fdff825
- (CFAttributedStringRef)cfAttributedString;	// 0x2fdfecad
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x2fdfec45
- (id)coalescedFontAttributes;	// 0x2fdff3f9
- (void)convertAttachmentsWithBlock:(id)block;	// 0x2fdfeb75
- (id)copyWithZone:(NSZone *)zone;	// 0x2fdfeae1
- (void)dealloc;	// 0x2fdfeb2d
- (id)description;	// 0x2fdff84d
- (void)enumerateAttributesUsingBlock:(id)block;	// 0x2fdff191
- (BOOL)hasAttribute:(id)attribute;	// 0x2fdff669
- (BOOL)isAXAttributedString;	// 0x2fdff1d9
- (unsigned)length;	// 0x2fdfec31
- (id)lowercaseString;	// 0x2fdff1f1
- (void)replaceString:(CFStringRef)string;	// 0x2fdfec71
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x2fdfed91
- (void)setAttribute:(id)attribute forKey:(id)key withRange:(NSRange)range;	// 0x2fdfedd1
- (void)setAttributes:(id)attributes;	// 0x2fdfecbd
- (void)setAttributes:(id)attributes withRange:(NSRange)range;	// 0x2fdfee91
- (id)string;	// 0x2fdff1dd
- (id)substringFromIndex:(unsigned)index;	// 0x2fdff731
- (id)uppercaseString;	// 0x2fdff27d
@end

