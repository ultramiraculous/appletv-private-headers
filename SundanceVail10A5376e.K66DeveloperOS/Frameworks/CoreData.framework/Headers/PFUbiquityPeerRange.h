/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityStoreMetadata, PFUbiquityPeer;

@interface PFUbiquityPeerRange : NSManagedObject {
}
@property(retain, nonatomic) NSNumber *end;	// @dynamic
@property(retain, nonatomic) PFUbiquityPeer *peer;	// @dynamic
@property(retain, nonatomic) NSNumber *peerEnd;	// @dynamic
@property(retain, nonatomic) NSString *peerEntityName;	// @dynamic
@property(retain, nonatomic) NSNumber *peerStart;	// @dynamic
@property(retain, nonatomic) NSNumber *start;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// @dynamic
+ (id)createArrayOfRangesForAllUnmappedObjectsInStoreWithStoreMetadata:(id)storeMetadata withLocalPeerID:(id)localPeerID;	// 0x35cf0091
+ (id)fakeManagedObjectURIForStoreMetadata:(id)storeMetadata entityName:(id)name andPrimaryKey:(id)key;	// 0x35ceffed
+ (id)peerRangeForLocalPrimaryKey:(unsigned)localPrimaryKey inStoreNamed:(id)storeNamed andEntityName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x35cefe0d
- (id)createBaselineDictionary;	// 0x35cefae5
- (void)loadFromBaselineDictionary:(id)baselineDictionary;	// 0x35cefbe9
- (void)loadFromStoreMetadataDictionary:(id)storeMetadataDictionary;	// 0x35cefcc9
@end

