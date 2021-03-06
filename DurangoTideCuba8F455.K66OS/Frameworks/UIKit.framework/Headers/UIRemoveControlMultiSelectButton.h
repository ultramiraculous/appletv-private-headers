/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIRemoveControlMinusButton.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {
@private
	unsigned _isHighlighted : 1;	// 76 = 0x4c
	unsigned _isSelected : 1;	// 76 = 0x4c
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x30205a29; S=0x30205a2d; converted property
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x30205a31; S=0x30206a1d; converted property
+ (float)defaultWidth;	// 0x30206ab9
+ (id)minusCenterImage;	// 0x30205a19
+ (id)minusImage;	// 0x30206f75
+ (id)plusImage;	// 0x30206f61
- (id)initWithRemoveControl:(id)removeControl;	// 0x3020791d
- (void)drawRect:(CGRect)rect;	// 0x3020865d
// converted property getter: - (BOOL)isHiding;	// 0x30205a29
// converted property getter: - (BOOL)isHighlighted;	// 0x30205a31
- (BOOL)isRotated;	// 0x30205a21
- (BOOL)isRotating;	// 0x30205a25
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x30205a2d
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30206a1d
- (void)setSelected:(BOOL)selected;	// 0x302069f5
- (void)setSelected:(BOOL)selected highlighted:(BOOL)highlighted;	// 0x30206a45
- (void)toggleRotate:(BOOL)rotate;	// 0x30205a1d
@end

