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
- (id)init;	// 0x336977c5
- (id)initWithCoder:(id)coder;	// 0x336d1b59
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x336d1a6d
- (id)_prefs;	// 0x336978ad
- (void)_update:(id)update;	// 0x336d1a15
- (Class)classForCoder;	// 0x336d1bf1
- (id)copyWithZone:(NSZone *)zone;	// 0x33697859
- (void)dealloc;	// 0x33697a45
- (id)description;	// 0x336d1a9d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x336d1a7d
- (void)encodeWithCoder:(id)coder;	// 0x336d1b05
- (id)objectForKey:(id)key;	// 0x3369788d
@end

