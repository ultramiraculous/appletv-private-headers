/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITabBarItem, UIView;

__attribute__((visibility("hidden")))
@interface UITabBarItemProxy : NSObject {
@private
	UITabBarItem *_item;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
}
@property(readonly, retain) UITabBarItem *item;	// G=0x302a2529; converted property
@property(readonly, retain) UIView *view;	// G=0x302a2539; converted property
- (id)initWithItem:(id)item inTabBar:(id)tabBar;	// 0x302a2461
- (void)dealloc;	// 0x302a24dd
// converted property getter: - (id)item;	// 0x302a2529
// converted property getter: - (id)view;	// 0x302a2539
@end

