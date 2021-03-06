/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

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
@property(assign) CGPoint offset;	// G=0x3550c351; S=0x3550c36d; converted property
- (id)init;	// 0x3550c2e1
- (void)_mouseDraggedMemberListTest;	// 0x3550be11
- (void)_mouseUpMemberListTest;	// 0x3550bfa5
- (void)_throwMemberListTest;	// 0x3550c1a1
// converted property getter: - (CGPoint)offset;	// 0x3550c351
- (void)run;	// 0x3550c3d5
- (void)setDelay:(float)delay;	// 0x3550c3b5
- (void)setDelegate:(id)delegate;	// 0x3550c3c5
- (void)setIterations:(int)iterations;	// 0x3550c3a5
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x3550c36d
- (void)setStartLocation:(CGPoint)location;	// 0x3550c391
- (void)setTarget:(id)target;	// 0x3550c381
@end

