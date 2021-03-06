/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRSimpleMenuItem : XXUnknownSuperclass {
	NSString *_title;	// 4 = 0x4
	NSString *_rightJustifiedText;	// 8 = 0x8
	int _titlePosition;	// 12 = 0xc
	int _menuItemType;	// 16 = 0x10
}
@property(readonly, assign) int menuItemType;	// G=0x294af9; converted property
@property(readonly, retain) NSString *rightJustifiedText;	// G=0x294ad9; converted property
@property(readonly, retain) NSString *title;	// G=0x294ac9; converted property
@property(readonly, assign) int titlePosition;	// G=0x294ae9; converted property
+ (id)simpleMenuItemWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x294949
+ (id)simpleMenuItemWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x2948f1
- (id)initWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x2949c5
- (id)initWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x2949a1
- (void)dealloc;	// 0x294a65
// converted property getter: - (int)menuItemType;	// 0x294af9
// converted property getter: - (id)rightJustifiedText;	// 0x294ad9
// converted property getter: - (id)title;	// 0x294ac9
// converted property getter: - (int)titlePosition;	// 0x294ae9
@end

