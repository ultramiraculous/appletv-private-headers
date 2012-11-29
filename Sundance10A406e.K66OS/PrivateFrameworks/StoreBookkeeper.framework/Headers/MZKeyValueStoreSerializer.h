/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreSerializer : NSObject {
	MZKeyValueStoreTransaction *_transaction;	// 4 = 0x4
}
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x35f83e6d; S=0x35f83e7d; @synthesize=_transaction
- (id)initWithTransaction:(id)transaction;	// 0x35f8356d
- (BOOL)_isGetAllSinceDomainVersionRequest;	// 0x35f83975
- (BOOL)_isRemoveAllSinceDomainVersion;	// 0x35f839c1
- (id)baseDictionary;	// 0x35f83a0d
- (id)dataWithNodes:(id)nodes;	// 0x35f83b21
- (void)dealloc;	// 0x35f835c1
- (id)keys;	// 0x35f83c95
- (MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)key;	// 0x35f83d79
- (id)payload;	// 0x35f83611
- (id)payloadWithNode:(id)node;	// 0x35f83d39
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x35f83e7d
- (id)sinceDomainVersion;	// 0x35f838d1
// declared property getter: - (id)transaction;	// 0x35f83e6d
@end
