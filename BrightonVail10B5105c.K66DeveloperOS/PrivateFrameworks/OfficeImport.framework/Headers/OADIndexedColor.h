/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADIndexedColor : OADColor {
	int mIndex;	// 8 = 0x8
}
+ (id)indexedColorWithIndex:(int)index;	// 0x37a1513d
- (id)initWithIndex:(int)index;	// 0x37a10595
- (id)colorFromPalette:(id)palette;	// 0x37aee8f5
- (id)copyWithZone:(NSZone *)zone;	// 0x37a17219
- (unsigned)hash;	// 0x37aee919
- (int)index;	// 0x37a22b05
- (BOOL)isEqual:(id)equal;	// 0x37aee955
@end
