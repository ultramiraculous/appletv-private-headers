/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty {
@private
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x31aa6775
+ (id)mapUnderlineValue:(int)value;	// 0x318ea791
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x31aa67b9
- (id)initWithEnum:(int)anEnum;	// 0x318eb9a1
- (id)cssStringForName:(id)name;	// 0x318ec241
- (id)mapHorizontalAlignment;	// 0x318ec2f9
- (id)mapUnderline;	// 0x31aa67f1
- (id)mapVerticalAlignment;	// 0x318ec2b5
- (int)value;	// 0x318f013d
@end

