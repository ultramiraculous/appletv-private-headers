/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRReflectionControl, ATVFlagstaffPreviewImageOverLay, NSString, BRImage, BRAsyncImageControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImage : BRControl <BRReady> {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRAsyncImageControl *_logoImageControl;	// 88 = 0x58
	BRReflectionControl *_reflectionControl;	// 92 = 0x5c
	ATVFlagstaffPreviewImageOverLay *_overLayControl;	// 96 = 0x60
	BOOL _isReady;	// 100 = 0x64
}
@property(retain, nonatomic) BRImage *image;	// G=0x19a289; S=0x19a179; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x19a40d; S=0x19a2a9; 
@property(readonly, assign) BOOL isReady;	// G=0x19a169; converted property
@property(retain, nonatomic) BRImage *logoImage;	// G=0x19a4b9; S=0x19a42d; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x19a565; S=0x19a4d9; 
@property(copy, nonatomic) NSString *text1;	// G=0x19a5a5; S=0x19a585; 
@property(copy, nonatomic) NSString *text2;	// G=0x19a5e5; S=0x19a5c5; 
@property(copy, nonatomic) NSString *text3;	// G=0x19a625; S=0x19a605; 
- (id)init;	// 0x199f81
- (void)_imageReady:(id)ready;	// 0x19a789
- (void)dealloc;	// 0x19a061
- (void)getReady;	// 0x19a119
// declared property getter: - (id)image;	// 0x19a289
// declared property getter: - (id)imageProxy;	// 0x19a40d
// converted property getter: - (BOOL)isReady;	// 0x19a169
- (void)layoutSubcontrols;	// 0x19a645
// declared property getter: - (id)logoImage;	// 0x19a4b9
// declared property getter: - (id)logoImageProxy;	// 0x19a565
// declared property setter: - (void)setImage:(id)image;	// 0x19a179
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x19a2a9
// declared property setter: - (void)setLogoImage:(id)image;	// 0x19a42d
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x19a4d9
// declared property setter: - (void)setText1:(id)a1;	// 0x19a585
// declared property setter: - (void)setText2:(id)a2;	// 0x19a5c5
// declared property setter: - (void)setText3:(id)a3;	// 0x19a605
// declared property getter: - (id)text1;	// 0x19a5a5
// declared property getter: - (id)text2;	// 0x19a5e5
// declared property getter: - (id)text3;	// 0x19a625
@end

