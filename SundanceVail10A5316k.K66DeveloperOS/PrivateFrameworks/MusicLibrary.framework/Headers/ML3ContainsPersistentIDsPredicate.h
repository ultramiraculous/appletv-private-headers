/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"


@interface ML3ContainsPersistentIDsPredicate : ML3Predicate {
@private
	long long *_persistentIDs;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
}
+ (id)predicateWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count;	// 0x346186b1
- (id)initWithCoder:(id)coder;	// 0x346187b5
- (id)initWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count;	// 0x346186f1
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346189c9
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34618a95
- (void)dealloc;	// 0x3461876d
- (void)encodeWithCoder:(id)coder;	// 0x34618869
- (unsigned)hash;	// 0x3461890d
- (BOOL)isEqual:(id)equal;	// 0x3461894d
@end
