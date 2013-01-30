/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObject, NSString, NSArray, PFUbiquityImportContext, NSDictionary, NSNumber, PFUbiquityKnowledgeVector, NSDate;

@interface PFUbiquityRecordImportConflict : NSObject {
	NSString *_conflictingObjectGlobalIDStr;	// 4 = 0x4
	NSManagedObject *_sourceObject;	// 8 = 0x8
	NSDictionary *_conflictingLogContent;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 20 = 0x14
	int _conflictingLogTransactionType;	// 24 = 0x18
	NSDate *_conflictLogDate;	// 28 = 0x1c
	NSNumber *_conflictingLogTransactionNumber;	// 32 = 0x20
	NSArray *_transactionHistory;	// 36 = 0x24
	NSDictionary *_globalIDIndexToLocalIDURIMap;	// 40 = 0x28
	PFUbiquityImportContext *_importContext;	// 44 = 0x2c
}
@property(retain, nonatomic) NSDate *conflictLogDate;	// G=0x30fb24b5; S=0x30fb24c5; @synthesize=_conflictLogDate
@property(retain, nonatomic) NSDictionary *conflictingLogContent;	// G=0x30fb2475; S=0x30fb2485; @synthesize=_conflictingLogContent
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;	// G=0x30fb2525; S=0x30fb2535; @synthesize=_conflictingLogKnowledgeVector
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber;	// G=0x30fb2545; S=0x30fb2555; @synthesize=_conflictingLogTransactionNumber
@property(assign, nonatomic) int conflictingLogTransactionType;	// G=0x30fb2495; S=0x30fb24a5; @synthesize=_conflictingLogTransactionType
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr;	// G=0x30fb2435; S=0x30fb2445; @synthesize=_conflictingObjectGlobalIDStr
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x30fb2565; S=0x30fb2575; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;	// G=0x30fb24e5; S=0x30fb24f5; @synthesize=_globalIDIndexToLocalIDURIMap
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x30fb2505; S=0x30fb2515; @synthesize=_importContext
@property(retain, nonatomic) NSManagedObject *sourceObject;	// G=0x30fb2455; S=0x30fb2465; @synthesize=_sourceObject
@property(retain, nonatomic) NSArray *transactionHistory;	// G=0x30fb24d5; S=0x30faf5dd; @synthesize=_transactionHistory
+ (id)createTransactionLogForTransactionEntry:(id)transactionEntry withImportContext:(id)importContext error:(id *)error;	// 0x30fb2089
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)knowledgeVector withExportingPeerID:(id)exportingPeerID fromPeerSnapshotCollection:(id)peerSnapshotCollection;	// 0x30fb0ed1
+ (void)initialize;	// 0x30faf3b1
+ (int)resolvedTypeForConflictingLogType:(int)conflictingLogType andLatestTransactionEntry:(id)entry skipObject:(BOOL *)object;	// 0x30fb1255
- (id)init;	// 0x30faf415
- (id)_newNormalizedSnapshot:(id)snapshot forObject:(id)object;	// 0x30faf641
// declared property getter: - (id)conflictLogDate;	// 0x30fb24b5
// declared property getter: - (id)conflictingLogContent;	// 0x30fb2475
// declared property getter: - (id)conflictingLogKnowledgeVector;	// 0x30fb2525
// declared property getter: - (id)conflictingLogTransactionNumber;	// 0x30fb2545
// declared property getter: - (int)conflictingLogTransactionType;	// 0x30fb2495
// declared property getter: - (id)conflictingObjectGlobalIDStr;	// 0x30fb2435
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)relationship withValue:(id)value withGlobalIDToLocalIDURIMap:(id)localIDURIMap andTransactionLog:(id)log;	// 0x30fb1d59
- (id)createSnapshotDictionaryForObjectWithEntry:(id)entry inTransactionLog:(id)transactionLog withError:(id *)error;	// 0x30fb1975
- (id)createSnapshotDictionaryFromLogEntry:(id)logEntry withError:(id *)error;	// 0x30fb18f9
- (id)createSnapshotFromLogContent:(id)logContent withTransactionLog:(id)transactionLog;	// 0x30fb1aed
- (id)createSnapshotFromManagedObject:(id)managedObject;	// 0x30fb1585
// declared property getter: - (id)currentKnowledgeVector;	// 0x30fb2565
- (void)dealloc;	// 0x30faf4e5
- (id)description;	// 0x30fb2321
// declared property getter: - (id)globalIDIndexToLocalIDURIMap;	// 0x30fb24e5
// declared property getter: - (id)importContext;	// 0x30fb2505
- (BOOL)resolveConflict:(id *)conflict;	// 0x30faf9f9
- (BOOL)resolveMergeConflictForLogContent:(id)logContent previousSnapshot:(id)snapshot andAncestorSnapshot:(id)snapshot3 withOldVersion:(unsigned)oldVersion andNewVersion:(unsigned)version error:(id *)error;	// 0x30faf811
// declared property setter: - (void)setConflictLogDate:(id)date;	// 0x30fb24c5
// declared property setter: - (void)setConflictingLogContent:(id)content;	// 0x30fb2485
// declared property setter: - (void)setConflictingLogKnowledgeVector:(id)vector;	// 0x30fb2535
// declared property setter: - (void)setConflictingLogTransactionNumber:(id)number;	// 0x30fb2555
// declared property setter: - (void)setConflictingLogTransactionType:(int)type;	// 0x30fb24a5
// declared property setter: - (void)setConflictingObjectGlobalIDStr:(id)str;	// 0x30fb2445
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x30fb2575
// declared property setter: - (void)setGlobalIDIndexToLocalIDURIMap:(id)localIDURIMap;	// 0x30fb24f5
// declared property setter: - (void)setImportContext:(id)context;	// 0x30fb2515
// declared property setter: - (void)setSourceObject:(id)object;	// 0x30fb2465
// declared property setter: - (void)setTransactionHistory:(id)history;	// 0x30faf5dd
// declared property getter: - (id)sourceObject;	// 0x30fb2455
// declared property getter: - (id)transactionHistory;	// 0x30fb24d5
@end
