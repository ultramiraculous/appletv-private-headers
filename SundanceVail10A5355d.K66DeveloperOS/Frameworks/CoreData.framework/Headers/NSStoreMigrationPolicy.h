/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSArray, NSMigrationManager, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, NSMappingModel;

@interface NSStoreMigrationPolicy : NSObject {
	NSPersistentStoreCoordinator *_coordinator;	// 4 = 0x4
	NSURL *_sourceURL;	// 8 = 0x8
	NSString *_sourceConfiguration;	// 12 = 0xc
	NSDictionary *_sourceOptions;	// 16 = 0x10
	NSManagedObjectModel *_sourceModel;	// 20 = 0x14
	NSDictionary *_sourceMetadata;	// 24 = 0x18
	NSMappingModel *_mappingModel;	// 28 = 0x1c
	NSURL *_destinationURL;	// 32 = 0x20
	NSString *_destinationType;	// 36 = 0x24
	NSString *_destinationConfiguration;	// 40 = 0x28
	NSDictionary *_destinationOptions;	// 44 = 0x2c
	NSMigrationManager *_migrationManager;	// 48 = 0x30
	NSArray *_resourceBundles;	// 52 = 0x34
	long _workingWithSkewedSource;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	void *_reserved3;	// 64 = 0x40
	void *_reserved4;	// 68 = 0x44
}
@property(retain) NSString *destinationConfiguration;	// G=0x33552d5d; S=0x33552d6d; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x33552dc5; S=0x33552dd5; converted property
@property(retain) NSString *destinationType;	// G=0x33552cf5; S=0x33552d05; converted property
@property(retain) NSURL *destinationURL;	// G=0x33552c8d; S=0x33552c9d; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x33552c25; S=0x33552c35; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x33552e2d; S=0x33552e3d; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x3355299d; S=0x335529ad; converted property
@property(retain) NSArray *resourceBundles;	// G=0x335533cd; S=0x33553389; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x33552a5d; S=0x33552a6d; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x33552ac5; S=0x33552ad5; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x33552b95; S=0x33552ba5; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x33552b2d; S=0x33552b3d; converted property
@property(retain) NSURL *sourceURL;	// G=0x335529bd; S=0x335529cd; converted property
+ (int)migrationDebugLevel;	// 0x33552839
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x33551d75
+ (void)setMigrationDebugLevel:(int)level;	// 0x33552855
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x33553411
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x33553351
- (void)dealloc;	// 0x335526b9
// converted property getter: - (id)destinationConfiguration;	// 0x33552d5d
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x33553205
- (id)destinationModel;	// 0x33552bfd
// converted property getter: - (id)destinationOptions;	// 0x33552dc5
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x33553215
// converted property getter: - (id)destinationType;	// 0x33552cf5
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x335531f5
// converted property getter: - (id)destinationURL;	// 0x33552c8d
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x335530f5
- (void)didPerformMigrationWithManager:(id)manager;	// 0x33553349
- (id)externalDataReferencesURLForDestination:(id)destination forStoreOfType:(id)type;	// 0x33553199
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x3355334d
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x33552499
// converted property getter: - (id)mappingModel;	// 0x33552c25
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x33552e95
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x33553229
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x3355263d
// converted property getter: - (id)migrationManager;	// 0x33552e2d
// converted property getter: - (id)persistentStoreCoordinator;	// 0x3355299d
// converted property getter: - (id)resourceBundles;	// 0x335533cd
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x33552d6d
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x33552dd5
// converted property setter: - (void)setDestinationType:(id)type;	// 0x33552d05
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x33552c9d
// converted property setter: - (void)setMappingModel:(id)model;	// 0x33552c35
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x33552e3d
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x335529ad
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x33552871
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x33553389
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x33552a6d
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x33552ad5
// converted property setter: - (void)setSourceModel:(id)model;	// 0x33552ba5
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x33552b3d
// converted property setter: - (void)setSourceURL:(id)url;	// 0x335529cd
// converted property getter: - (id)sourceConfiguration;	// 0x33552a5d
// converted property getter: - (id)sourceMetadata;	// 0x33552ac5
// converted property getter: - (id)sourceModel;	// 0x33552b95
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x33551e1d
// converted property getter: - (id)sourceOptions;	// 0x33552b2d
- (id)sourceType;	// 0x33552a25
// converted property getter: - (id)sourceURL;	// 0x335529bd
- (void)willPerformMigrationWithManager:(id)manager;	// 0x33553225
@end

