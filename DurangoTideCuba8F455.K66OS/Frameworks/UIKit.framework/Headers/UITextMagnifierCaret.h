/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextMagnifier.h"
#import "UIView.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput> *_text;	// 44 = 0x2c
	UIView *_target;	// 48 = 0x30
	CGPoint _magnificationPoint;	// 52 = 0x34
	CGPoint _offset;	// 60 = 0x3c
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 68 = 0x44
	float _yOffset;	// 72 = 0x48
	UIView *_magnifierRenderer;	// 76 = 0x4c
	UIView *_autoscrollRenderer;	// 80 = 0x50
	int _autoscrollDirections;	// 84 = 0x54
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x302cd29d; S=0x302cd2b5; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x302cd285; S=0x302cd74d; 
@property(assign, nonatomic) CGPoint offset;	// G=0x302cd2ed; S=0x302cd305; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x301a40f5; S=0x302cded5; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x302cd981; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x302cd6ed; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x302cd31d; S=0x302cdead; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x302cd2cd; S=0x302cd2dd; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x301a3db9
- (id)initWithDefaultFrame;	// 0x301a3dfd
- (void)animateToAutoscrollRenderer;	// 0x302cd63d
- (void)animateToMagnifierRenderer;	// 0x302cd599
// declared property getter: - (CGPoint)animationPoint;	// 0x302cd29d
- (void)autoscrollWillNotStart;	// 0x302cd575
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x302cd32d
- (void)dealloc;	// 0x302cd9a5
- (void)detectLostTouches:(id)touches;	// 0x302cd4a9
// declared property getter: - (CGPoint)magnificationPoint;	// 0x302cd285
// declared property getter: - (CGPoint)offset;	// 0x302cd2ed
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x302cd6cd
- (void)remove;	// 0x302ce709
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x302cd2b5
- (void)setAutoscrollDirections:(int)directions;	// 0x302cd819
- (void)setFrame:(CGRect)frame;	// 0x301a3f09
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x302cd74d
- (void)setNeedsDisplay;	// 0x301a3fc5
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x302cd305
// declared property setter: - (void)setTarget:(id)target;	// 0x302cded5
// declared property setter: - (void)setText:(id)text;	// 0x302cdead
- (void)setToMagnifierRenderer;	// 0x302cd601
// declared property setter: - (void)setYOffset:(float)offset;	// 0x302cd2dd
- (void)stopMagnifying:(BOOL)magnifying;	// 0x302cdefd
// declared property getter: - (id)target;	// 0x301a40f5
// declared property getter: - (CGPoint)terminalPoint;	// 0x302cd981
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x302cd6ed
// declared property getter: - (id)text;	// 0x302cd31d
- (void)updateFrameAndOffset;	// 0x302cdd15
- (void)windowWillRotate:(id)window;	// 0x302cd491
// declared property getter: - (float)yOffset;	// 0x302cd2cd
- (void)zoomDownAnimation;	// 0x302cdb35
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x302cd539
- (void)zoomUpAnimation;	// 0x302cda11
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x302cd561
@end

