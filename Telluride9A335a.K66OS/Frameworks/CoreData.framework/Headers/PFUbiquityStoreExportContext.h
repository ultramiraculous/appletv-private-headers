/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityPeer, NSSQLCore, _PFUbiquityStack, PFUbiquityLocation, NSMutableSet, NSSet, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreExportContext : NSObject {
@private
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	_PFUbiquityStack *_stack;	// 8 = 0x8
	PFUbiquityStoreMetadata *_storeMetadata;	// 12 = 0xc
	PFUbiquityPeer *_localPeer;	// 16 = 0x10
	NSMutableSet *_transactionEntries;	// 20 = 0x14
	NSSQLCore *_store;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) PFUbiquityPeer *localPeer;	// G=0x331f0ebd; @synthesize=_localPeer
@property(readonly, assign, nonatomic) _PFUbiquityStack *stack;	// G=0x331f0edd; @synthesize=_stack
@property(retain, nonatomic) NSSQLCore *store;	// G=0x331f0e9d; S=0x331f133d; @synthesize=_store
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// G=0x331f0ecd; @synthesize=_storeMetadata
@property(readonly, assign, nonatomic) NSSet *transactionEntries;	// G=0x331f0ead; @synthesize=_transactionEntries
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x331f0eed; @synthesize=_ubiquityRootLocation
- (id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location forLocalPeerID:(id)localPeerID withStack:(id)stack;	// 0x331f1661
- (id)addTransactionEntryForGlobalIDString:(id)globalIDString andLocalManagedObjectID:(id)anId andTransactionType:(int)type;	// 0x331f1365
- (void)dealloc;	// 0x331f1581
- (id)description;	// 0x331f14b1
// declared property getter: - (id)localPeer;	// 0x331f0ebd
// declared property setter: - (void)setStore:(id)store;	// 0x331f133d
// declared property getter: - (id)stack;	// 0x331f0edd
// declared property getter: - (id)store;	// 0x331f0e9d
// declared property getter: - (id)storeMetadata;	// 0x331f0ecd
// declared property getter: - (id)transactionEntries;	// 0x331f0ead
// declared property getter: - (id)ubiquityRootLocation;	// 0x331f0eed
@end

