/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRAsyncImageControl, BRReflectionControl, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsPreviewView : BRControl {
	BRAsyncImageControl *_image;	// 84 = 0x54
	BRReflectionControl *_imageReflectionControl;	// 88 = 0x58
	BRImageControl *_overlayControl;	// 92 = 0x5c
	BRReflectionControl *_overlayReflectionControl;	// 96 = 0x60
	BRTextControl *_instructionsLabel;	// 100 = 0x64
	BRTextControl *_progressLabel;	// 104 = 0x68
	BRProgressBarWidget *_progressBar;	// 108 = 0x6c
	CGPoint _imageOffset;	// 112 = 0x70
	CGSize _imageScale;	// 120 = 0x78
	CGPoint _overlayOffset;	// 128 = 0x80
	CGSize _overlayScale;	// 136 = 0x88
}
@property(assign, getter=isProgressHidden) BOOL progressHidden;	// G=0x9b621; S=0x9b645; converted property
@property(readonly, retain) BRTextControl *progressLabel;	// G=0x9b725; converted property
+ (id)defaultProductImageProxy;	// 0x9a7ed
- (id)init;	// 0x9a841
- (void).cxx_destruct;	// 0x9b859
- (void)_imageLoaded:(id)loaded;	// 0x9b7d5
- (id)accessibilityLabel;	// 0x9b739
- (void)dealloc;	// 0x9acfd
// converted property getter: - (BOOL)isProgressHidden;	// 0x9b621
- (void)layoutSubcontrols;	// 0x9add5
- (id)progress;	// 0x9b711
// converted property getter: - (id)progressLabel;	// 0x9b725
- (void)setImageProxy:(id)proxy;	// 0x9b359
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x9b385
- (void)setImageReflectionAmount:(float)amount;	// 0x9b455
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x9b5b9
- (void)setOverlayImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x9b4a9
- (void)setOverlayReflectionAmount:(float)amount;	// 0x9b565
// converted property setter: - (void)setProgressHidden:(BOOL)hidden;	// 0x9b645
- (void)setProgressLabel:(id)label withAttributes:(id)attributes;	// 0x9b689
- (void)setProgressPercentage:(float)percentage;	// 0x9b6f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x9ad69
@end

