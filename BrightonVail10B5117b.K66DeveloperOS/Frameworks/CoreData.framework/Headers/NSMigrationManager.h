/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSError, NSManagedObjectContext, NSDictionary, NSMigrationContext, NSManagedObjectModel, NSMappingModel;

@interface NSMigrationManager : NSObject {
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSDictionary *_sourceEntitiesByVersionHash;	// 8 = 0x8
	NSManagedObjectModel *_destinationModel;	// 12 = 0xc
	NSDictionary *_destinationEntitiesByVersionHash;	// 16 = 0x10
	NSMappingModel *_mappingModel;	// 20 = 0x14
	NSManagedObjectContext *_sourceManagedObjectContext;	// 24 = 0x18
	NSManagedObjectContext *_destinationManagedObjectContext;	// 28 = 0x1c
	NSMigrationContext *_migrationContext;	// 32 = 0x20
	NSDictionary *_userInfo;	// 36 = 0x24
	migrationManagerFlags _migrationManagerFlags;	// 40 = 0x28
	NSError *_migrationCancellationError;	// 44 = 0x2c
	id _reserved1;	// 48 = 0x30
	id _reserved2;	// 52 = 0x34
	id _reserved3;	// 56 = 0x38
	id _reserved4;	// 60 = 0x3c
}
@property(readonly, retain) NSManagedObjectModel *destinationModel;	// G=0x30f7189d; converted property
@property(readonly, retain) NSMappingModel *mappingModel;	// G=0x30f7187d; converted property
@property(readonly, retain) NSManagedObjectModel *sourceModel;	// G=0x30f7188d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x30f727b5; S=0x30f727c5; converted property
@property(assign) BOOL usesStoreSpecificMigrationManager;	// G=0x30f72879; S=0x30f72861; converted property
+ (BOOL)_performSanityCheckForMapping:(id)mapping fromSourceModel:(id)sourceModel toDestinationModel:(id)destinationModel;	// 0x30f72a71
+ (int)migrationDebugLevel;	// 0x30f7288d
+ (void)setMigrationDebugLevel:(int)level;	// 0x30f728a9
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x30f713d9
- (void)_doCleanupOnFailure:(id)failure;	// 0x30f73b99
- (BOOL)_doFirstPassForMapping:(id)mapping error:(id *)error;	// 0x30f72cc9
- (BOOL)_doSecondPassForMapping:(id)mapping error:(id *)error;	// 0x30f73215
- (BOOL)_doThirdPassForMapping:(id)mapping error:(id *)error;	// 0x30f7383d
- (id)_evaluateSourceExpressionForMapping:(id)mapping entityPolicy:(id)policy;	// 0x30f72bf5
- (id)_mappingNamed:(id)named;	// 0x30f72a35
- (BOOL)_migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x30f74131
- (id)_migrationContext;	// 0x30f72a25
- (BOOL)_validateAllObjectsAfterMigration:(id *)migration;	// 0x30f73c31
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x30f71945
- (void)cancelMigrationWithError:(id)error;	// 0x30f72809
- (id)currentEntityMapping;	// 0x30f726d9
- (id)currentPropertyMapping;	// 0x30f72701
- (void)dealloc;	// 0x30f71565
- (id)destinationContext;	// 0x30f718bd
- (id)destinationEntityForEntityMapping:(id)entityMapping;	// 0x30f71909
- (id)destinationInstancesForEntityMappingNamed:(id)entityMappingNamed sourceInstances:(id)instances;	// 0x30f719b9
- (id)destinationInstancesForSourceRelationshipNamed:(id)sourceRelationshipNamed sourceInstances:(id)instances;	// 0x30f71cf5
// converted property getter: - (id)destinationModel;	// 0x30f7189d
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string;	// 0x30f72a01
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string includesSubentities:(BOOL)subentities;	// 0x30f728c5
// converted property getter: - (id)mappingModel;	// 0x30f7187d
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x30f71639
- (float)migrationProgress;	// 0x30f72729
- (void)reset;	// 0x30f7185d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x30f727c5
// converted property setter: - (void)setUsesStoreSpecificMigrationManager:(BOOL)manager;	// 0x30f72861
- (id)sourceContext;	// 0x30f718ad
- (id)sourceEntityForEntityMapping:(id)entityMapping;	// 0x30f718cd
- (id)sourceInstancesForEntityMappingNamed:(id)entityMappingNamed destinationInstances:(id)instances;	// 0x30f7239d
// converted property getter: - (id)sourceModel;	// 0x30f7188d
// converted property getter: - (id)userInfo;	// 0x30f727b5
// converted property getter: - (BOOL)usesStoreSpecificMigrationManager;	// 0x30f72879
@end
