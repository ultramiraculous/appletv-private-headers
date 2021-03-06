/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSSet, NSManagedObjectModel, NSMappingModel;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogMigrator : NSObject {
@private
	NSManagedObjectModel *_srcModel;	// 4 = 0x4
	NSManagedObjectModel *_dstModel;	// 8 = 0x8
	NSMappingModel *_mappingModel;	// 12 = 0xc
	NSDictionary *_mappingsByEntityName;	// 16 = 0x10
	NSSet *_removedEntities;	// 20 = 0x14
	BOOL _throttleLogs;	// 24 = 0x18
}
@property(readonly, assign) BOOL throttleLogs;	// G=0x32c1e2a5; @synthesize=_throttleLogs
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model mappingModel:(id)model3;	// 0x32c1e2e5
- (id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)sourceGlobalObjectID;	// 0x32c1eb7d
- (id)createDestinationObjectContentFromSourceObjectContent:(id)sourceObjectContent withEntityMapping:(id)entityMapping migrationContext:(id)context;	// 0x32c1e439
- (id)createDestinationObjectsFromSourceObjects:(id)sourceObjects migrationContext:(id)context;	// 0x32c1e391
- (void)dealloc;	// 0x32c1f831
- (BOOL)migrateBaselineFromLocation:(id)location toLocation:(id)location2 error:(id *)error;	// 0x32c1e2a1
- (BOOL)migrateTransactionLogFromLocation:(id)location toLocation:(id)location2 error:(id *)error;	// 0x32c1ec5d
- (BOOL)migrateTransactionLogsForStoreName:(id)storeName andLocalPeerID:(id)anId atUbiquityRootLocation:(id)ubiquityRootLocation error:(id *)error;	// 0x32c1f24d
- (void)populateMappingsByEntityName;	// 0x32c1f551
// declared property getter: - (BOOL)throttleLogs;	// 0x32c1e2a5
@end

