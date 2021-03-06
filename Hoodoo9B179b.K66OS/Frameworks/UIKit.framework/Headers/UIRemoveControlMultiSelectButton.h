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
	unsigned _isHighlighted : 1;	// 80 = 0x50
	unsigned _isSelected : 1;	// 80 = 0x50
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x330b1fe9; S=0x330b1fed; converted property
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x330b21b9; S=0x330b2191; converted property
+ (float)defaultWidth;	// 0x330b1ea1
+ (id)minusCenterImage;	// 0x330b1edd
+ (id)minusImage;	// 0x330b1ebd
+ (id)plusImage;	// 0x330b1ecd
- (id)initWithRemoveControl:(id)removeControl;	// 0x330b1ee1
- (void)drawRect:(CGRect)rect;	// 0x330b1ff1
// converted property getter: - (BOOL)isHiding;	// 0x330b1fe9
// converted property getter: - (BOOL)isHighlighted;	// 0x330b21b9
- (BOOL)isRotated;	// 0x330b1fe1
- (BOOL)isRotating;	// 0x330b1fe5
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x330b1fed
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x330b2191
- (void)setSelected:(BOOL)selected;	// 0x330b21cd
- (void)setSelected:(BOOL)selected highlighted:(BOOL)highlighted;	// 0x330b212d
- (void)toggleRotate:(BOOL)rotate;	// 0x330b1fdd
@end

