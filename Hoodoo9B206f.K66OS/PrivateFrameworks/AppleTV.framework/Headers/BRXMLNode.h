/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRXMLNode.h"
#import "AppleTV-Structs.h"


@interface BRXMLNode : NSObject {
@private
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x3675138d; S=0x367512cd; converted property
@property(retain) id textContent;	// G=0x36750bdd; S=0x36750d5d; converted property
- (id)XMLString;	// 0x3674f269
- (BOOL)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function error:(id *)error;	// 0x3674fdd9
- (BOOL)appendChild:(id)child error:(id *)error;	// 0x3674fb0d
// converted property getter: - (id)associatedObject;	// 0x3675138d
- (id)children;	// 0x3674f95d
- (id)copyWithZone:(NSZone *)zone;	// 0x3674eca5
- (id)description;	// 0x3674ee65
- (id)getAttribute:(id)attribute;	// 0x36750f99
- (BOOL)insertChild:(id)child after:(id)after error:(id *)error;	// 0x3675020d
- (BOOL)insertChild:(id)child before:(id)before error:(id *)error;	// 0x367501e1
- (BOOL)isEqual:(id)equal;	// 0x3674f051
- (id)name;	// 0x367502bd
- (id)nextSibling;	// 0x36750491
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x367505f5
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x3674f479
- (id)objectValue;	// 0x36750ddd
- (id)ownerDocument;	// 0x367514e5
- (id)parent;	// 0x36750785
- (id)previousSibling;	// 0x367508e9
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x36750a4d
- (void)removeAttribute:(id)attribute;	// 0x3675123d
- (void)removeFromParent;	// 0x36750285
- (BOOL)replaceChild:(id)child with:(id)with error:(id *)error;	// 0x36750239
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x367512cd
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x36751159
// converted property setter: - (void)setTextContent:(id)content;	// 0x36750d5d
- (id)stringValue;	// 0x36750ded
// converted property getter: - (id)textContent;	// 0x36750bdd
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x36751751
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x3675187d
- (id)init;	// 0x36751aa5
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x36751911
- (void)clearNode;	// 0x36751d11
- (void)dealloc;	// 0x36751ae9
- (void)lockNode:(id)node;	// 0x36751c71
@end
