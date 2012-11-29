/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, PFUbiquityLocation, NSManagedObjectModel, PFUbiquityStoreMetadata;

@interface PFUbiquityMigrationManager : NSObject {
	NSManagedObjectModel *_destinationModel;	// 4 = 0x4
	NSManagedObjectModel *_sourceModel;	// 8 = 0x8
	PFUbiquityLocation *_rootLocation;	// 12 = 0xc
	PFUbiquityStoreMetadata *_storeMetadata;	// 16 = 0x10
	NSString *_localPeerID;	// 20 = 0x14
}
@property(readonly, assign) NSManagedObjectModel *destinationModel;	// G=0x33e53cf9; @synthesize=_destinationModel
@property(readonly, assign) PFUbiquityLocation *rootLocation;	// G=0x33e53cd1; @synthesize=_rootLocation
@property(readonly, assign) NSManagedObjectModel *sourceModel;	// G=0x33e53ce5; @synthesize=_sourceModel
@property(readonly, assign) PFUbiquityStoreMetadata *storeMetadata;	// G=0x33e53d0d; @synthesize=_storeMetadata
- (id)initWithDestinationModel:(id)destinationModel sourceModel:(id)model ubiquityRootLocation:(id)location localPeerID:(id)anId;	// 0x33e5295d
- (id)initWithDestinationModel:(id)destinationModel storeMetadata:(id)metadata ubiquityRootLocation:(id)location localPeerID:(id)anId;	// 0x33e5286d
- (void)dealloc;	// 0x33e52a31
// declared property getter: - (id)destinationModel;	// 0x33e53cf9
- (BOOL)migrateTransactionLogs:(BOOL)logs andBaselineIfNecessaryForStoreName:(id)storeName peerID:(id)anId error:(id *)error;	// 0x33e52af1
// declared property getter: - (id)rootLocation;	// 0x33e53cd1
// declared property getter: - (id)sourceModel;	// 0x33e53ce5
// declared property getter: - (id)storeMetadata;	// 0x33e53d0d
@end
