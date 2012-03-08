/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRImageControl, BRTextControl, NSMutableArray;

@interface BRHorizontalSegmentedWidget : BRControl {
@private
	BRImage *_leftImage;	// 48 = 0x30
	BRImage *_centerImage;	// 52 = 0x34
	BRImage *_rightImage;	// 56 = 0x38
	BRTextControl *_textControl;	// 60 = 0x3c
	BRImageControl *_leftEndLayer;	// 64 = 0x40
	NSMutableArray *_centerLayers;	// 68 = 0x44
	BRImageControl *_rightEndLayer;	// 72 = 0x48
	float _animationDuration;	// 76 = 0x4c
	BOOL _animationEnabled;	// 80 = 0x50
	int _numSegments;	// 84 = 0x54
}
@property(assign) float animationDuration;	// G=0x302e9799; S=0x302e9635; converted property
@property(retain) id attributedString;	// G=0x302e9911; S=0x302e9849; converted property
@property(readonly, retain) BRImage *centerImage;	// G=0x302e95e5; converted property
@property(readonly, retain) NSMutableArray *centerLayers;	// G=0x302e9ee1; converted property
@property(readonly, retain) BRImageControl *leftEndLayer;	// G=0x302e9ed1; converted property
@property(readonly, retain) BRImage *leftImage;	// G=0x302e95d5; converted property
@property(readonly, retain) BRImageControl *rightEndLayer;	// G=0x302e9f11; converted property
@property(readonly, retain) BRImage *rightImage;	// G=0x302e95f5; converted property
@property(assign) BOOL sublayerAnimationEnabled;	// G=0x302e97b9; S=0x302e97a9; converted property
- (id)init;	// 0x302e9309
- (void)_reloadSegments;	// 0x302e9f41
- (id)accessibilityLabel;	// 0x302e9f21
// converted property getter: - (float)animationDuration;	// 0x302e9799
// converted property getter: - (id)attributedString;	// 0x302e9911
// converted property getter: - (id)centerImage;	// 0x302e95e5
- (id)centerLayer;	// 0x302e9ef1
// converted property getter: - (id)centerLayers;	// 0x302e9ee1
- (void)dealloc;	// 0x302e9351
- (void)layoutSubcontrols;	// 0x302e9a51
// converted property getter: - (id)leftEndLayer;	// 0x302e9ed1
// converted property getter: - (id)leftImage;	// 0x302e95d5
// converted property getter: - (id)rightEndLayer;	// 0x302e9f11
// converted property getter: - (id)rightImage;	// 0x302e95f5
// converted property setter: - (void)setAnimationDuration:(float)duration;	// 0x302e9635
// converted property setter: - (void)setAttributedString:(id)string;	// 0x302e9849
- (void)setLeftFile:(id)file centerFile:(id)file2 rightFile:(id)file3;	// 0x302e9415
- (void)setLeftImage:(id)image centerImage:(id)image2 rightImage:(id)image3;	// 0x302e94c9
- (void)setNumSegments:(int)segments;	// 0x302e9605
// converted property setter: - (void)setSublayerAnimationEnabled:(BOOL)enabled;	// 0x302e97a9
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x302e97c9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302e9931
// converted property getter: - (BOOL)sublayerAnimationEnabled;	// 0x302e97b9
@end
