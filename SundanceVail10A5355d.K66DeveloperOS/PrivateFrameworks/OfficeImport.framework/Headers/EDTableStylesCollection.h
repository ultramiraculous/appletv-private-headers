/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSString;

@interface EDTableStylesCollection : EDCollection {
	NSString *mDefaultTableStyleName;	// 8 = 0x8
	NSString *mDefaultPivotStyleName;	// 12 = 0xc
}
@property(retain) id defaultPivotStyleName;	// G=0x31db1611; S=0x31c8e235; converted property
@property(retain) id defaultTableStyleName;	// G=0x31db1601; S=0x31c8e1f1; converted property
- (void)dealloc;	// 0x31c44c11
- (id)defaultPivotStyle;	// 0x31db15e1
// converted property getter: - (id)defaultPivotStyleName;	// 0x31db1611
- (id)defaultTableStyle;	// 0x31db15c1
// converted property getter: - (id)defaultTableStyleName;	// 0x31db1601
- (id)objectWithName:(id)name;	// 0x31d39361
// converted property setter: - (void)setDefaultPivotStyleName:(id)name;	// 0x31c8e235
// converted property setter: - (void)setDefaultTableStyleName:(id)name;	// 0x31c8e1f1
@end

