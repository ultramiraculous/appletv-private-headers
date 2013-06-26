/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class SBKSyncTransaction;

@interface SBKSyncRequestData : NSObject {
	SBKSyncTransaction *_transaction;	// 4 = 0x4
}
@property(readonly, assign) SBKSyncTransaction *transaction;	// G=0x327b01a1; @synthesize=_transaction
+ (id)serializablePropertyListPayloadWithTransaction:(id)transaction;	// 0x327af785
- (id)initWithTransaction:(id)transaction;	// 0x327af7ed
- (void).cxx_destruct;	// 0x327b01b5
- (BOOL)_needsConflictDetection;	// 0x327aff0d
- (id)_serializableConflictDetectionOrdinalForKey:(id)key;	// 0x327afe49
- (id)_serializableConflictDetectionValue;	// 0x327afca5
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)key;	// 0x327b00b9
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)key;	// 0x327aff39
- (id)serializableRequestBodyPropertyList;	// 0x327af84d
// declared property getter: - (id)transaction;	// 0x327b01a1
@end
