/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityPeer;

@interface PFUbiquityRemotePeerState : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *peer;	// @dynamic
@property(retain, nonatomic) NSString *peerID;	// @dynamic
@property(retain, nonatomic) NSString *storeName;	// @dynamic
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
+ (id)remotePeerStatesMatchingStoreName:(id)name andPeerID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x31000251
+ (id)remotePeerStatesMatchingStoreName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x3100017d
- (id)initWithStoreName:(id)storeName andRemotePeerID:(id)anId insertIntoManagedObjectContext:(id)context;	// 0x310000d5
@end

