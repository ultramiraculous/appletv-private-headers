/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode {
@private
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x34c09efd; S=0x34c43c49; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x34c43c01
- (id)XMLString;	// 0x34c7dc3d
- (id)closingTagString;	// 0x34c09f35
- (id)contentString;	// 0x34e4cfdd
- (id)copyWithZone:(NSZone *)zone;	// 0x34e4cffd
- (id)createMutableXMLString;	// 0x34c7dc65
- (void)dealloc;	// 0x34c0ed75
- (id)description;	// 0x34e4cfed
- (id)openingTagString;	// 0x34c43f15
// converted property getter: - (id)rootElement;	// 0x34c09efd
- (void)setCharacterEncoding:(id)encoding;	// 0x34c43cd1
// converted property setter: - (void)setRootElement:(id)element;	// 0x34c43c49
- (void)setVersion:(id)version;	// 0x34c43c8d
@end
