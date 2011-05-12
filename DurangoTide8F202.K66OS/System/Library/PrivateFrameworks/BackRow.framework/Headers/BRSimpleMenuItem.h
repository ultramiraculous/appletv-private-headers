/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRSimpleMenuItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_rightJustifiedText;	// 8 = 0x8
	int _titlePosition;	// 12 = 0xc
	int _menuItemType;	// 16 = 0x10
}
@property(readonly, assign) int menuItemType;	// G=0x328e1c95; converted property
@property(readonly, retain) NSString *rightJustifiedText;	// G=0x328e1c75; converted property
@property(readonly, retain) NSString *title;	// G=0x328e1c65; converted property
@property(readonly, assign) int titlePosition;	// G=0x328e1c85; converted property
+ (id)simpleMenuItemWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x328e1cc9
+ (id)simpleMenuItemWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x328e1d19
- (id)initWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x328e1dc5
- (id)initWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x328e1ca5
- (void)dealloc;	// 0x328e1d69
// converted property getter: - (int)menuItemType;	// 0x328e1c95
// converted property getter: - (id)rightJustifiedText;	// 0x328e1c75
// converted property getter: - (id)title;	// 0x328e1c65
// converted property getter: - (int)titlePosition;	// 0x328e1c85
@end
