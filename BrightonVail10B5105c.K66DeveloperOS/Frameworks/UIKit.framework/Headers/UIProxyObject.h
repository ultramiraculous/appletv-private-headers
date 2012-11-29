/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x346ddcd1; S=0x347c5ed1; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x346db2ad
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x347c5dad
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x346ddce1
+ (CFDictionaryRef)proxyDecodingMap;	// 0x346db329
+ (void)removeMappingsForCoder:(id)coder;	// 0x346e09c5
- (id)initWithCoder:(id)coder;	// 0x346ddbd9
- (void)dealloc;	// 0x346ddd21
- (void)encodeWithCoder:(id)coder;	// 0x347c5ea1
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x346ddcd1
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x347c5ed1
@end
