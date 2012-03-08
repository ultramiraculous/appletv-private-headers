/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRMediaShelfViewCell.h"

@class BRImageControl, BRAsyncImageControl, BRReflectionControl, ATVFlagstaffPosterHeader, ATVFlagstaffPosterBottomOverlay;

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
@property(readonly, assign, nonatomic) BRImageControl *backgroundImageControl;	// G=0x30216f85; @synthesize=_backgroundImageControl
@property(readonly, assign, nonatomic) ATVFlagstaffPosterBottomOverlay *bottomOverlay;	// G=0x30216fa5; @synthesize=_bottomOverlay
@property(readonly, assign, nonatomic) ATVFlagstaffPosterHeader *header;	// G=0x30216f75; @synthesize=_header
@property(readonly, assign, nonatomic) BRAsyncImageControl *imageControl;	// G=0x30216f95; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x30216f65; S=0x30216b95; @synthesize=_style
+ (id)flagstaffPosterWithStyle:(int)style;	// 0x30216a19
- (id)init;	// 0x30216a55
- (id)initWithStyle:(int)style;	// 0x30216a69
- (CGRect)_contentFrame;	// 0x30216fb5
- (void)_imageControlImageReady:(id)ready;	// 0x302173a5
- (void)_setStyle:(int)style;	// 0x30217051
// declared property getter: - (id)backgroundImageControl;	// 0x30216f85
// declared property getter: - (id)bottomOverlay;	// 0x30216fa5
- (void)dealloc;	// 0x30216ac9
- (CGRect)focusCursorFrame;	// 0x30216bc1
// declared property getter: - (id)header;	// 0x30216f75
- (void)hideTextLayers;	// 0x30216c59
// declared property getter: - (id)imageControl;	// 0x30216f95
- (BOOL)isAccessibilityElement;	// 0x30216f61
- (void)layoutSubcontrols;	// 0x30216ca1
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x30216c5d
// declared property setter: - (void)setStyle:(int)style;	// 0x30216b95
// declared property getter: - (int)style;	// 0x30216f65
@end
