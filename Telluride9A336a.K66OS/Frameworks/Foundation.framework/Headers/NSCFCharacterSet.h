/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableCharacterSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFCharacterSet : NSMutableCharacterSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x336aa5e1
- (void)addCharactersInRange:(NSRange)range;	// 0x336aa6b5
- (void)addCharactersInString:(id)string;	// 0x336aa6c5
- (BOOL)allowsWeakReference;	// 0x336aa571
- (id)bitmapRepresentation;	// 0x336aa65d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x336aa61d
- (Class)classForArchiver;	// 0x336aa6f1
- (Class)classForKeyedArchiver;	// 0x336aa731
- (id)copyWithZone:(NSZone *)zone;	// 0x336aa5e5
- (void)encodeWithCoder:(id)coder;	// 0x336aa741
- (void)finalize;	// 0x336aa59d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x336aa6dd
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x336aa6d5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x336aa64d
- (unsigned)hash;	// 0x336aa559
- (void)invert;	// 0x336aa6e5
- (id)invertedSet;	// 0x336aa689
- (BOOL)isEqual:(id)equal;	// 0x336aa541
- (BOOL)isSupersetOfSet:(id)set;	// 0x336aa63d
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x336aa62d
- (void)makeCharacterSetCompact;	// 0x336aa6e9
- (void)makeCharacterSetFast;	// 0x336aa6ed
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x336aa601
- (oneway void)release;	// 0x336aa56d
- (void)removeCharactersInRange:(NSRange)range;	// 0x336aa6bd
- (void)removeCharactersInString:(id)string;	// 0x336aa6cd
- (id)retain;	// 0x336aa55d
- (unsigned)retainCount;	// 0x336aa599
- (BOOL)retainWeakReference;	// 0x336aa585
@end
