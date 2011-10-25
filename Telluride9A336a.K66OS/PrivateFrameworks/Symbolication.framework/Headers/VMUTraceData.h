/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMapTable;

@interface VMUTraceData : NSObject {
	NSMapTable *pcMap;	// 4 = 0x4
	NSMapTable *threadTraces;	// 8 = 0x8
	NSMapTable *libXrefs;	// 12 = 0xc
	NSMapTable *fnXrefs;	// 16 = 0x10
	NSMutableSet *threadIDnumbers;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	unsigned threadCount;	// 28 = 0x1c
}
@property(readonly, assign) unsigned maxDepth;	// G=0x3013add1; converted property
- (id)init;	// 0x3013b3b1
- (id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;	// 0x3013c365
- (id)initWithLogRecords:(XXStruct_KGqEpA *)logRecords forTask:(unsigned)task;	// 0x3013c7c5
- (void)addEvent:(id)event;	// 0x3013cbcd
- (void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x3013b7f9
- (void)buildPCMap:(long *)map withNumPages:(unsigned)numPages forTask:(unsigned)task;	// 0x3013ca7d
- (void)dealloc;	// 0x3013cd4d
- (void)finalize;	// 0x3013ccbd
- (void)freeXrefTable:(id)table;	// 0x3013cdfd
- (id)functionXref;	// 0x3013b64d
- (void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x3013b6ed
- (id)libraryXref;	// 0x3013b5ad
// converted property getter: - (unsigned)maxDepth;	// 0x3013add1
- (id)numberForThread:(unsigned)thread;	// 0x3013ae25
- (void)printXrefs:(id)xrefs toString:(id)string;	// 0x3013b4dd
- (unsigned long long)readAddressFromFile:(FILE *)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;	// 0x3013bfa5
- (BOOL)readFromFile:(FILE *)file;	// 0x3013b8e5
- (id)symbolForPC:(unsigned long long)pc;	// 0x3013c325
- (id)threadIDs;	// 0x3013ae05
- (id)traceForThread:(unsigned)thread;	// 0x3013c2e5
- (void)writeToFile:(FILE *)file;	// 0x3013c009
@end

