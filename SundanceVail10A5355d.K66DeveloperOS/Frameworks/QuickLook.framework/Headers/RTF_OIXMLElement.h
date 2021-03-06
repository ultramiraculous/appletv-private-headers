/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"


__attribute__((visibility("hidden")))
@interface RTF_OIXMLElement : RTF_OIXMLNode {
	id _attributes;	// 16 = 0x10
	id _children;	// 20 = 0x14
	BOOL _hasMultipleAttributes;	// 24 = 0x18
	BOOL _hasMultipleChildren;	// 25 = 0x19
}
@property(retain) id objectValue;	// G=0x341c7bdd; S=0x341c7b19; converted property
+ (void)_initEmptyHTMLNames;	// 0x341c7789
+ (BOOL)isEmptyHTMLElement:(id)element;	// 0x341c786d
- (id)initWithName:(id)name stringValue:(id)value;	// 0x341c75d5
- (void)_appendXMLStringToString:(CFStringRef)string;	// 0x341c7dbd
- (void)addAttribute:(id)attribute;	// 0x341c78bd
- (void)addChild:(id)child;	// 0x341c7985
- (int)attributeCount;	// 0x341c7d81
- (int)childrenCount;	// 0x341c7d45
- (id)closingTagString;	// 0x341c81a9
- (id)contentString;	// 0x341c80e5
- (id)copyWithZone:(NSZone *)zone;	// 0x341c7699
- (void)dealloc;	// 0x341c7635
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x341c7a4d
// converted property getter: - (id)objectValue;	// 0x341c7bdd
- (id)openingTagString;	// 0x341c7fb9
// converted property setter: - (void)setObjectValue:(id)value;	// 0x341c7b19
- (id)stringValue;	// 0x341c7bed
@end

