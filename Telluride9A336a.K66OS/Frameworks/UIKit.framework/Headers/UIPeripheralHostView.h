/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPeripheralHostLayer;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView {
@private
	int _explicitLayoutCount;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) UIPeripheralHostLayer *layer;	// G=0x3513b401; 
+ (Class)layerClass;	// 0x3513a30d
- (id)initWithFrame:(CGRect)frame;	// 0x3513a2bd
- (BOOL)_shouldUseKeyWindowStack;	// 0x351d1131
- (void)beginExplicitLayout;	// 0x3513b3bd
- (void)dealloc;	// 0x353d1271
- (void)endExplicitLayout;	// 0x3513b4bd
// declared property getter: - (id)layer;	// 0x3513b401
- (void)layoutSubviews;	// 0x351d3c2d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x351930f1
- (void)removeFromSuperview;	// 0x35195535
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x351d20e9
- (int)textEffectsVisibilityLevel;	// 0x3513b4ad
@end

