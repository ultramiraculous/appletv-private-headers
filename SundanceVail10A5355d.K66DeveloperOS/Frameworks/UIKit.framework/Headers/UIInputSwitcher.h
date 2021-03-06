/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIInputSwitcherView, UIDelayedAction, NSString;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject {
	UIDelayedAction *m_switcherDelay;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	UIInputSwitcherView *m_switcherView;	// 12 = 0xc
	NSString *_newMode;	// 16 = 0x10
}
@property(retain) NSString *newMode;	// G=0x33d12549; S=0x33d12581; converted property
+ (id)activeInstance;	// 0x33ad9e7d
+ (id)sharedInstance;	// 0x33d12421
- (id)init;	// 0x33d1245d
- (void)cancelSwitcherTimer;	// 0x33d12795
- (void)clearHideSwitcherTimer;	// 0x33d12665
- (void)clearSwitcherTimer;	// 0x33d127b9
- (void)dealloc;	// 0x33d124c9
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x33d12a61
- (void)handleRotate:(id)rotate;	// 0x33d125c5
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x33d12811
- (void)hideSwitcher;	// 0x33d125d5
- (BOOL)isVisible;	// 0x33d127f9
// converted property getter: - (id)newMode;	// 0x33d12549
// converted property setter: - (void)setNewMode:(id)mode;	// 0x33d12581
- (void)showSwitcher;	// 0x33d12669
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x33d1287d
- (void)touchHideSwitcherTimer;	// 0x33d12661
- (void)touchSwitcherTimer;	// 0x33d1270d
@end

