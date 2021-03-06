/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"
#import "MusicLibrary-Structs.h"


@interface ML3ContainsPersistentIDsPredicate : ML3Predicate {
@private
	long long *_persistentIDs;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
}
+ (id)predicateWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count;	// 0x3181a629
- (id)initWithCoder:(id)coder;	// 0x3181b5bd
- (id)initWithPersistentIDs:(long long *)persistentIDs count:(unsigned)count;	// 0x3181b65d
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3181a509
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x3181b4b9
- (void)dealloc;	// 0x3181b6d1
- (void)encodeWithCoder:(id)coder;	// 0x3181a5ad
- (unsigned)hash;	// 0x31819ca1
- (BOOL)isEqual:(id)equal;	// 0x3181b715
@end

