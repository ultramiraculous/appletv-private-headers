/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRAsyncImageControl, BRTextControl, BRReflectionControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsPreviewView : BRControl {
	BRAsyncImageControl *_image;	// 84 = 0x54
	BRReflectionControl *_imageReflectionControl;	// 88 = 0x58
	BRImageControl *_overlayControl;	// 92 = 0x5c
	BRReflectionControl *_overlayReflectionControl;	// 96 = 0x60
	BRTextControl *_progressLabel;	// 100 = 0x64
	BRProgressBarWidget *_progressBar;	// 104 = 0x68
	CGPoint _imageOffset;	// 108 = 0x6c
	CGSize _imageScale;	// 116 = 0x74
	CGPoint _overlayOffset;	// 124 = 0x7c
	CGSize _overlayScale;	// 132 = 0x84
	BRTextControl *_instructionsLabel;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) BRTextControl *instructionsLabel;	// G=0x2d3c9d; @synthesize=_instructionsLabel
@property(assign, getter=isProgressHidden) BOOL progressHidden;	// G=0x2d3a49; S=0x2d3a6d; converted property
@property(readonly, retain) BRTextControl *progressLabel;	// G=0x2d3b4d; converted property
+ (id)defaultProductImageProxy;	// 0x2d2ac5
- (id)init;	// 0x2d2b19
- (void).cxx_destruct;	// 0x2d3cad
- (void)_imageLoaded:(id)loaded;	// 0x2d3c19
- (id)accessibilityLabel;	// 0x2d3b61
- (void)dealloc;	// 0x2d2fed
// declared property getter: - (id)instructionsLabel;	// 0x2d3c9d
// converted property getter: - (BOOL)isProgressHidden;	// 0x2d3a49
- (void)layoutSubcontrols;	// 0x2d30cd
- (id)progress;	// 0x2d3b39
// converted property getter: - (id)progressLabel;	// 0x2d3b4d
- (void)setImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2d37b5
- (void)setImageProxy:(id)proxy;	// 0x2d36bd
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2d36e9
- (void)setImageReflectionAmount:(float)amount;	// 0x2d3851
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x2d39b1
- (void)setOverlayImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x2d38a5
- (void)setOverlayReflectionAmount:(float)amount;	// 0x2d395d
// converted property setter: - (void)setProgressHidden:(BOOL)hidden;	// 0x2d3a6d
- (void)setProgressLabel:(id)label withAttributes:(id)attributes;	// 0x2d3ab1
- (void)setProgressPercentage:(float)percentage;	// 0x2d3b19
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d3059
@end

