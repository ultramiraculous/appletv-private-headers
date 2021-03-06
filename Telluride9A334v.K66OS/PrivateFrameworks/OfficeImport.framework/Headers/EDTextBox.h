/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDProtection, EDString, EDAlignmentInfo;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject {
@private
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x35733fe5; S=0x3563fcf1; converted property
@property(retain) id protection;	// G=0x35733ff5; S=0x3563fd6d; converted property
@property(retain) id text;	// G=0x3563ff45; S=0x3563fdb5; converted property
+ (id)textBox;	// 0x3563fc09
// converted property getter: - (id)alignmentInfo;	// 0x35733fe5
- (void)dealloc;	// 0x3563ff65
// converted property getter: - (id)protection;	// 0x35733ff5
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x3563fcf1
// converted property setter: - (void)setProtection:(id)protection;	// 0x3563fd6d
// converted property setter: - (void)setText:(id)text;	// 0x3563fdb5
// converted property getter: - (id)text;	// 0x3563ff45
@end

