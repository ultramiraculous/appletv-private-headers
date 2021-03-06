/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {
	UIView *_glowView;	// 172 = 0xac
}
+ (id)keypadImage;	// 0x303f5049
+ (id)pressedImage;	// 0x303f5071
- (id)initWithFrame:(CGRect)frame;	// 0x303f4a99
- (CGRect)_rectForKey:(int)key;	// 0x303f4fad
- (float)_yFudge;	// 0x303f4fa9
- (BOOL)cancelKeyChar;	// 0x303f5099
- (void)dealloc;	// 0x303f4db9
- (BOOL)deleteKeyChar;	// 0x303f5081
- (void)setHighlighted:(BOOL)highlighted;	// 0x303f4e05
@end

