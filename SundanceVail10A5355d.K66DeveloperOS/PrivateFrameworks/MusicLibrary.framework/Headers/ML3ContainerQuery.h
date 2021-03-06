/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSArray, ML3Container, ML3Predicate;

@interface ML3ContainerQuery : ML3Query {
	ML3Predicate *_containerPredicate;	// 32 = 0x20
	ML3Container *_container;	// 36 = 0x24
}
@property(readonly, assign) ML3Container *container;	// G=0x3548be21; @synthesize=_container
@property(readonly, assign) NSArray *limitedPersistentIDs;	// G=0x3548b4d9; 
@property(readonly, assign) BOOL requiresSmartLimiting;	// G=0x35452605; 
- (id)initWithCoder:(id)coder;	// 0x3548b1a9
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x3548ad99
- (void).cxx_destruct;	// 0x3548be35
// declared property getter: - (id)container;	// 0x3548be21
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x3548bae1
- (unsigned)countOfEntities;	// 0x3548bd61
- (void)encodeWithCoder:(id)coder;	// 0x3548b2e5
- (BOOL)hasEntities;	// 0x3548b87d
// declared property getter: - (id)limitedPersistentIDs;	// 0x3548b4d9
// declared property getter: - (BOOL)requiresSmartLimiting;	// 0x35452605
- (id)selectLimitingSQL;	// 0x3548b411
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x35452015
@end

