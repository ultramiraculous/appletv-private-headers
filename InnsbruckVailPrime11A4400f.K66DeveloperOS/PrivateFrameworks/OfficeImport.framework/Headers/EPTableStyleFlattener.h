/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {
	EDTable *mTable;	// 72 = 0x48
	unsigned mHeaderRowCount;	// 76 = 0x4c
	unsigned mTotalsRowCount;	// 80 = 0x50
}
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x3188c0b1
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x3188b4cd
- (void)clearCache;	// 0x3188d625
- (id)collectionFromWorksheet:(id)worksheet;	// 0x318308b5
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x3188bac5
- (id)extractGlobalStyleElements:(id)elements;	// 0x3188b79d
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x3188b921
- (bool)isObjectSupported:(id)supported;	// 0x3182d4dd
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x31830799
- (int)stripeOffset:(int)offset row:(bool)row;	// 0x3188d39d
- (id)styleFromObject:(id)object;	// 0x3188b2dd
@end

