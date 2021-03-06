/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreCache.h"
#import "CoreData-Structs.h"

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache : NSPersistentStoreCache {
@private
	NSSQLCore *_sqlCore;	// 12 = 0xc
	int _debug;	// 16 = 0x10
}
+ (void)initialize;	// 0x36258b15
- (id)initWithSQLCore:(id)sqlcore;	// 0x36239c29
- (id)adapter;	// 0x36307bb5
- (void)dealloc;	// 0x36250ec5
- (void)forgetRowForObjectID:(NSScalarObjectID *)objectID;	// 0x36307ba5
- (void)registerRow:(id)row forObjectID:(NSScalarObjectID *)objectID;	// 0x36307b81
- (void)registerSnapshots:(id)snapshots;	// 0x36307a6d
- (void)registerToMany:(id)many forSourceObjectID:(NSScalarObjectID *)sourceObjectID relationshipName:(id)name andTimestamp:(double)timestamp;	// 0x36307b55
- (id)rowForObjectID:(id)objectID;	// 0x36307a39
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x3624be09
- (id)toManyForSourceObjectID:(id)sourceObjectID relationshipName:(id)name after:(double)after;	// 0x36307b45
@end

