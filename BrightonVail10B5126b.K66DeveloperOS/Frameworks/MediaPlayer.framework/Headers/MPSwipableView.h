/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIView.h> // Unknown library

@class MPSwipeGestureRecognizer, MPTapGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;	// 84 = 0x54
	int _simultaneousGestureTypes;	// 88 = 0x58
	id<MPSwipableViewDelegate> _swipeDelegate;	// 92 = 0x5c
	MPTapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
	MPSwipeGestureRecognizer *_swipeGestureRecognizer;	// 100 = 0x64
	MPActivityGestureRecognizer *_activityGestureRecognizer;	// 104 = 0x68
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 108 = 0x6c
}
@property(assign, nonatomic) int enabledGestureTypes;	// G=0x31cfe395; S=0x31cfdfa9; @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// G=0x31cfe3a5; S=0x31cfe3b5; @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// G=0x31cfe375; S=0x31cfe385; @synthesize=_swipeDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x31cfd9c9
- (void)_activityGestureRecognized:(id)recognized;	// 0x31cfdebd
- (void)_pinchGestureRecognized:(id)recognized;	// 0x31cfdf05
- (void)_swipeGestureRecognized:(id)recognized;	// 0x31cfdd69
- (void)_tapGestureRecognized:(id)recognized;	// 0x31cfdded
- (void)_updateGestureRecognizersForEnabledTypes;	// 0x31cfe041
- (void)addGestureRecognizer:(id)recognizer;	// 0x31cfdc2d
- (void)dealloc;	// 0x31cfda35
- (void)didMoveToSuperview;	// 0x31cfdd09
// declared property getter: - (int)enabledGestureTypes;	// 0x31cfe395
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x31cfdfd1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31cfdba1
- (void)removeGestureRecognizer:(id)recognizer;	// 0x31cfdc75
// declared property setter: - (void)setEnabledGestureTypes:(int)types;	// 0x31cfdfa9
// declared property setter: - (void)setSimultaneousGestureTypes:(int)types;	// 0x31cfe3b5
// declared property setter: - (void)setSwipeDelegate:(id)delegate;	// 0x31cfe385
// declared property getter: - (int)simultaneousGestureTypes;	// 0x31cfe3a5
// declared property getter: - (id)swipeDelegate;	// 0x31cfe375
- (void)willMoveToSuperview:(id)superview;	// 0x31cfdcb1
@end
