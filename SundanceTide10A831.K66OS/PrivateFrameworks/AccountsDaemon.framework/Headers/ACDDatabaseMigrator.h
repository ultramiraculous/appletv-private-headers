/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, ACDDatabase, NSPersistentStoreCoordinator;

@interface ACDDatabaseMigrator : NSObject {
	NSManagedObjectContext *_migrationContext;	// 4 = 0x4
	NSPersistentStoreCoordinator *_coordinator;	// 8 = 0x8
	ACDDatabase *_database;	// 12 = 0xc
}
- (id)initForDatabase:(id)database;	// 0x314ecdf9
- (void).cxx_destruct;	// 0x314ede01
- (id)_compatibleModelForStoreAtURL:(id)url;	// 0x314edaa1
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(int)modelVersion;	// 0x314ed349
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(int)modelVersion;	// 0x314ed0ad
- (id)_setUpContextForMigration;	// 0x314ed661
- (int)_versionForModel:(id)model;	// 0x314edda5
- (BOOL)run;	// 0x314ece61
@end
