/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary, NSMigrationManager, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSMappingModel;

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
@property(retain) NSString *destinationConfiguration;	// G=0x35cb32fd; S=0x35cb330d; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x35cb3365; S=0x35cb3375; converted property
@property(retain) NSString *destinationType;	// G=0x35cb3295; S=0x35cb32a5; converted property
@property(retain) NSURL *destinationURL;	// G=0x35cb322d; S=0x35cb323d; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x35cb31c5; S=0x35cb31d5; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x35cb33cd; S=0x35cb33dd; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x35cb2f3d; S=0x35cb2f4d; converted property
@property(retain) NSArray *resourceBundles;	// G=0x35cb396d; S=0x35cb3929; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x35cb2ffd; S=0x35cb300d; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x35cb3065; S=0x35cb3075; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x35cb3135; S=0x35cb3145; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x35cb30cd; S=0x35cb30dd; converted property
@property(retain) NSURL *sourceURL;	// G=0x35cb2f5d; S=0x35cb2f6d; converted property
+ (int)migrationDebugLevel;	// 0x35cb2dd9
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x35cb22a5
+ (void)setMigrationDebugLevel:(int)level;	// 0x35cb2df5
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x35cb39b1
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x35cb38f1
- (void)dealloc;	// 0x35cb2c59
// converted property getter: - (id)destinationConfiguration;	// 0x35cb32fd
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x35cb37a5
- (id)destinationModel;	// 0x35cb319d
// converted property getter: - (id)destinationOptions;	// 0x35cb3365
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x35cb37b5
// converted property getter: - (id)destinationType;	// 0x35cb3295
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x35cb3795
// converted property getter: - (id)destinationURL;	// 0x35cb322d
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x35cb3695
- (void)didPerformMigrationWithManager:(id)manager;	// 0x35cb38e9
- (id)externalDataReferencesURLForDestination:(id)destination forStoreOfType:(id)type;	// 0x35cb3739
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x35cb38ed
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x35cb2a39
// converted property getter: - (id)mappingModel;	// 0x35cb31c5
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x35cb3435
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x35cb37c9
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x35cb2bdd
// converted property getter: - (id)migrationManager;	// 0x35cb33cd
// converted property getter: - (id)persistentStoreCoordinator;	// 0x35cb2f3d
// converted property getter: - (id)resourceBundles;	// 0x35cb396d
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x35cb330d
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x35cb3375
// converted property setter: - (void)setDestinationType:(id)type;	// 0x35cb32a5
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x35cb323d
// converted property setter: - (void)setMappingModel:(id)model;	// 0x35cb31d5
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x35cb33dd
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x35cb2f4d
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x35cb2e11
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x35cb3929
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x35cb300d
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x35cb3075
// converted property setter: - (void)setSourceModel:(id)model;	// 0x35cb3145
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x35cb30dd
// converted property setter: - (void)setSourceURL:(id)url;	// 0x35cb2f6d
// converted property getter: - (id)sourceConfiguration;	// 0x35cb2ffd
// converted property getter: - (id)sourceMetadata;	// 0x35cb3065
// converted property getter: - (id)sourceModel;	// 0x35cb3135
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x35cb23bd
// converted property getter: - (id)sourceOptions;	// 0x35cb30cd
- (id)sourceType;	// 0x35cb2fc5
// converted property getter: - (id)sourceURL;	// 0x35cb2f5d
- (void)willPerformMigrationWithManager:(id)manager;	// 0x35cb37c5
@end

