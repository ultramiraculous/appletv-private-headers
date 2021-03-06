/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, NSDate, PFUbiquityStoreMetadata, NSURL, PFUbiquityPeer;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionEntry : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *actingPeer;	// @dynamic
@property(retain, nonatomic) NSString *globalIDStr;	// @dynamic
@property(retain, nonatomic) NSString *knowledgeVectorString;	// @dynamic
@property(retain, nonatomic) NSString *localIDStr;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// @dynamic
@property(retain, nonatomic) NSDate *transactionDate;	// @dynamic
@property(retain, nonatomic) NSString *transactionLogFilename;	// @dynamic
@property(readonly, assign) NSURL *transactionLogURL;	// G=0x32e1e0a9; 
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
@property(assign) int transactionType;	// G=0x32e1e019; S=0x32e1e045; 
@property(retain, nonatomic) NSNumber *transactionTypeNum;	// @dynamic
+ (BOOL)canMergeKnowledgeVector:(id)vector withKnowledgeVector:(id)knowledgeVector;	// 0x32e1ebf5
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)vector toKnowledgeVector:(id)knowledgeVector;	// 0x32e1e53d
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)peerDictionary;	// 0x32e1e82d
+ (id)createPeerCodeDictionaryFromVector:(id)vector;	// 0x32e1eacd
+ (id)createSumForKnowlegeVectorString:(id)knowlegeVectorString;	// 0x32e1e9ad
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)compressedObjectIDs withTransactionType:(int)transactionType withImportContext:(id)importContext;	// 0x32e1e401
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)compressedGlobalID withTransactionType:(int)transactionType importContext:(id)context;	// 0x32e1e1b1
+ (id)transactionEntriesAfterPeerState:(id)state forStoreName:(id)storeName inManagedObjectContext:(id)managedObjectContext;	// 0x32e1efa5
+ (id)transactionEntriesForGlobalIDStrings:(id)globalIDStrings beforePeerState:(id)state inManagedObjectContext:(id)managedObjectContext;	// 0x32e1f295
+ (id)transactionEntriesForPeerID:(id)peerID beforeTransacationNumber:(id)number forStoreNamed:(id)storeNamed inManagedObjectContext:(id)managedObjectContext;	// 0x32e1f71d
+ (id)transactionEntriesForPeerID:(id)peerID withTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x32e1f5bd
+ (id)transactionEntriesMatchingGlobalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x32e1eded
+ (id)transactionEntriesMatchingLocalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x32e1eec9
+ (id)transactionEntryForGlobalIDString:(id)globalIDString withActingPeerID:(id)actingPeerID atTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x32e1f87d
- (id)initAndInsertIntoManagedObjectContext:(id)context;	// 0x32e1dfbd
// declared property setter: - (void)setTransactionType:(int)type;	// 0x32e1e045
// declared property getter: - (id)transactionLogURL;	// 0x32e1e0a9
// declared property getter: - (int)transactionType;	// 0x32e1e019
@end

