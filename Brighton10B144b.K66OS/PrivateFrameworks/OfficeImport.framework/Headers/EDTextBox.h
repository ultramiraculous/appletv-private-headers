/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x34a2e6d1; S=0x348c5275; converted property
@property(retain) id protection;	// G=0x34a2e6e1; S=0x348c52ed; converted property
@property(retain) id text;	// G=0x348c6f99; S=0x348c5331; converted property
+ (id)textBox;	// 0x348c519d
// converted property getter: - (id)alignmentInfo;	// 0x34a2e6d1
- (void)dealloc;	// 0x348cfc61
// converted property getter: - (id)protection;	// 0x34a2e6e1
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x348c5275
// converted property setter: - (void)setProtection:(id)protection;	// 0x348c52ed
// converted property setter: - (void)setText:(id)text;	// 0x348c5331
// converted property getter: - (id)text;	// 0x348c6f99
@end

