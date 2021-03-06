/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import "PRAutocorrectionContext.h"

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {
	NSMutableArray *_modifications;	// 4 = 0x4
	NSMutableArray *_addedModifications;	// 8 = 0x8
	NSMutableArray *_removedModifications;	// 12 = 0xc
	NSMutableArray *_addedRemovedModifications;	// 16 = 0x10
	NSMutableArray *_prefixes;	// 20 = 0x14
	char *_buffer;	// 24 = 0x18
	unsigned *_syllableLengthArray;	// 28 = 0x1c
	void *_connection;	// 32 = 0x20
	unsigned _length;	// 36 = 0x24
	unsigned _lengthBeforeApostrophes;	// 40 = 0x28
	unsigned _startingPoint;	// 44 = 0x2c
	unsigned _lastIndexes[4];	// 48 = 0x30
	unsigned _nextIndexes[2];	// 64 = 0x40
	unsigned _startIndex;	// 72 = 0x48
	unsigned _endIndex;	// 76 = 0x4c
	BOOL _lastSyllableIsPartial;	// 80 = 0x50
}
@property(readonly, retain) NSMutableArray *addedModifications;	// G=0x32561b39; converted property
@property(readonly, retain) NSMutableArray *removedModifications;	// G=0x32561d19; converted property
- (id)init;	// 0x3255f669
- (void)_addDeletions;	// 0x32560e05
- (void)_addInsertions;	// 0x325609a1
- (void)_addReplacements;	// 0x32560585
- (void)_addTranspositions;	// 0x3255ffb1
- (void)_advanceIndexes;	// 0x3255fde5
- (void)_filterModifications;	// 0x325612a9
- (void)_removeModificationsAndMoveStartingPoint;	// 0x3255f8d1
- (void)addInputCharacter:(unsigned short)character geometryModel:(void *)model geometryData:(id)data;	// 0x325617e1
// converted property getter: - (id)addedModifications;	// 0x32561b39
- (id)currentModifications;	// 0x32561b29
- (void)dealloc;	// 0x3255f791
- (id)description;	// 0x3255f855
- (void)removeNumberOfInputCharacters:(unsigned)inputCharacters;	// 0x32561929
// converted property getter: - (id)removedModifications;	// 0x32561d19
- (void)reset;	// 0x325619f5
@end

