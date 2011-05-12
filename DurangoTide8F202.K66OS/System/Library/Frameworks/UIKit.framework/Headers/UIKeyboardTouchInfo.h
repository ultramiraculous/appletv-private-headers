/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITouch, UIKBKeyplane, UIKBKey;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject {
@private
	UITouch *_touch;	// 4 = 0x4
	UIKBKey *_key;	// 8 = 0x8
	UIKBKeyplane *_keyplane;	// 12 = 0xc
	UIKBKey *_slidOffKey;	// 16 = 0x10
	CGPoint _initialPoint;	// 20 = 0x14
}
@property(assign, nonatomic) CGPoint initialPoint;	// G=0x307c7a09; S=0x30676079; @synthesize=_initialPoint
@property(retain, nonatomic) UIKBKey *key;	// G=0x3067d9a9; S=0x30676029; @synthesize=_key
@property(retain, nonatomic) UIKBKeyplane *keyplane;	// G=0x3067d9b9; S=0x30676051; @synthesize=_keyplane
@property(retain, nonatomic) UIKBKey *slidOffKey;	// G=0x307c7a21; S=0x306820a1; @synthesize=_slidOffKey
@property(retain, nonatomic) UITouch *touch;	// G=0x306cd6b1; S=0x30676001; @synthesize=_touch
- (void)dealloc;	// 0x3068202d
// declared property getter: - (CGPoint)initialPoint;	// 0x307c7a09
// declared property getter: - (id)key;	// 0x3067d9a9
// declared property getter: - (id)keyplane;	// 0x3067d9b9
// declared property setter: - (void)setInitialPoint:(CGPoint)point;	// 0x30676079
// declared property setter: - (void)setKey:(id)key;	// 0x30676029
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x30676051
// declared property setter: - (void)setSlidOffKey:(id)key;	// 0x306820a1
// declared property setter: - (void)setTouch:(id)touch;	// 0x30676001
// declared property getter: - (id)slidOffKey;	// 0x307c7a21
// declared property getter: - (id)touch;	// 0x306cd6b1
@end
