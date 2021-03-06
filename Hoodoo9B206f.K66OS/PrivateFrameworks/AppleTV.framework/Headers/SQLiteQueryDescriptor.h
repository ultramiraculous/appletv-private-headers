/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, SQLitePredicate;

__attribute__((visibility("hidden")))
@interface SQLiteQueryDescriptor : NSObject <NSCopying> {
@private
	Class _entityClass;	// 4 = 0x4
	int _limitCount;	// 8 = 0x8
	NSArray *_orderingDirections;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	SQLitePredicate *_predicate;	// 20 = 0x14
	BOOL _returnsDistinctEntities;	// 24 = 0x18
}
@property(assign, nonatomic) Class entityClass;	// G=0x3680fefd; S=0x3680ff0d; @synthesize=_entityClass
@property(assign, nonatomic) int limitCount;	// G=0x3680ff1d; S=0x3680ff2d; @synthesize=_limitCount
@property(copy, nonatomic) NSArray *orderingDirections;	// G=0x3680ff3d; S=0x3680ff4d; @synthesize=_orderingDirections
@property(copy, nonatomic) NSArray *orderingProperties;	// G=0x3680ff71; S=0x3680ff81; @synthesize=_orderingProperties
@property(copy, nonatomic) SQLitePredicate *predicate;	// G=0x3680ffa5; S=0x3680ffb5; @synthesize=_predicate
@property(assign, nonatomic) BOOL returnsDistinctEntities;	// G=0x3680ffd9; S=0x3680ffe9; @synthesize=_returnsDistinctEntities
- (id)_newSelectSQLWithProperties:(id)properties columns:(id)columns;	// 0x3680fa65
- (id)copyWithZone:(NSZone *)zone;	// 0x3680f981
- (void)dealloc;	// 0x3680f90d
// declared property getter: - (Class)entityClass;	// 0x3680fefd
// declared property getter: - (int)limitCount;	// 0x3680ff1d
// declared property getter: - (id)orderingDirections;	// 0x3680ff3d
// declared property getter: - (id)orderingProperties;	// 0x3680ff71
// declared property getter: - (id)predicate;	// 0x3680ffa5
// declared property getter: - (BOOL)returnsDistinctEntities;	// 0x3680ffd9
// declared property setter: - (void)setEntityClass:(Class)aClass;	// 0x3680ff0d
// declared property setter: - (void)setLimitCount:(int)count;	// 0x3680ff2d
// declared property setter: - (void)setOrderingDirections:(id)directions;	// 0x3680ff4d
// declared property setter: - (void)setOrderingProperties:(id)properties;	// 0x3680ff81
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x3680ffb5
// declared property setter: - (void)setReturnsDistinctEntities:(BOOL)entities;	// 0x3680ffe9
@end

