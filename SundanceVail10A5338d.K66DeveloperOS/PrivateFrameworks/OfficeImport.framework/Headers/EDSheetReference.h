/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDReference.h"


@interface EDSheetReference : EDReference {
	int mSheetIndex;	// 20 = 0x14
}
+ (id)referenceWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x33acdb41
- (id)init;	// 0x33b81e45
- (id)initWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x33acdba5
- (bool)fullyAdjacentToReference:(id)reference;	// 0x33b298e5
- (unsigned)hash;	// 0x33b81f31
- (BOOL)isEqual:(id)equal;	// 0x33b81ed5
- (BOOL)isEqualToTableReference:(id)tableReference;	// 0x33b81e85
- (bool)isSheedIndexValid;	// 0x33b81f71
- (int)sheetIndex;	// 0x33ad0e0d
- (void)unionWithReference:(id)reference;	// 0x33b29a19
@end
