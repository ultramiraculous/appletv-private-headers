/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSLocale.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale {
@private
	NSLocale *loc;	// 4 = 0x4
}
- (id)init;	// 0x31d3a7b5
- (id)initWithCoder:(id)coder;	// 0x31d74b49
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x31d74a5d
- (id)_prefs;	// 0x31d3a89d
- (void)_update:(id)update;	// 0x31d74a05
- (Class)classForCoder;	// 0x31d74be1
- (id)copyWithZone:(NSZone *)zone;	// 0x31d3a849
- (void)dealloc;	// 0x31d3aa35
- (id)description;	// 0x31d74a8d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x31d74a6d
- (void)encodeWithCoder:(id)coder;	// 0x31d74af5
- (id)objectForKey:(id)key;	// 0x31d3a87d
@end
