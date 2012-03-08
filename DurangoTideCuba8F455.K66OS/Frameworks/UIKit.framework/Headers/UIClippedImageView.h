/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIClippedImageView : UIView {
@private
	UIImageView *m_imageView;	// 44 = 0x2c
	CGRect m_originalFrame;	// 48 = 0x30
	CGRect m_baseFrame;	// 64 = 0x40
}
@property(assign) CGRect baseFrame;	// G=0x30238031; S=0x30238005; converted property
@property(retain) id image;	// G=0x302380d5; S=0x302380b5; converted property
- (id)initWithFrame:(CGRect)frame image:(id)image;	// 0x3023813d
// converted property getter: - (CGRect)baseFrame;	// 0x30238031
- (void)dealloc;	// 0x302380f5
// converted property getter: - (id)image;	// 0x302380d5
// converted property setter: - (void)setBaseFrame:(CGRect)frame;	// 0x30238005
- (void)setFrame:(CGRect)frame;	// 0x30238229
// converted property setter: - (void)setImage:(id)image;	// 0x302380b5
- (void)setImageOrigin:(CGPoint)origin;	// 0x3023804d
- (void)setOpaque:(BOOL)opaque;	// 0x3023806d
- (void)setOriginAdjustingImage:(CGPoint)image;	// 0x30238391
@end
