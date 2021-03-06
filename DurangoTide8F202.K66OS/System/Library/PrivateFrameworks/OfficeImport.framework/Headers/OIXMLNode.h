/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying> {
@private
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x318ee901; converted property
@property(retain) NSString *name;	// G=0x318ee711; S=0x318e7329; converted property
@property(retain) id objectValue;	// G=0x31aac169; S=0x318e784d; converted property
@property(retain) id stringValue;	// G=0x318ee911; S=0x318e7365; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x318ee929
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x31aac23d
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x318e77c1
+ (id)elementWithName:(id)name;	// 0x318e7281
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x318ee25d
+ (id)textWithStringValue:(id)stringValue;	// 0x318ecfb5
- (id)initWithKind:(unsigned)kind;	// 0x318e7319
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x318e780d
- (id)XMLString;	// 0x318eed5d
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x318ee7b9
- (id)closingTagString;	// 0x31aac185
- (id)contentString;	// 0x31aac191
- (id)copyWithZone:(NSZone *)zone;	// 0x31aac1b9
- (void)dealloc;	// 0x318c58a1
- (id)description;	// 0x31aac1a5
// converted property getter: - (unsigned)kind;	// 0x318ee901
// converted property getter: - (id)name;	// 0x318ee711
// converted property getter: - (id)objectValue;	// 0x31aac169
- (id)openingTagString;	// 0x31aac179
// converted property setter: - (void)setName:(id)name;	// 0x318e7329
// converted property setter: - (void)setObjectValue:(id)value;	// 0x318e784d
// converted property setter: - (void)setStringValue:(id)value;	// 0x318e7365
// converted property getter: - (id)stringValue;	// 0x318ee911
@end

