/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMigrationManager, NSManagedObjectModel, NSArray, NSString, NSPersistentStoreCoordinator, NSMappingModel, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSStoreMigrationPolicy : NSObject {
@private
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
	void *_reserved1;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	void *_reserved3;	// 64 = 0x40
	void *_reserved4;	// 68 = 0x44
}
@property(retain) NSString *destinationConfiguration;	// G=0x3401b219; S=0x3401b9a1; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x3401b229; S=0x3401b9fd; converted property
@property(retain) NSString *destinationType;	// G=0x3401b209; S=0x3401b945; converted property
@property(retain) NSURL *destinationURL;	// G=0x3401b1f9; S=0x3401b8e9; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x3401b1e9; S=0x3401b88d; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x3401b239; S=0x3401ba59; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x3401b179; S=0x3401b189; converted property
@property(retain) NSArray *resourceBundles;	// G=0x3401bee1; S=0x3401be99; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x3401b1a9; S=0x3401b6f5; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x3401b1b9; S=0x3401b751; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x3401b1d9; S=0x3401b809; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x3401b1c9; S=0x3401b7ad; converted property
@property(retain) NSURL *sourceURL;	// G=0x3401b199; S=0x3401b661; converted property
+ (int)migrationDebugLevel;	// 0x3401bf25
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x3401b471
+ (void)setMigrationDebugLevel:(int)level;	// 0x3401bf41
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x3401c525
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x3401be5d
- (void)dealloc;	// 0x3401c38d
// converted property getter: - (id)destinationConfiguration;	// 0x3401b219
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3401bd7d
- (id)destinationModel;	// 0x3401b865
// converted property getter: - (id)destinationOptions;	// 0x3401b229
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3401bd8d
// converted property getter: - (id)destinationType;	// 0x3401b209
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3401bd6d
// converted property getter: - (id)destinationURL;	// 0x3401b1f9
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x3401bcc1
- (void)didPerformMigrationWithManager:(id)manager;	// 0x3401b24d
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x3401b251
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3401b255
// converted property getter: - (id)mappingModel;	// 0x3401b1e9
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3401bab5
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x3401bd9d
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x3401b3fd
// converted property getter: - (id)migrationManager;	// 0x3401b239
// converted property getter: - (id)persistentStoreCoordinator;	// 0x3401b179
// converted property getter: - (id)resourceBundles;	// 0x3401bee1
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x3401b9a1
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x3401b9fd
// converted property setter: - (void)setDestinationType:(id)type;	// 0x3401b945
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x3401b8e9
// converted property setter: - (void)setMappingModel:(id)model;	// 0x3401b88d
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x3401ba59
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x3401b189
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x3401b52d
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x3401be99
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x3401b6f5
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x3401b751
// converted property setter: - (void)setSourceModel:(id)model;	// 0x3401b809
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x3401b7ad
// converted property setter: - (void)setSourceURL:(id)url;	// 0x3401b661
// converted property getter: - (id)sourceConfiguration;	// 0x3401b1a9
// converted property getter: - (id)sourceMetadata;	// 0x3401b1b9
// converted property getter: - (id)sourceModel;	// 0x3401b1d9
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x3401bf5d
// converted property getter: - (id)sourceOptions;	// 0x3401b1c9
- (id)sourceType;	// 0x3401b6bd
// converted property getter: - (id)sourceURL;	// 0x3401b199
- (void)willPerformMigrationWithManager:(id)manager;	// 0x3401b249
@end

