/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"

@class ATVFlagstaffPosterHeader, BRReflectionControl, ATVFlagstaffPosterBottomOverlay, BRImageControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPoster : BRControl <BRMediaShelfViewCell> {
@private
	BRReflectionControl *_reflectionControl;	// 48 = 0x30
	int _style;	// 52 = 0x34
	ATVFlagstaffPosterHeader *_header;	// 56 = 0x38
	BRImageControl *_backgroundImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_imageControl;	// 64 = 0x40
	ATVFlagstaffPosterBottomOverlay *_bottomOverlay;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRImageControl *backgroundImageControl;	// G=0x366152e9; @synthesize=_backgroundImageControl
@property(readonly, assign, nonatomic) ATVFlagstaffPosterBottomOverlay *bottomOverlay;	// G=0x36615309; @synthesize=_bottomOverlay
@property(readonly, assign, nonatomic) ATVFlagstaffPosterHeader *header;	// G=0x366152d9; @synthesize=_header
@property(readonly, assign, nonatomic) BRAsyncImageControl *imageControl;	// G=0x366152f9; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x366152c9; S=0x36614ef9; @synthesize=_style
+ (id)flagstaffPosterWithStyle:(int)style;	// 0x36614d7d
- (id)init;	// 0x36614db9
- (id)initWithStyle:(int)style;	// 0x36614dcd
- (CGRect)_contentFrame;	// 0x36615319
- (void)_imageControlImageReady:(id)ready;	// 0x36615709
- (void)_setStyle:(int)style;	// 0x366153b5
// declared property getter: - (id)backgroundImageControl;	// 0x366152e9
// declared property getter: - (id)bottomOverlay;	// 0x36615309
- (void)dealloc;	// 0x36614e2d
- (CGRect)focusCursorFrame;	// 0x36614f25
// declared property getter: - (id)header;	// 0x366152d9
- (void)hideTextLayers;	// 0x36614fbd
// declared property getter: - (id)imageControl;	// 0x366152f9
- (BOOL)isAccessibilityElement;	// 0x366152c5
- (void)layoutSubcontrols;	// 0x36615005
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x36614fc1
// declared property setter: - (void)setStyle:(int)style;	// 0x36614ef9
// declared property getter: - (int)style;	// 0x366152c9
@end
