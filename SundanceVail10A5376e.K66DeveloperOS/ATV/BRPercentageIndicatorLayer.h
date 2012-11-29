/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class BRImage, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
	BRImageControl *_centerOnLayer;	// 124 = 0x7c
	BRImage *_leftOnImage;	// 128 = 0x80
	BRImage *_leftOffImage;	// 132 = 0x84
	BRImage *_rightOnImage;	// 136 = 0x88
	BRImage *_rightOffImage;	// 140 = 0x8c
	BRImage *_centerOnImage;	// 144 = 0x90
	BRImage *_centerOffImage;	// 148 = 0x94
	float _percentage;	// 152 = 0x98
}
@property(assign) float percentage;	// G=0x335f79; S=0x335f89; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x335c0d
- (void)_updateProgressToPercentage:(float)percentage;	// 0x336165
- (id)accessibilityLabel;	// 0x33630d
- (void)dealloc;	// 0x335eb1
- (void)layoutSubcontrols;	// 0x336005
// converted property getter: - (float)percentage;	// 0x335f79
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x335f89
@end
