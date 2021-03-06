/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItemContents : BRControl {
	BOOL _waitingForImages;	// 77 = 0x4d
	BOOL _dimmed;	// 78 = 0x4e
	BOOL _highlightRightJustifiedText;	// 79 = 0x4f
	BRImage *_leftImage;	// 80 = 0x50
	id<BRImageProxy> _leftImageProxy;	// 84 = 0x54
	BRImage *_rightImage;	// 88 = 0x58
	id<BRImageProxy> _rightImageProxy;	// 92 = 0x5c
	NSString *_imageSeparatorText;	// 96 = 0x60
	NSString *_text;	// 100 = 0x64
	NSString *_detailedText;	// 104 = 0x68
	NSString *_rightJustifiedText;	// 108 = 0x6c
}
@property(copy) NSString *detailedText;	// G=0x100875; S=0x100889; @synthesize=_detailedText
@property(assign) BOOL dimmed;	// G=0x10078d; S=0x10063d; 
@property(assign) BOOL highlightRightJustifiedText;	// G=0xfff89; S=0xfff39; 
@property(copy) NSString *imageSeparatorText;	// G=0x10082d; S=0x100841; @synthesize=_imageSeparatorText
@property(retain) BRImage *leftImage;	// G=0x10079d; S=0x1007b1; @synthesize=_leftImage
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x1007c1; S=0x1007d5; @synthesize=_leftImageProxy
@property(retain) BRImage *rightImage;	// G=0x1007e5; S=0x1007f9; @synthesize=_rightImage
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x100809; S=0x10081d; @synthesize=_rightImageProxy
@property(copy) NSString *rightJustifiedText;	// G=0x100899; S=0x1008ad; @synthesize=_rightJustifiedText
@property(copy) NSString *text;	// G=0x100851; S=0x100865; @synthesize=_text
- (id)init;	// 0xffc45
- (void)_getRightJustifiedAttributed:(id *)attributed textRect:(CGRect *)rect;	// 0xffda5
- (void)_imageLoadFailed:(id)failed;	// 0x1009dd
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x1008bd
- (void)_setWaitingForImages:(BOOL)images;	// 0x100aa9
- (void)dealloc;	// 0xffc9d
// declared property getter: - (id)detailedText;	// 0x100875
// declared property getter: - (BOOL)dimmed;	// 0x10078d
- (void)drawRect:(CGRect)rect;	// 0xfff99
// declared property getter: - (BOOL)highlightRightJustifiedText;	// 0xfff89
// declared property getter: - (id)imageSeparatorText;	// 0x10082d
// declared property getter: - (id)leftImage;	// 0x10079d
// declared property getter: - (id)leftImageProxy;	// 0x1007c1
// declared property getter: - (id)rightImage;	// 0x1007e5
// declared property getter: - (id)rightImageProxy;	// 0x100809
// declared property getter: - (id)rightJustifiedText;	// 0x100899
// declared property setter: - (void)setDetailedText:(id)text;	// 0x100889
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x10063d
// declared property setter: - (void)setHighlightRightJustifiedText:(BOOL)text;	// 0xfff39
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x100841
// declared property setter: - (void)setLeftImage:(id)image;	// 0x1007b1
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x1007d5
// declared property setter: - (void)setRightImage:(id)image;	// 0x1007f9
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x10081d
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x1008ad
// declared property setter: - (void)setText:(id)text;	// 0x100865
// declared property getter: - (id)text;	// 0x100851
@end

