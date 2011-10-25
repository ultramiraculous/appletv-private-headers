/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

__attribute__((visibility("hidden")))
@interface _PFUbiquityMigrationContext : NSObject {
@private
	PFUbiquityTransactionLog *_transactionLog;	// 4 = 0x4
	PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;	// 8 = 0x8
	PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;	// 12 = 0xc
}
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot;	// G=0x3243c311; S=0x3243dba9; @synthesize=_destinationStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot;	// G=0x3243c321; S=0x3243db81; @synthesize=_sourceStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x3243c331; S=0x3243db59; @synthesize=_transactionLog
- (void)dealloc;	// 0x3243dac5
// declared property getter: - (id)destinationStoreSaveSnapshot;	// 0x3243c311
// declared property setter: - (void)setDestinationStoreSaveSnapshot:(id)snapshot;	// 0x3243dba9
// declared property setter: - (void)setSourceStoreSaveSnapshot:(id)snapshot;	// 0x3243db81
// declared property setter: - (void)setTransactionLog:(id)log;	// 0x3243db59
- (id)sourceGlobalObjectIDFromCompressedID:(id)compressedID;	// 0x3243daa1
// declared property getter: - (id)sourceStoreSaveSnapshot;	// 0x3243c321
// declared property getter: - (id)transactionLog;	// 0x3243c331
@end

