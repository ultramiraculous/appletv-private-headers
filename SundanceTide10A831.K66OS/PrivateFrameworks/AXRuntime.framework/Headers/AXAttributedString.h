/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "AXRuntime-Structs.h"
#import <NSString.h> // Unknown library


@interface AXAttributedString : NSString {
	CFAttributedStringRef _string;	// 4 = 0x4
}
+ (id)axAttributedStringWithString:(id)string;	// 0x348ce0b9
+ (id)string;	// 0x348ce105
- (id)initWithCFAttributedString:(CFAttributedStringRef)cfattributedString;	// 0x348ce1a9
- (id)initWithString:(id)string;	// 0x348ce121
- (void)appendAXAttributedString:(id)string;	// 0x348ce69d
- (void)appendString:(id)string;	// 0x348ce639
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x348ce851
- (id)attributesAtIndex:(int)index effectiveRange:(NSRange *)range;	// 0x348ce6d9
- (id)axAttributedStringDescription;	// 0x348ced75
- (CFAttributedStringRef)cfAttributedString;	// 0x348ce3e9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x348ce389
- (id)coalescedFontAttributes;	// 0x348ce941
- (void)convertAttachmentsWithBlock:(id)block;	// 0x348ce2b1
- (id)copyWithZone:(NSZone *)zone;	// 0x348ce21d
- (void)dealloc;	// 0x348ce269
- (id)description;	// 0x348ced9d
- (BOOL)hasAttribute:(id)attribute;	// 0x348cebb9
- (BOOL)isAXAttributedString;	// 0x348ce721
- (unsigned)length;	// 0x348ce375
- (id)lowercaseString;	// 0x348ce739
- (void)replaceString:(CFStringRef)string;	// 0x348ce3b5
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x348ce4cd
- (void)setAttribute:(id)attribute forKey:(id)key withRange:(NSRange)range;	// 0x348ce50d
- (void)setAttributes:(id)attributes;	// 0x348ce3f9
- (void)setAttributes:(id)attributes withRange:(NSRange)range;	// 0x348ce5cd
- (id)string;	// 0x348ce725
- (id)substringFromIndex:(unsigned)index;	// 0x348cec81
- (id)uppercaseString;	// 0x348ce7c5
@end
