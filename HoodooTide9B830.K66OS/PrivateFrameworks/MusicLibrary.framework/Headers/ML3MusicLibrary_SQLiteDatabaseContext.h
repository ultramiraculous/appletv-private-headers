/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3NondurableWriteSet, CPLRUDictionary;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SQLiteDatabaseContext : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	const void *_iTunesExtensions;	// 8 = 0x8
	iPhoneSortKeyBuilder *_sortKeyBuilder;	// 12 = 0xc
	CPLRUDictionary *_statementCache;	// 16 = 0x10
	ML3NondurableWriteSet *_nondurableWriteSet;	// 20 = 0x14
	int _transactionKind;	// 24 = 0x18
	unsigned _writeStatementCount;	// 28 = 0x1c
	unsigned _transactionHasChanges : 1;	// 32 = 0x20
	unsigned _transactionHasNonContentsChanges : 1;	// 32 = 0x20
	unsigned _transactionHasDisplayValuesChanges : 1;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x34f87839; 
@property(retain, nonatomic) ML3NondurableWriteSet *nondurableWriteSet;	// G=0x34f91639; S=0x34f8bb49; @synthesize=_nondurableWriteSet
@property(readonly, assign, nonatomic) iPhoneSortKeyBuilder *sortKeyBuilder;	// G=0x34f8c21d; @synthesize=_sortKeyBuilder
@property(assign, nonatomic) BOOL transactionHasChanges;	// G=0x34f91861; S=0x34f8c711; 
@property(assign, nonatomic) BOOL transactionHasDisplayValuesChanges;	// G=0x34f91889; S=0x34f8c75d; 
@property(assign, nonatomic) BOOL transactionHasNonContentsChanges;	// G=0x34f91875; S=0x34f8c735; 
@property(assign, nonatomic) int transactionKind;	// G=0x34f87951; S=0x34f8bb39; @synthesize=_transactionKind
- (id)initWithDB:(sqlite3 *)db;	// 0x34f86e6d
- (id)copyStatementForSQL:(id)sql cache:(BOOL)cache;	// 0x34f8771d
// declared property getter: - (sqlite3 *)db;	// 0x34f87839
- (void)dealloc;	// 0x34fa08c1
- (BOOL)executeSQL:(id)sql;	// 0x34f8c6f9
- (BOOL)executeSQL:(id)sql waitIfBusy:(BOOL)busy;	// 0x34f8b9fd
// declared property getter: - (id)nondurableWriteSet;	// 0x34f91639
// declared property setter: - (void)setNondurableWriteSet:(id)set;	// 0x34f8bb49
// declared property setter: - (void)setTransactionHasChanges:(BOOL)changes;	// 0x34f8c711
// declared property setter: - (void)setTransactionHasDisplayValuesChanges:(BOOL)changes;	// 0x34f8c75d
// declared property setter: - (void)setTransactionHasNonContentsChanges:(BOOL)changes;	// 0x34f8c735
// declared property setter: - (void)setTransactionKind:(int)kind;	// 0x34f8bb39
// declared property getter: - (iPhoneSortKeyBuilder *)sortKeyBuilder;	// 0x34f8c21d
// declared property getter: - (BOOL)transactionHasChanges;	// 0x34f91861
// declared property getter: - (BOOL)transactionHasDisplayValuesChanges;	// 0x34f91889
// declared property getter: - (BOOL)transactionHasNonContentsChanges;	// 0x34f91875
// declared property getter: - (int)transactionKind;	// 0x34f87951
@end

