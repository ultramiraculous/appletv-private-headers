/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSSQLAdapter, NSArray, NSSQLStatement;

__attribute__((visibility("hidden")))
@interface NSSQLConnection : NSObject {
@private
	NSSQLAdapter *_adapter;	// 4 = 0x4
	BOOL _transactionIsOpen;	// 8 = 0x8
	BOOL _useSyntaxColoredLogging;	// 9 = 0x9
	int _debug;	// 12 = 0xc
	NSSQLStatement *_sqlStatement;	// 16 = 0x10
	NSArray *_columnsToFetch;	// 20 = 0x14
	NSArray *_metadataColumns;	// 24 = 0x18
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x31e46ff1; converted property
@property(retain) NSArray *columnsToFetch;	// G=0x31e49f29; S=0x31e49f49; converted property
@property(readonly, retain) NSArray *metadataColumns;	// G=0x31e49f91; converted property
@property(readonly, retain) NSSQLStatement *sqlStatement;	// G=0x31e498a5; converted property
+ (void)initialize;	// 0x31e6f589
- (id)initWithAdapter:(id)adapter;	// 0x31e464b1
- (void)_forceDisconnectOnError;	// 0x31eec2e1
- (void)_performPostSaveTasks;	// 0x31eec2dd
- (void)_raiseOptimisticLockingExceptionWithReason:(id)reason;	// 0x31eedd05
// converted property getter: - (id)adapter;	// 0x31e46ff1
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x31eec735
- (id)allPeerRanges;	// 0x31eec701
- (void)awake;	// 0x31eec2a5
- (void)beginTransaction;	// 0x31eedc91
- (BOOL)canConnect;	// 0x31eedb8d
// converted property getter: - (id)columnsToFetch;	// 0x31e49f29
- (void)commitTransaction;	// 0x31eedc5d
- (void)connect;	// 0x31eedbf5
- (void)createIndexesForEntity:(id)entity;	// 0x31eed13d
- (void)createManyToManyTablesForEntity:(id)entity;	// 0x31eec4d9
- (void)createMetadata;	// 0x31eec639
- (void)createPrimaryKeyTableForModel:(id)model knownEmpty:(BOOL)empty;	// 0x31eec805
- (void)createSchema;	// 0x31eece29
- (void)createTableForEntity:(id)entity;	// 0x31eec469
- (void)createTablesForEntities:(id)entities;	// 0x31eec5b1
- (BOOL)databaseIsEmpty;	// 0x31eedb59
- (void)dealloc;	// 0x31e679fd
- (void)deleteCorrelation:(id)correlation;	// 0x31eeda55
- (void)deleteRow:(id)row;	// 0x31eed9ed
- (id)describeResults;	// 0x31eed91d
- (void)didCreateSchema;	// 0x31eec2c9
- (void)disconnect;	// 0x31eedbc1
- (void)endFetch;	// 0x31eed881
- (void)endPrimaryKeyGeneration;	// 0x31eec2d9
- (void)execute;	// 0x31eed985
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x31eecdc1
- (id)fetchMetadata;	// 0x31e482dd
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x31eed8b5
- (id)fetchTableCreationSQL;	// 0x31eecd59
- (id)fetchTableNames;	// 0x31eecd8d
- (id)fetchUbiqiutyKnowledgeVector;	// 0x31eec7d1
- (void)finalize;	// 0x31eedcc5
- (void)forceTransactionClosed;	// 0x31eec2ad
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x31eec2cd
- (BOOL)hasMetadataTable;	// 0x31eecd25
- (BOOL)hasOpenTransaction;	// 0x31e6741d
- (BOOL)hasPrimaryKeyTable;	// 0x31eec925
- (void)insertCorrelation:(id)correlation;	// 0x31eedabd
- (void)insertRow:(id)row;	// 0x31eedaf1
- (BOOL)isFetchInProgress;	// 0x31eed951
- (BOOL)isOpen;	// 0x31eedb25
// converted property getter: - (id)metadataColumns;	// 0x31e49f91
- (id)newFetchedArray;	// 0x31eed8e9
- (void)performAdapterOperation:(id)operation;	// 0x31eed779
- (void)performAdapterOperations:(id)operations;	// 0x31eed6d1
- (void)prepareAndExecuteSQLStatement:(id)statement;	// 0x31eec425
- (void)prepareForPrimaryKeyGeneration;	// 0x31eec2d5
- (void)prepareSQLStatement:(id)statement;	// 0x31e48e35
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x31eecdf5
- (void)releaseSQLStatement;	// 0x31e4af01
- (void)resetSQLStatement;	// 0x31eec3f9
- (void)rollbackTransaction;	// 0x31eedc29
- (void)saveMetadata:(id)metadata;	// 0x31eec959
- (void)selectAttributes:(id)attributes fetchRequest:(id)request lock:(BOOL)lock entity:(id)entity;	// 0x31eed9b9
// converted property setter: - (void)setColumnsToFetch:(id)fetch;	// 0x31e49f49
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x31eec2c1
- (void)sleep;	// 0x31eec2a9
// converted property getter: - (id)sqlStatement;	// 0x31e498a5
- (void)transactionDidBegin;	// 0x31eec2f1
- (void)transactionDidCommit;	// 0x31eec349
- (void)transactionDidRollback;	// 0x31eec3a1
- (void)updateCorrelation:(id)correlation;	// 0x31eeda89
- (void)updateRow:(id)row;	// 0x31eeda21
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x31eec769
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x31eec79d
- (void)willCreateSchema;	// 0x31eec2c5
@end

