/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSEnumerator.h> // Unknown library


@interface MSASModelEnumerator : NSEnumerator {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3_stmt *_stmt;	// 8 = 0x8
	id _stepBlock;	// 12 = 0xc
}
@property(assign, nonatomic) sqlite3 *db;	// G=0x339a6cd9; S=0x339a6ce9; @synthesize=_db
@property(copy, nonatomic) id stepBlock;	// G=0x339a6d19; S=0x339a6d2d; @synthesize=_stepBlock
@property(assign, nonatomic) sqlite3_stmt *stmt;	// G=0x339a6cf9; S=0x339a6d09; @synthesize=_stmt
+ (id)enumeratorWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x339a6959
- (id)init;	// 0x339a69c9
- (id)initWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x339a69f1
- (void).cxx_destruct;	// 0x339a6d3d
// declared property getter: - (sqlite3 *)db;	// 0x339a6cd9
- (void)dealloc;	// 0x339a6b45
- (id)nextObject;	// 0x339a6b95
// declared property setter: - (void)setDb:(sqlite3 *)db;	// 0x339a6ce9
// declared property setter: - (void)setStepBlock:(id)block;	// 0x339a6d2d
// declared property setter: - (void)setStmt:(sqlite3_stmt *)stmt;	// 0x339a6d09
// declared property getter: - (id)stepBlock;	// 0x339a6d19
// declared property getter: - (sqlite3_stmt *)stmt;	// 0x339a6cf9
@end

