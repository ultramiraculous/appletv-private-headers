/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSNumber, NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSSQLTableMigrationDescription : NSObject {
@private
	NSSQLEntity *_rootEntity;	// 4 = 0x4
	NSSQLEntity *_sourceRootEntity;	// 8 = 0x8
	int _migrationType;	// 12 = 0xc
	NSMutableArray *_addedEntityMigrations;	// 16 = 0x10
	NSMutableArray *_removedEntityMigrations;	// 20 = 0x14
	NSMutableArray *_copiedEntityMigrations;	// 24 = 0x18
	NSMutableArray *_transformedEntityMigrations;	// 28 = 0x1c
	NSMutableDictionary *_migrationByEntity;	// 32 = 0x20
	NSMutableArray *_addedManyToManys;	// 36 = 0x24
	NSMutableArray *_removedManyToManys;	// 40 = 0x28
	NSMutableArray *_transformedManyToManys;	// 44 = 0x2c
	NSMutableDictionary *_tempTableNames;	// 48 = 0x30
	NSNumber *_hasTransformedTableSchema;	// 52 = 0x34
}
@property(readonly, assign) int migrationType;	// G=0x31f348d1; @synthesize=_migrationType
@property(readonly, assign) NSSQLEntity *rootEntity;	// G=0x31f348c1; @synthesize=_rootEntity
- (id)initWithRootEntity:(id)rootEntity migrationType:(int)type;	// 0x31f348e1
- (id)_addedManyToManys;	// 0x31f34db5
- (BOOL)_hasTransformedTableSchema;	// 0x31f37ce5
- (id)_removedManyToManys;	// 0x31f35099
- (id)_retainedRemovedSubEntitiesOfEntity:(id)entity;	// 0x31f3537d
- (id)_sourceRootEntity;	// 0x31f349b1
- (id)_tempNameForTableName:(id)tableName;	// 0x31f34b11
- (id)_transformedManyToManys;	// 0x31f34ba9
- (void)addEntityMigrationDescription:(id)description;	// 0x31f37f89
- (void)appendStatementsToCompleteMigration:(id)completeMigration migrationContext:(NSSQLMigrationContext)context;	// 0x31f36be5
- (void)appendStatementsToPerformMigration:(id)performMigration migrationContext:(NSSQLMigrationContext)context;	// 0x31f36d65
- (void)appendStatementsToPrepareForMigration:(id)migration migrationContext:(NSSQLMigrationContext)context;	// 0x31f373f5
- (id)createFEKUpdateStatementsForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x31f35ff1
- (id)createInsertStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x31f363b5
- (id)createUpdateStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x31f35c19
- (void)dealloc;	// 0x31f381ed
// declared property getter: - (int)migrationType;	// 0x31f348d1
- (id)newCopyAndInsertStatementForToOne:(id)one toManyToMany:(id)many fromTableName:(id)tableName invertColumns:(BOOL)columns migrationContext:(NSSQLMigrationContext)context;	// 0x31f354c1
// declared property getter: - (id)rootEntity;	// 0x31f348c1
@end

