/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
	float _lowPassTranslationMagnitudeDelta;	// 4 = 0x4
	float _lowPassScaleDelta;	// 8 = 0x8
	float _lowPassRotationDelta;	// 12 = 0xc
	float _translationWeight;	// 16 = 0x10
	float _pinchingWeight;	// 20 = 0x14
	float _rotationWeight;	// 24 = 0x18
	int _dominantComponent;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int dominantComponent;	// G=0x30a30a99; @synthesize=_dominantComponent
@property(assign, nonatomic) float pinchingWeight;	// G=0x30b7e399; S=0x309656a1; @synthesize=_pinchingWeight
@property(assign, nonatomic) float rotationWeight;	// G=0x30b7e3a9; S=0x309656b1; @synthesize=_rotationWeight
@property(assign, nonatomic) float translationWeight;	// G=0x30b7e389; S=0x309656c1; @synthesize=_translationWeight
- (id)init;	// 0x30965641
- (void)analyzeTouches:(id)touches;	// 0x30a301d1
// declared property getter: - (int)dominantComponent;	// 0x30a30a99
// declared property getter: - (float)pinchingWeight;	// 0x30b7e399
- (void)reset;	// 0x30a21bbd
// declared property getter: - (float)rotationWeight;	// 0x30b7e3a9
// declared property setter: - (void)setPinchingWeight:(float)weight;	// 0x309656a1
// declared property setter: - (void)setRotationWeight:(float)weight;	// 0x309656b1
// declared property setter: - (void)setTranslationWeight:(float)weight;	// 0x309656c1
// declared property getter: - (float)translationWeight;	// 0x30b7e389
@end

