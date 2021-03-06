/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface PFUbiquityKnowledgeVector : NSObject <NSCoding> {
@private
	NSDictionary *_kv;	// 4 = 0x4
	NSNumber *_sum;	// 8 = 0x8
	unsigned _hash;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x32c294c9; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x32c2a821; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x32c294d9; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x32c29591
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x32c296bd
- (id)init;	// 0x32c2afc1
- (id)initWithCoder:(id)coder;	// 0x32c2aa99
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x32c294e9
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x32c2ae95
- (id)initWithPeerStatesFromStoreMetadata:(id)storeMetadata;	// 0x32c2abdd
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x32c2ad59
- (void)_updateHash;	// 0x32c2a691
- (void)_updateSum;	// 0x32c2a6ed
- (id)allPeerIDs;	// 0x32c2a0c5
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x32c297a1
- (int)compare:(id)compare;	// 0x32c2a8f1
- (id)copyWithZone:(NSZone *)zone;	// 0x32c2954d
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x32c29a89
- (id)createKnowledgeVectorString;	// 0x32c2a109
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x32c2a04d
- (void)dealloc;	// 0x32c2ab65
- (id)description;	// 0x32c2aad5
- (void)encodeWithCoder:(id)coder;	// 0x32c2aa69
// declared property getter: - (unsigned)hash;	// 0x32c294c9
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x32c2a391
- (BOOL)isDescendantOfKnowledgeVector:(id)knowledgeVector;	// 0x32c2a511
- (BOOL)isEqual:(id)equal;	// 0x32c2a859
- (BOOL)isZeroVector;	// 0x32c2a2c9
// declared property getter: - (unsigned)length;	// 0x32c2a821
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x32c29e69
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x32c29971
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x32c29c4d
// declared property getter: - (id)sum;	// 0x32c294d9
- (id)transactionNumberForPeerID:(id)peerID;	// 0x32c2a0e5
@end

