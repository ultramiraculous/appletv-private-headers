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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x310645d1
- (void)addCharactersInRange:(NSRange)range;	// 0x310646a5
- (void)addCharactersInString:(id)string;	// 0x310646b5
- (BOOL)allowsWeakReference;	// 0x31064561
- (id)bitmapRepresentation;	// 0x3106464d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x3106460d
- (Class)classForArchiver;	// 0x310646e1
- (Class)classForKeyedArchiver;	// 0x31064721
- (id)copyWithZone:(NSZone *)zone;	// 0x310645d5
- (void)encodeWithCoder:(id)coder;	// 0x31064731
- (void)finalize;	// 0x3106458d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x310646cd
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x310646c5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x3106463d
- (unsigned)hash;	// 0x31064549
- (void)invert;	// 0x310646d5
- (id)invertedSet;	// 0x31064679
- (BOOL)isEqual:(id)equal;	// 0x31064531
- (BOOL)isSupersetOfSet:(id)set;	// 0x3106462d
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x3106461d
- (void)makeCharacterSetCompact;	// 0x310646d9
- (void)makeCharacterSetFast;	// 0x310646dd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310645f1
- (oneway void)release;	// 0x3106455d
- (void)removeCharactersInRange:(NSRange)range;	// 0x310646ad
- (void)removeCharactersInString:(id)string;	// 0x310646bd
- (id)retain;	// 0x3106454d
- (unsigned)retainCount;	// 0x31064589
- (BOOL)retainWeakReference;	// 0x31064575
@end

