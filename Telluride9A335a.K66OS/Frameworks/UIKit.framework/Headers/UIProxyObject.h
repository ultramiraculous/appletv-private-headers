/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
@private
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x33befb8d; S=0x33befb49; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x33bef821
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x33bef899
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x33bef971
+ (CFDictionaryRef)proxyDecodingMap;	// 0x33bef7c5
+ (void)removeMappingsForCoder:(id)coder;	// 0x33bef9b5
- (id)initWithCoder:(id)coder;	// 0x33bef9d5
- (void)dealloc;	// 0x33befafd
- (void)encodeWithCoder:(id)coder;	// 0x33befacd
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x33befb8d
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x33befb49
@end

