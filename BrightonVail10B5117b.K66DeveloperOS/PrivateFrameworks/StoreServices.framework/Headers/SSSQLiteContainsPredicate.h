/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSQLitePropertyPredicate.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class SSSQLiteQuery, NSArray, NSString;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {
	BOOL _negative;	// 8 = 0x8
	SSSQLiteQuery *_query;	// 12 = 0xc
	NSString *_queryProperty;	// 16 = 0x10
	id _values;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isNegative) BOOL negative;	// G=0x356e6e65; @synthesize=_negative
@property(readonly, assign, nonatomic) SSSQLiteQuery *query;	// G=0x356e6e75; @synthesize=_query
@property(readonly, assign, nonatomic) NSString *queryProperty;	// G=0x356e6e85; @synthesize=_queryProperty
@property(readonly, assign, nonatomic) NSArray *values;	// G=0x356e6e95; @synthesize=_values
+ (id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3;	// 0x356e69b1
+ (id)containsPredicateWithProperty:(id)property values:(id)values;	// 0x356e6911
+ (id)doesNotContainPredicateWithProperty:(id)property values:(id)values;	// 0x356e6a71
- (id)SQLForEntityClass:(Class)entityClass;	// 0x356e6d11
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x356e6b21
- (id)copyWithZone:(NSZone *)zone;	// 0x356e6b11
- (void)dealloc;	// 0x356e6899
- (BOOL)isEqual:(id)equal;	// 0x356e6c11
// declared property getter: - (BOOL)isNegative;	// 0x356e6e65
// declared property getter: - (id)query;	// 0x356e6e75
// declared property getter: - (id)queryProperty;	// 0x356e6e85
// declared property getter: - (id)values;	// 0x356e6e95
@end
