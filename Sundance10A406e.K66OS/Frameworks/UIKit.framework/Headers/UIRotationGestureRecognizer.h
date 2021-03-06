/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
	double _initialTouchDistance;	// 56 = 0x38
	double _initialTouchAngle;	// 64 = 0x40
	double _currentTouchAngle;	// 72 = 0x48
	int _currentRotationCount;	// 80 = 0x50
	double _lastTouchTime;	// 84 = 0x54
	float _velocity;	// 92 = 0x5c
	float _previousVelocity;	// 96 = 0x60
	CGPoint _anchorPoint;	// 100 = 0x64
	id _transformAnalyzer;	// 108 = 0x6c
	UITouch *_touches[2];	// 112 = 0x70
	float _preRecognitionWeight;	// 120 = 0x78
	float _postRecognitionWeight;	// 124 = 0x7c
}
@property(readonly, assign) CGPoint anchorPoint;	// G=0x30bd50ad; converted property
@property(assign, nonatomic) float rotation;	// G=0x30bd5161; S=0x30bd50c9; 
@property(readonly, assign, nonatomic) float velocity;	// G=0x30bd51c1; 
- (id)initWithCoder:(id)coder;	// 0x30bd5021
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x309788b9
- (float)_postRecognitionWeight;	// 0x30bd525d
- (float)_preRecognitionWeight;	// 0x30bd5215
- (void)_resetGestureRecognizer;	// 0x30a292e9
- (void)_setPostRecognitionWeight:(float)weight;	// 0x30bd5225
- (void)_setPreRecognitionWeight:(float)weight;	// 0x30978a45
- (void)_updateTransformAnalyzerWeights;	// 0x3097899d
// converted property getter: - (CGPoint)anchorPoint;	// 0x30bd50ad
- (void)dealloc;	// 0x30bd505d
// declared property getter: - (float)rotation;	// 0x30bd5161
// declared property setter: - (void)setRotation:(float)rotation;	// 0x30bd50c9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30a28c39
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30bd5271
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30a2909d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30a2fe01
// declared property getter: - (float)velocity;	// 0x30bd51c1
@end

