/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, NSString, UIFont, NSTimer;

@interface TPLockTextView : UIView {
	NSString *_label;	// 88 = 0x58
	CGImageRef _textCache;	// 92 = 0x5c
	char *_textData;	// 96 = 0x60
	NSTimer *_maskTimer;	// 100 = 0x64
	double _maskStartTime;	// 104 = 0x68
	UIFont *_labelFont;	// 112 = 0x70
	float _deltaFromDefaultTrackWidth;	// 116 = 0x74
	UIImage *_maskImage;	// 120 = 0x78
	float _fps;	// 124 = 0x7c
}
@property(readonly, assign) float deltaFromDefaultTrackWidth;	// G=0x32ad8765; @synthesize=_deltaFromDefaultTrackWidth
@property(readonly, assign) float fps;	// G=0x32ad8545; converted property
@property(readonly, retain) NSString *label;	// G=0x32ad8361; converted property
- (id)initWithLabel:(id)label fontSize:(float)size trackWidthDelta:(float)delta;	// 0x32ad8141
- (void)_cacheLabel:(id)label size:(CGSize)size;	// 0x32ad7fbd
- (void)dealloc;	// 0x32ad7f09
// declared property getter: - (float)deltaFromDefaultTrackWidth;	// 0x32ad8765
- (void)drawRect:(CGRect)rect;	// 0x32ad8571
// converted property getter: - (float)fps;	// 0x32ad8545
- (BOOL)isAnimating;	// 0x32ad8555
// converted property getter: - (id)label;	// 0x32ad8361
- (void)movedFromWindow:(id)window;	// 0x32ad8721
- (void)setFPS:(float)fps;	// 0x32ad84b9
- (void)startAnimation;	// 0x32ad8371
- (void)stopAnimation;	// 0x32ad8469
@end

