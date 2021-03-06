/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSManagedObjectContext, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

@interface _PFUbiquityStack : NSObject {
	NSManagedObjectContext *_metadataMOC;	// 4 = 0x4
	PFUbiquityMetadataFactoryEntry *_metadataEntry;	// 8 = 0x8
	NSString *_localPeerID;	// 12 = 0xc
	PFUbiquityLocation *_ubiquityRootURL;	// 16 = 0x10
	PFUbiquityLocation *_metadataStoreFileLocation;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x33dd6231; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) PFUbiquityMetadataFactoryEntry *metadataEntry;	// G=0x33dd6221; @synthesize=_metadataEntry
@property(readonly, assign, nonatomic) NSManagedObjectContext *metadataMOC;	// G=0x33dd6211; @synthesize=_metadataMOC
@property(readonly, assign, nonatomic) PFUbiquityLocation *metadataStoreFileLocation;	// G=0x33dd6251; @synthesize=_metadataStoreFileLocation
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootURL;	// G=0x33dd6241; @synthesize=_ubiquityRootURL
+ (id)defaultUbiquityLocationForBundleIdentifier:(id)bundleIdentifier createIfMissing:(BOOL)missing;	// 0x33dd5c9d
+ (id)defaultUbiquityLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier createIfMissing:(BOOL)missing;	// 0x33dd5bd1
+ (id)defaultUbiquityRootLocation;	// 0x33dd5d75
+ (BOOL)shouldRecoverStackMetadataForStore:(id)store withLocalPeerID:(id)localPeerID;	// 0x33dd5ecd
- (id)init;	// 0x33dd4d31
- (id)initWithMetadataEntry:(id)metadataEntry;	// 0x33dd4d35
- (id)allPeers;	// 0x33dd59ad
- (void)dealloc;	// 0x33dd4f7d
- (id)description;	// 0x33dd503d
- (id)importStateForStoreName:(id)storeName andPeerID:(id)anId;	// 0x33dd5a29
- (id)importStatesMatchingStoreName:(id)name;	// 0x33dd5b1d
// declared property getter: - (id)localPeerID;	// 0x33dd6231
// declared property getter: - (id)metadataEntry;	// 0x33dd6221
// declared property getter: - (id)metadataMOC;	// 0x33dd6211
// declared property getter: - (id)metadataStoreFileLocation;	// 0x33dd6251
- (id)peerForPeerID:(id)peerID createIfMissing:(BOOL)missing;	// 0x33dd59e5
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id *)error;	// 0x33dd50e1
- (BOOL)purgeMetadataForStoreMetadata:(id)storeMetadata withError:(id *)error;	// 0x33dd56c1
// declared property getter: - (id)ubiquityRootURL;	// 0x33dd6241
@end

