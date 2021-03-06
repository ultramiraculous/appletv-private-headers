/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class ATVImage, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
	BRImageControl *_centerOnLayer;	// 124 = 0x7c
	ATVImage *_leftOnImage;	// 128 = 0x80
	ATVImage *_leftOffImage;	// 132 = 0x84
	ATVImage *_rightOnImage;	// 136 = 0x88
	ATVImage *_rightOffImage;	// 140 = 0x8c
	ATVImage *_centerOnImage;	// 144 = 0x90
	ATVImage *_centerOffImage;	// 148 = 0x94
	float _percentage;	// 152 = 0x98
}
@property(assign) float percentage;	// G=0x4011f9; S=0x401209; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x400ea1
- (void)_updateProgressToPercentage:(float)percentage;	// 0x4013e1
- (id)accessibilityLabel;	// 0x401589
- (void)dealloc;	// 0x401131
- (void)layoutSubcontrols;	// 0x401285
// converted property getter: - (float)percentage;	// 0x4011f9
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x401209
@end

