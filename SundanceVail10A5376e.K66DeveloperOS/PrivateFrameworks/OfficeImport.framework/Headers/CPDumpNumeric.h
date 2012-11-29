/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class CPDumpEnum;

@interface CPDumpNumeric : CPDumpType {
	int mType;	// 8 = 0x8
	CPDumpEnum *mEnumType;	// 12 = 0xc
}
- (id)initWithType:(int)type;	// 0x37201a35
- (id)initWithType:(int)type enumType:(id)type2;	// 0x37201985
- (void)dealloc;	// 0x372019e9
- (id)enumType;	// 0x37201a59
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x37201a69
- (void)fromXml:(xmlNode *)xml toBinary:(FILE *)binary state:(id)state;	// 0x37201be9
- (int)type;	// 0x37201a49
@end
