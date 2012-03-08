/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDReference : NSObject <NSCopying> {
@private
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x352134fd; S=0x35382029; converted property
@property(assign) int firstRow;	// G=0x3521d9b9; S=0x35382015; converted property
@property(assign) int lastColumn;	// G=0x3521d9dd; S=0x35382051; converted property
@property(assign) int lastRow;	// G=0x3521d9c9; S=0x3538203d; converted property
+ (id)reference;	// 0x35377edd
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x352cdb51
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x35213385
- (id)init;	// 0x35236049
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x352cdb9d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x352133e1
- (EDAreaReference)areaReference;	// 0x35377e49
- (bool)containsRow:(int)row column:(int)column;	// 0x3521ec9d
- (id)copyWithZone:(NSZone *)zone;	// 0x35334025
- (unsigned)countOfCellsBeingReferenced;	// 0x35298e29
// converted property getter: - (int)firstColumn;	// 0x352134fd
// converted property getter: - (int)firstRow;	// 0x3521d9b9
- (bool)fullyAdjacentToReference:(id)reference;	// 0x352321e9
- (unsigned)hash;	// 0x3533402d
- (bool)isCellReference;	// 0x35377e6d
- (bool)isColumnReference;	// 0x35377eb9
- (BOOL)isEqual:(id)equal;	// 0x35334ec9
- (BOOL)isEqualToReference:(id)reference;	// 0x35232299
- (bool)isRowReference;	// 0x35377e95
- (bool)isValidAreaReference;	// 0x3521b681
- (bool)isValidCellReference;	// 0x35298e7d
// converted property getter: - (int)lastColumn;	// 0x3521d9dd
// converted property getter: - (int)lastRow;	// 0x3521d9c9
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x35382029
// converted property setter: - (void)setFirstRow:(int)row;	// 0x35382015
// converted property setter: - (void)setLastColumn:(int)column;	// 0x35382051
// converted property setter: - (void)setLastRow:(int)row;	// 0x3538203d
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x352360bd
- (void)unionWithReference:(id)reference;	// 0x352facdd
- (void)unionWithRow:(int)row column:(int)column;	// 0x3523609d
@end
