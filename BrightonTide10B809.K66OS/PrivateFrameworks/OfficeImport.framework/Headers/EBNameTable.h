/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBNameTable : NSObject {
}
+ (XlNameTable *)createXlNameTableFromNamesCollection:(id)namesCollection state:(id)state;	// 0x34a0cd91
+ (id)edNameFromXlName:(XlName *)xlName name:(OcText)name state:(id)state;	// 0x348a037d
+ (void)readFromState:(id)state;	// 0x348a00c5
+ (XlName *)xlNameFromEDName:(id)edname state:(id)state;	// 0x34a0cefd
@end

