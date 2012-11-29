/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 196 = 0xc4
	BOOL _unknownOrientation;	// 200 = 0xc8
}
+ (id)sharedPopoverHostingWindow;	// 0x30b469bd
- (id)initWithFrame:(CGRect)frame;	// 0x30924f29
- (void)_didRemoveSubview:(id)subview;	// 0x30996091
- (void)dealloc;	// 0x30b46b19
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3098fd91
- (void)updateForOrientation:(int)orientation;	// 0x30925049
@end
