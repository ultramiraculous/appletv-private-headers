/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRAsyncImageControl, NSAttributedString, BRTextControl, NSURL;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVStampView : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	XXStruct_qlg9jA _textLeftMargin;	// 92 = 0x5c
	BRTextControl *_textControl;	// 96 = 0x60
	BRAsyncImageControl *_imageControl;	// 100 = 0x64
	NSURL *_imageURL;	// 104 = 0x68
	XXStruct_40SSZC _preferredImageSize;	// 108 = 0x6c
}
@property(retain, nonatomic) BRAsyncImageControl *imageControl;	// G=0x28215; S=0x28225; @synthesize=_imageControl
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x28165; S=0x27e89; @synthesize=_imageProxy
@property(retain, nonatomic) NSURL *imageURL;	// G=0x2824d; S=0x2825d; @synthesize=_imageURL
@property(assign, nonatomic) XXStruct_40SSZC preferredImageSize;	// G=0x281b1; S=0x281c9; @synthesize=_preferredImageSize
@property(retain, nonatomic) NSAttributedString *text;	// G=0x28175; S=0x27ca9; @synthesize=_text
@property(retain, nonatomic) BRTextControl *textControl;	// G=0x281dd; S=0x281ed; @synthesize=_textControl
@property(assign, nonatomic) XXStruct_qlg9jA textLeftMargin;	// G=0x28185; S=0x281a1; @synthesize=_textLeftMargin
+ (id)defaultTextAttributes;	// 0x27b11
- (id)init;	// 0x27b91
- (void).cxx_destruct;	// 0x28285
// declared property getter: - (id)imageControl;	// 0x28215
// declared property getter: - (id)imageProxy;	// 0x28165
- (CGSize)imageSize;	// 0x27da1
// declared property getter: - (id)imageURL;	// 0x2824d
- (void)layoutSubcontrols;	// 0x27f75
// declared property getter: - (XXStruct_40SSZC)preferredImageSize;	// 0x281b1
// declared property setter: - (void)setImageControl:(id)control;	// 0x28225
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x27e89
// declared property setter: - (void)setImageURL:(id)url;	// 0x2825d
// declared property setter: - (void)setPreferredImageSize:(XXStruct_40SSZC)size;	// 0x281c9
// declared property setter: - (void)setText:(id)text;	// 0x27ca9
// declared property setter: - (void)setTextControl:(id)control;	// 0x281ed
// declared property setter: - (void)setTextLeftMargin:(XXStruct_qlg9jA)margin;	// 0x281a1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x27d81
// declared property getter: - (id)text;	// 0x28175
// declared property getter: - (id)textControl;	// 0x281dd
// declared property getter: - (XXStruct_qlg9jA)textLeftMargin;	// 0x28185
@end

