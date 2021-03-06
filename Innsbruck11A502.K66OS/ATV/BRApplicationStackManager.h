/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRWindow, BRControllerStack;

__attribute__((visibility("hidden")))
@interface BRApplicationStackManager : BRSingleton {
	BRControllerStack *_stack;	// 4 = 0x4
	BRWindow *_window;	// 8 = 0x8
}
@property(readonly, retain) BRControllerStack *stack;	// G=0x4173c5; converted property
@property(readonly, retain) BRWindow *window;	// G=0x4173b5; converted property
+ (void)setSingleton:(id)singleton;	// 0x4172a1
+ (id)singleton;	// 0x417291
- (id)init;	// 0x4172b1
- (void)show;	// 0x417395
// converted property getter: - (id)stack;	// 0x4173c5
// converted property getter: - (id)window;	// 0x4173b5
@end

