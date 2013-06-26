/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSRecursiveLock, NSManagedObjectModel, NSMutableDictionary;

@interface PFUbiquityMetadataFactory : NSObject {
	NSMutableDictionary *_rootLocationToPeerIDToEntry;	// 4 = 0x4
	NSRecursiveLock *_rootLocationToPeerIDToEntryLock;	// 8 = 0x8
	NSManagedObjectModel *_cachedModel;	// 12 = 0xc
}
+ (void)initialize;	// 0x2d1c827d
+ (id)sharedFactory;	// 0x2d1c92f9
- (id)init;	// 0x2d1c82f1
- (void)addModelingToolUserInfoToEntity:(id)entity;	// 0x2d1ca5cd
- (void)addModelingToolUserInfoToProperty:(id)property;	// 0x2d1ca5c9
- (BOOL)cacheEntryForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location error:(id *)error;	// 0x2d1c8aed
- (id)createMetadataModel;	// 0x2d1c9465
- (void)dealloc;	// 0x2d1c839d
- (id)description;	// 0x2d1c842d
- (id)entryForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x2d1c898d
- (id)newAttributeNamed:(id)named attributeType:(unsigned)type isOptional:(BOOL)optional isTransient:(BOOL)transient withDefaultValue:(id)defaultValue andMinValue:(id)value andMaxValue:(id)value7;	// 0x2d1ca16d
- (id)newEntityForName:(id)name;	// 0x2d1ca0f5
- (id)newMetadataEntryForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location error:(id *)error;	// 0x2d1c86e5
- (id)newMetadataManagedObjectModel;	// 0x2d1c9309
- (id)newRelationshipNamed:(id)named withDestinationEntity:(id)destinationEntity andInverseRelationship:(id)relationship isOptional:(BOOL)optional isToMany:(BOOL)many andDeleteRule:(unsigned)rule;	// 0x2d1ca4b1
- (id)newStackForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location error:(id *)error;	// 0x2d1c8495
- (void)removeAllCoordinatorsForRootLocation:(id)rootLocation;	// 0x2d1c9171
- (void)removeCachedCoordinatorsForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x2d1c8ebd
@end
