/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


@interface UIFrameAnimation : UIAnimation {
	CGRect _startFrame;	// 44 = 0x2c
	CGRect _endFrame;	// 60 = 0x3c
	int _fieldsToChange;	// 76 = 0x4c
}
@property(assign) CGRect endFrame;	// G=0x3041a359; S=0x3041a33d; converted property
- (id)initWithTarget:(id)target;	// 0x3041a2e1
// converted property getter: - (CGRect)endFrame;	// 0x3041a359
// converted property setter: - (void)setEndFrame:(CGRect)frame;	// 0x3041a33d
- (void)setProgress:(float)progress;	// 0x3041a38d
- (void)setSignificantRectFields:(int)fields;	// 0x3041a37d
- (void)setStartFrame:(CGRect)frame;	// 0x3041a321
@end

