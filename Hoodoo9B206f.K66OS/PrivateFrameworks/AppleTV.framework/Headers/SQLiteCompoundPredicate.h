/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "SQLitePredicate.h"
#import "NSCopying.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying> {
@private
	NSString *_combinationOperation;	// 4 = 0x4
	NSArray *_predicates;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *predicates;	// G=0x3680e965; @synthesize=_predicates
+ (id)predicateMatchingAllPredicates:(id)predicates;	// 0x3680e2f5
+ (id)predicateMatchingAnyPredicates:(id)predicates;	// 0x3680e37d
+ (id)predicateWithProperty:(id)property values:(id)values comparisonType:(int)type;	// 0x3680e405
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3680e709
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x3680e879
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x3680e52d
- (id)copyWithZone:(NSZone *)zone;	// 0x3680e51d
- (void)dealloc;	// 0x3680e295
- (unsigned)hash;	// 0x3680e5d9
- (BOOL)isEqual:(id)equal;	// 0x3680e649
// declared property getter: - (id)predicates;	// 0x3680e965
@end

