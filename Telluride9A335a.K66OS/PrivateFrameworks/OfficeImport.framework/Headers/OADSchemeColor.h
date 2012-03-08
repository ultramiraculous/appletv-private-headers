/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADSchemeColor : OADColor {
@private
	int mIndex;	// 8 = 0x8
}
+ (id)schemeColorWithIndex:(int)index;	// 0x3530640d
- (id)initWithSchemeColorIndex:(int)schemeColorIndex;	// 0x351a26c1
- (id)copyWithZone:(NSZone *)zone;	// 0x352e1785
- (unsigned)hash;	// 0x351aca91
- (BOOL)isEqual:(id)equal;	// 0x351ac9ed
- (int)schemeColorIndex;	// 0x3512ccc1
@end
