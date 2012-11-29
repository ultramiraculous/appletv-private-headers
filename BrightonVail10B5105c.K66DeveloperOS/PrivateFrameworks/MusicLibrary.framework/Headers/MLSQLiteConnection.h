/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSHashTable, NSMutableArray, CPLRUDictionary, MLSQLiteConnectionQueue, NSString;
@protocol MLSQLiteConnectionSQLiteDelegate, OS_dispatch_queue;

@interface MLSQLiteConnection : NSObject {
	NSString *_path;	// 4 = 0x4
	NSHashTable *_registeredStatements;	// 8 = 0x8
	NSMutableArray *_registeredFunctions;	// 12 = 0xc
	NSMutableArray *_registeredModules;	// 16 = 0x10
	CPLRUDictionary *_statementCache;	// 20 = 0x14
	sqlite3 *_db;	// 24 = 0x18
	unsigned _writeStatementCount;	// 28 = 0x1c
	unsigned _busyHandlingCounter;	// 32 = 0x20
	int _openFlags;	// 36 = 0x24
	int _activeTransactionKind;	// 40 = 0x28
	int _profilingLevel;	// 44 = 0x2c
	BOOL _activeTransactionHasWrites;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_queue;	// 52 = 0x34
	MLSQLiteConnectionQueue *_connectionQueue;	// 56 = 0x38
	id<MLSQLiteConnectionSQLiteDelegate> _SQLiteDelegate;	// 60 = 0x3c
}
@property(assign, nonatomic) __weak id<MLSQLiteConnectionSQLiteDelegate> SQLiteDelegate;	// G=0x3408e28d; S=0x3402cd6d; @synthesize=_SQLiteDelegate
@property(readonly, assign, nonatomic) BOOL activeTransactionHasWrites;	// G=0x3408e26d; @synthesize=_activeTransactionHasWrites
@property(readonly, assign, nonatomic) int activeTransactionKind;	// G=0x3403c5bd; @synthesize=_activeTransactionKind
@property(retain, nonatomic) MLSQLiteConnectionQueue *connectionQueue;	// G=0x3408e2b1; S=0x3408e2c1; @synthesize=_connectionQueue
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x3402e011; 
@property(readonly, assign, nonatomic) NSString *path;	// G=0x3408cced; 
@property(assign, nonatomic) int profilingLevel;	// G=0x3408e27d; S=0x3402cd39; @synthesize=_profilingLevel
- (id)initForReadingWithPath:(id)path;	// 0x3408d53d
- (id)initForReadingWithURL:(id)url;	// 0x3408d475
- (id)initForWritingWithPath:(id)path;	// 0x34027259
- (id)initForWritingWithURL:(id)url;	// 0x3408d4ed
- (void).cxx_destruct;	// 0x3408e2e9
// declared property getter: - (id)SQLiteDelegate;	// 0x3408e28d
- (void)_addRegisteredFunction:(id)function name:(id)name argumentCount:(int)count;	// 0x34027465
- (void)_addRegisteredModule:(id)module name:(id)name;	// 0x3408d0b9
- (id)_beginImmediateStatement;	// 0x3403c565
- (id)_beginStatement;	// 0x34035759
- (id)_commitStatement;	// 0x34037461
- (id)_endStatement;	// 0x3408cde1
- (void)_incrementalVaccuumIfAppropriate;	// 0x3403e771
- (id)_initWithFlags:(int)flags path:(id)path;	// 0x34027285
- (id)_registeredModuleNamed:(id)named;	// 0x3408cfb1
- (id)_rollbackStatement;	// 0x3408cdc5
// declared property getter: - (BOOL)activeTransactionHasWrites;	// 0x3408e26d
// declared property getter: - (int)activeTransactionKind;	// 0x3403c5bd
- (BOOL)beginTransactionKind:(int)kind withBusyHandler:(id)busyHandler;	// 0x34035499
- (void)close;	// 0x3408d5e9
- (BOOL)commitTransactionWithBusyHandler:(id)busyHandler;	// 0x3403df65
// declared property getter: - (id)connectionQueue;	// 0x3408e2b1
// declared property getter: - (sqlite3 *)db;	// 0x3402e011
- (void)dealloc;	// 0x3408ce41
- (BOOL)deleteDatabase;	// 0x3408db61
- (id)description;	// 0x3408cd01
- (void)disableBusyHandling;	// 0x3403c605
- (void)enableBusyHandling;	// 0x3403c585
- (BOOL)endTransaction;	// 0x3408db45
- (BOOL)endTransactionWithBusyHandler:(id)busyHandler;	// 0x340372e5
- (BOOL)enumerateRowsWithSQL:(id)sql handler:(id)handler;	// 0x3403ea3d
- (BOOL)enumerateRowsWithSQL:(id)sql parameters:(id)parameters handler:(id)handler;	// 0x3408dff5
- (BOOL)enumerateRowsWithSQL:(id)sql valueHandler:(id)handler;	// 0x3408de5d
- (void)incrementWriteStatementRunCount;	// 0x3403c5cd
- (void *)moduleContextForModuleName:(id)moduleName;	// 0x3408d331
// declared property getter: - (id)path;	// 0x3408cced
- (BOOL)performTransactionKind:(int)kind withBlock:(id)block;	// 0x3408dca9
- (BOOL)performTransactionKind:(int)kind withBusyHandler:(id)busyHandler block:(id)block;	// 0x34035271
- (BOOL)performTransactionWithBlock:(id)block;	// 0x3408dc89
// declared property getter: - (int)profilingLevel;	// 0x3408e27d
- (void)registerFunctionName:(id)name argumentCount:(int)count block:(id)block;	// 0x3402cbc5
- (void)registerFunctionName:(id)name argumentCount:(int)count function:(/*function-pointer*/ void *)function;	// 0x340273d9
- (void)registerModuleName:(id)name moduleMethods:(const sqlite3_module *)methods;	// 0x3408d36d
- (void)registerStatement:(id)statement;	// 0x3402e7e5
- (BOOL)rollbackTransactionWithBusyHandler:(id)busyHandler;	// 0x3408d9f9
- (BOOL)runSQL:(id)sql;	// 0x3408dccd
// declared property setter: - (void)setConnectionQueue:(id)queue;	// 0x3408e2c1
- (void)setModuleContext:(void *)context forModuleName:(id)moduleName contextReleaseBlock:(id)block;	// 0x3408d1dd
// declared property setter: - (void)setProfilingLevel:(int)level;	// 0x3402cd39
// declared property setter: - (void)setSQLiteDelegate:(id)delegate;	// 0x3402cd6d
- (id)statementWithSQL:(id)sql;	// 0x3402dab5
- (void)statementWithSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3402d9d1
- (void)statementWithSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x34051211
- (void)unregisterStatement:(id)statement;	// 0x3402eba1
@end
