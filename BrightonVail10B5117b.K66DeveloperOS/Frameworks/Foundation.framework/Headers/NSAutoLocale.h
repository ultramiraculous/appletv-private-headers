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
	NSLocale *loc;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x319dc975
- (id)init;	// 0x319dc759
- (id)initWithCoder:(id)coder;	// 0x319dc9cd
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x319dc7ed
- (id)_prefs;	// 0x319dc8b9
- (void)_update:(id)update;	// 0x319dc705
- (Class)classForCoder;	// 0x319dca65
- (id)copyWithZone:(NSZone *)zone;	// 0x319dc941
- (void)dealloc;	// 0x319dc7fd
- (id)description;	// 0x319dc8d9
- (id)displayNameForKey:(id)key value:(id)value;	// 0x319dc899
- (void)encodeWithCoder:(id)coder;	// 0x319dc979
- (id)objectForKey:(id)key;	// 0x319dc879
@end
