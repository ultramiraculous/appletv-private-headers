/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableDictionary, PFUbiquityMetadataQueryMonitor;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboard : NSObject {
@private
	PFUbiquityMetadataQueryMonitor *_queryMonitor;	// 4 = 0x4
	NSMutableDictionary *_rootPathToEntry;	// 8 = 0x8
	NSRecursiveLock *_registrationLock;	// 12 = 0xc
}
+ (void)initialize;	// 0x32c096c5
+ (id)sharedSwitchboard;	// 0x32c09589
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)uuid inStore:(id)store;	// 0x32c0968d
+ (id)urlForUbiquitousExternalReferenceLocation:(id)ubiquitousExternalReferenceLocation;	// 0x32c09661
- (id)init;	// 0x32c09599
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)persistentStoreName andLocalPeerID:(id)anId atUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c09895
- (void)dealloc;	// 0x32c0a209
- (id)description;	// 0x32c0a19d
- (id)entryForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x32c0a051
- (void)registerUbiquitizedPersistentStore:(id)store forLocalPeerID:(id)localPeerID;	// 0x32c09c91
- (void)releaseAllEntriesForRootLocation:(id)rootLocation andPeer:(id)peer;	// 0x32c0971d
- (void)unregisterCoordinator:(id)coordinator;	// 0x32c099b9
@end
