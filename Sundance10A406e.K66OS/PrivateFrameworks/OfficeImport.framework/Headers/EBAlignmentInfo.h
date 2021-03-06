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
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x35060cad
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x35060cb9
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x34ef202d
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x34ef2071
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x350608d5
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x34f1e1e1
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x34ef1e5d
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x35060c49
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x35060999
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x35060a71
@end

