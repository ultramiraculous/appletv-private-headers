/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject {
}
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x345cf895
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x345cf8c5
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x34453365
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x344533c9
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x345cf8e5
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x344d2c4d
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x34453189
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x345cfaa1
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x345cf9b5
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x345cfb11
@end

