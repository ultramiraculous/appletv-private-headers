/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSSQLCore;

@interface NSSQLGenerator : NSObject {
	NSSQLCore *_persistentStore;	// 4 = 0x4
}
+ (void)initialize;	// 0x2d063151
- (id)initWithPersistentStore:(id)persistentStore;	// 0x2d0631ad
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x2d11078d
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x2d11052d
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x2d11065d
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x2d11093d
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x2d1109bd
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x2d06fcf1
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x2d1108bd
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x2d06503d
- (void)generateOrderIntermediateInContext:(id)context;	// 0x2d0663dd
- (void)generateSelectIntermediateInContext:(id)context;	// 0x2d065b85
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x2d0656fd
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x2d063581
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x2d0631ed
- (id)predicateForFetchRequestInContext:(id)context;	// 0x2d063af9
@end
