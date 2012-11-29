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
- (id)initWithType:(int)type;	// 0x37baaa35
- (id)initWithType:(int)type enumType:(id)type2;	// 0x37baa985
- (void)dealloc;	// 0x37baa9e9
- (id)enumType;	// 0x37baaa59
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x37baaa69
- (void)fromXml:(xmlNode *)xml toBinary:(FILE *)binary state:(id)state;	// 0x37baabe9
- (int)type;	// 0x37baaa49
@end
