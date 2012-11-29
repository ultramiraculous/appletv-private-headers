/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBAlignmentInfo : NSObject {
}
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x31d8abfd
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x31d8ac09
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x31c1bfe5
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x31c1c029
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x31d8a825
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x31c48199
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x31c1be15
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x31d8ab99
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x31d8a8e9
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x31d8a9c1
@end
