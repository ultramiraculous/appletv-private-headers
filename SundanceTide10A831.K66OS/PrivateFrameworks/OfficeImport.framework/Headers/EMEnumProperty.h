/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


@interface EMEnumProperty : CMProperty {
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x36baf381
+ (id)mapUnderlineValue:(int)value;	// 0x36a856d5
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x36baf3d1
- (id)initWithEnum:(int)anEnum;	// 0x36a85ccd
- (id)cssStringForName:(id)name;	// 0x36a86765
- (id)mapHorizontalAlignment;	// 0x36a86829
- (id)mapUnderline;	// 0x36baf401
- (id)mapVerticalAlignment;	// 0x36a867e9
- (int)value;	// 0x36a918dd
@end

