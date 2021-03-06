/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class NSMutableDictionary, NSString, CPDumpNumeric;

@interface CPDumpUnion : CPDumpType {
	NSString *mSelectorFieldName;	// 8 = 0x8
	CPDumpNumeric *mSelectorField;	// 12 = 0xc
	NSMutableDictionary *mSelectorToMemberMap;	// 16 = 0x10
}
- (id)initWithSelectorField:(id)selectorField members:(id)members;	// 0x34ce275d
- (id)initWithSelectorFieldName:(id)selectorFieldName selectorEnumType:(id)type members:(id)members;	// 0x34ce2739
- (id)initWithSelectorFieldName:(id)selectorFieldName selectorEnumType:(id)type selectorField:(id)field members:(id)members;	// 0x34ce24f5
- (void)dealloc;	// 0x34ce2781
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x34ce27f9
@end

