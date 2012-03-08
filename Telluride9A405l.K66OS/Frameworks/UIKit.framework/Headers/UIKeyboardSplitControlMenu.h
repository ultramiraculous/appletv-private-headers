/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {
@private
	NSMutableArray *m_menuOptions;	// 136 = 0x88
	CGSize m_preferredSize;	// 140 = 0x8c
}
@property(readonly, assign) CGSize preferredSize;	// G=0x33032b5d; converted property
+ (id)activeInstance;	// 0x32d86195
+ (id)sharedInstance;	// 0x33032a8d
- (id)initWithFrame:(CGRect)frame;	// 0x33032849
- (void)dealloc;	// 0x33032a41
- (int)defaultSelectedIndex;	// 0x33032b79
- (void)didSelectItemAtIndex:(int)index;	// 0x33032c09
- (int)numberOfItems;	// 0x33032b11
// converted property getter: - (CGSize)preferredSize;	// 0x33032b5d
- (id)titleForItemAtIndex:(int)index;	// 0x33032b81
@end
