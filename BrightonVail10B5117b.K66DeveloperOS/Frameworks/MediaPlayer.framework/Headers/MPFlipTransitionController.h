/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {
	UIView *_fromView;	// 52 = 0x34
	CGRect _toFrame;	// 56 = 0x38
	float _topMargin;	// 72 = 0x48
}
@property(retain, nonatomic) UIView *fromView;	// G=0x31d7793d; S=0x31d7794d; @synthesize=_fromView
@property(assign, nonatomic) CGRect toFrame;	// G=0x31d7795d; S=0x31d77981; @synthesize=_toFrame
@property(assign, nonatomic) float topMargin;	// G=0x31d7799d; S=0x31d779ad; @synthesize=_topMargin
- (id)init;	// 0x31d77415
- (id)_subtypeForTransitionType:(unsigned)transitionType;	// 0x31d77915
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x31d778c9
- (void)dealloc;	// 0x31d77475
// declared property getter: - (id)fromView;	// 0x31d7793d
- (void)performTransition:(unsigned)transition;	// 0x31d774b9
// declared property setter: - (void)setFromView:(id)view;	// 0x31d7794d
// declared property setter: - (void)setToFrame:(CGRect)frame;	// 0x31d77981
// declared property setter: - (void)setTopMargin:(float)margin;	// 0x31d779ad
// declared property getter: - (CGRect)toFrame;	// 0x31d7795d
// declared property getter: - (float)topMargin;	// 0x31d7799d
@end

