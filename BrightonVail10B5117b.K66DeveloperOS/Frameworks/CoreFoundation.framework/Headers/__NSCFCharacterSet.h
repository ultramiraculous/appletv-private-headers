/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x311273e9
- (BOOL)_isDeallocating;	// 0x31127399
- (BOOL)_tryRetain;	// 0x31127389
- (void)addCharactersInRange:(NSRange)range;	// 0x310f6b5d
- (void)addCharactersInString:(id)string;	// 0x310d69fd
- (id)bitmapRepresentation;	// 0x3112740d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x310d734d
- (Class)classForCoder;	// 0x31127451
- (id)copyWithZone:(NSZone *)zone;	// 0x310fb5c5
- (void)encodeWithCoder:(id)coder;	// 0x31127481
- (void)finalize;	// 0x311273a9
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x3112743d
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x310d5fb5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x311273fd
- (unsigned)hash;	// 0x31127381
- (void)invert;	// 0x310d5e45
- (id)invertedSet;	// 0x310e4229
- (BOOL)isEqual:(id)equal;	// 0x31127369
- (BOOL)isSupersetOfSet:(id)set;	// 0x311273ed
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x310fba0d
- (void)makeCharacterSetCompact;	// 0x31127449
- (void)makeCharacterSetFast;	// 0x3112744d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310d5e21
- (oneway void)release;	// 0x310d6ced
- (void)removeCharactersInRange:(NSRange)range;	// 0x310ffd0d
- (void)removeCharactersInString:(id)string;	// 0x310ffa15
- (id)retain;	// 0x310d6cdd
- (unsigned)retainCount;	// 0x311273a5
@end
