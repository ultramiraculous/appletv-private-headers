/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSManagedObjectModel, NSPersistentStoreCoordinator, PersistentStoreConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface PersistentStore : NSObject {
@private
	PersistentStoreConfiguration *_configuration;	// 4 = 0x4
	NSManagedObjectModel *_model;	// 8 = 0x8
	NSPersistentStoreCoordinator *_storeCoordinator;	// 12 = 0xc
	NSString *_threadContextKey;	// 16 = 0x10
	NSString *_threadCountKey;	// 20 = 0x14
}
@property(readonly, assign) PersistentStoreConfiguration *configuration;	// G=0x33be0e81; 
@property(readonly, assign) NSURL *databaseFileURL;	// G=0x33be0eb9; 
@property(readonly, assign) NSURL *modelFileURL;	// G=0x33be1071; 
- (id)init;	// 0x33be08f9
- (id)initWithConfiguration:(id)configuration error:(id *)error;	// 0x33be090d
- (id)_baseFilePath;	// 0x33be18bd
- (BOOL)_loadStoreCoordinatorWithIntegrityCheck:(BOOL)integrityCheck error:(id *)error;	// 0x33be18f5
- (id)_newLegacyManagedObjectModel;	// 0x33be1a15
- (id)beginThreadContextSession;	// 0x33be0b3d
- (void)checkIntegrityWithInitializationBlock:(id)initializationBlock;	// 0x33be0d09
// declared property getter: - (id)configuration;	// 0x33be0e81
// declared property getter: - (id)databaseFileURL;	// 0x33be0eb9
- (void)dealloc;	// 0x33be0aa1
- (void)endThreadContextSession;	// 0x33be0f2d
- (BOOL)loadStoreCoordinatorWithOptions:(id)options error:(id *)error;	// 0x33be1511
- (id)managedObjectModel;	// 0x33be17e5
// declared property getter: - (id)modelFileURL;	// 0x33be1071
- (BOOL)performLightweightMigration:(id *)migration;	// 0x33be10e5
- (BOOL)resetStore:(id *)store;	// 0x33be13a5
@end

