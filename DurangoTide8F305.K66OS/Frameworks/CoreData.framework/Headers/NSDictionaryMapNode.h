/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapNode.h"
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
@private
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x342efded
- (id)initWithCoder:(id)coder;	// 0x342efd55
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x342efa49
- (void)_doAttributeDecoding;	// 0x342efe0d
- (const id *)attributeValues;	// 0x342efd25
- (void)dealloc;	// 0x342f0155
- (void)encodeWithCoder:(id)coder;	// 0x342f0015
- (id)valueForKey:(id)key;	// 0x342efa85
@end

