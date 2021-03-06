/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIInputSwitcherView, UIDelayedAction, NSString;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject {
@private
	UIDelayedAction *m_switcherDelay;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	UIInputSwitcherView *m_switcherView;	// 12 = 0xc
	NSString *_newMode;	// 16 = 0x10
}
@property(retain) NSString *newMode;	// G=0x35633e9d; S=0x35633ed5; converted property
+ (id)activeInstance;	// 0x353fed55
+ (id)sharedInstance;	// 0x35633d85
- (id)init;	// 0x35633dc1
- (void)cancelSwitcherTimer;	// 0x356340d1
- (void)clearSwitcherTimer;	// 0x356340fd
- (void)dealloc;	// 0x35633e2d
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x3563443d
- (void)handleRotate:(id)rotate;	// 0x35633f19
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x35634159
- (void)hideSwitcher;	// 0x35633f29
- (BOOL)isVisible;	// 0x35634141
// converted property getter: - (id)newMode;	// 0x35633e9d
// converted property setter: - (void)setNewMode:(id)mode;	// 0x35633ed5
- (void)showSwitcher;	// 0x35633fb9
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x356341b1
- (void)touchSwitcherTimer;	// 0x3563404d
@end

