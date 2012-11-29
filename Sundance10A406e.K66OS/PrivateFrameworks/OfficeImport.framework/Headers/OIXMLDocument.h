/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"

@class NSString, OIXMLElement;

@interface OIXMLDocument : OIXMLNode {
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x34ecd335; S=0x34eccfa9; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x34eccf61
- (id)XMLString;	// 0x34f19ea1
- (id)closingTagString;	// 0x34ee00d9
- (id)contentString;	// 0x3513dd15
- (id)copyWithZone:(NSZone *)zone;	// 0x3513dc2d
- (id)createMutableXMLString;	// 0x34f19ec9
- (void)dealloc;	// 0x34ee48c1
- (id)description;	// 0x3513dd05
- (id)openingTagString;	// 0x34ecdb35
// converted property getter: - (id)rootElement;	// 0x34ecd335
- (void)setCharacterEncoding:(id)encoding;	// 0x34ecd031
// converted property setter: - (void)setRootElement:(id)element;	// 0x34eccfa9
- (void)setVersion:(id)version;	// 0x34eccfed
@end
