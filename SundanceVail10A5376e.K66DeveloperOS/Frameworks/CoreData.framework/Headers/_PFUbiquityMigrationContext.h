/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

@interface _PFUbiquityMigrationContext : NSObject {
	PFUbiquityTransactionLog *_transactionLog;	// 4 = 0x4
	PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;	// 8 = 0x8
	PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;	// 12 = 0xc
}
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot;	// G=0x35d12bd9; S=0x35d12be9; @synthesize=_destinationStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot;	// G=0x35d12bb9; S=0x35d12bc9; @synthesize=_sourceStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x35d12b99; S=0x35d12ba9; @synthesize=_transactionLog
- (void)dealloc;	// 0x35d12b09
// declared property getter: - (id)destinationStoreSaveSnapshot;	// 0x35d12bd9
// declared property setter: - (void)setDestinationStoreSaveSnapshot:(id)snapshot;	// 0x35d12be9
// declared property setter: - (void)setSourceStoreSaveSnapshot:(id)snapshot;	// 0x35d12bc9
// declared property setter: - (void)setTransactionLog:(id)log;	// 0x35d12ba9
- (id)sourceGlobalObjectIDFromCompressedID:(id)compressedID;	// 0x35d12ae9
// declared property getter: - (id)sourceStoreSaveSnapshot;	// 0x35d12bb9
// declared property getter: - (id)transactionLog;	// 0x35d12b99
@end

