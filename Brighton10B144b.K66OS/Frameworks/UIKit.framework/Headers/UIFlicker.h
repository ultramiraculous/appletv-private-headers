/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView;

@interface UIFlicker : NSObject {
	UIView *_target;	// 4 = 0x4
	CGPoint _startLocation;	// 8 = 0x8
	int _throwIterations;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
	int _mouseUpCount;	// 24 = 0x18
	int _mouseDraggedCount;	// 28 = 0x1c
	float _delay;	// 32 = 0x20
	CGPoint _offset;	// 36 = 0x24
}
@property(assign) CGPoint offset;	// G=0x32d0d525; S=0x32d0d53d; converted property
- (id)init;	// 0x32d0d4b9
- (void)_mouseDraggedMemberListTest;	// 0x32d0cff9
- (void)_mouseUpMemberListTest;	// 0x32d0d14d
- (void)_throwMemberListTest;	// 0x32d0d361
// converted property getter: - (CGPoint)offset;	// 0x32d0d525
- (void)run;	// 0x32d0d5a5
- (void)setDelay:(float)delay;	// 0x32d0d585
- (void)setDelegate:(id)delegate;	// 0x32d0d595
- (void)setIterations:(int)iterations;	// 0x32d0d575
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32d0d53d
- (void)setStartLocation:(CGPoint)location;	// 0x32d0d561
- (void)setTarget:(id)target;	// 0x32d0d551
@end

