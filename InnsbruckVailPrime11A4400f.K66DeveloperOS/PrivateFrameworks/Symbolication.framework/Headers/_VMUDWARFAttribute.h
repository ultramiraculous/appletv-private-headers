/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>


@interface _VMUDWARFAttribute : NSObject {
	unsigned long long _name;	// 4 = 0x4
	unsigned long long _form;	// 12 = 0xc
}
+ (id)attributeWithName:(unsigned long long)name withForm:(unsigned long long)form;	// 0x328f6d9d
+ (void)skipForm:(unsigned long long)form withView:(id)view wordSize:(unsigned char)size;	// 0x328f6e0d
- (id)description;	// 0x328f7111
- (void)skipWithView:(id)view wordSize:(unsigned char)size;	// 0x328f70bd
- (id)stringWithView:(id)view withStringTable:(id)stringTable;	// 0x328f6f79
@end
