/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, ATVImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItemContents : BRControl {
	BOOL _waitingForImages;	// 84 = 0x54
	BOOL _dimmed;	// 85 = 0x55
	BOOL _highlightRightJustifiedText;	// 86 = 0x56
	ATVImage *_leftImage;	// 88 = 0x58
	id<BRImageProxy> _leftImageProxy;	// 92 = 0x5c
	ATVImage *_rightImage;	// 96 = 0x60
	id<BRImageProxy> _rightImageProxy;	// 100 = 0x64
	NSString *_imageSeparatorText;	// 104 = 0x68
	NSString *_text;	// 108 = 0x6c
	NSString *_detailedText;	// 112 = 0x70
	NSString *_rightJustifiedText;	// 116 = 0x74
}
@property(copy) NSString *detailedText;	// G=0xb8955; S=0xb8969; @synthesize=_detailedText
@property(assign) BOOL dimmed;	// G=0xb886d; S=0xb8715; 
@property(assign) BOOL highlightRightJustifiedText;	// G=0xb805d; S=0xb8005; 
@property(copy) NSString *imageSeparatorText;	// G=0xb890d; S=0xb8921; @synthesize=_imageSeparatorText
@property(retain) ATVImage *leftImage;	// G=0xb887d; S=0xb8891; @synthesize=_leftImage
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0xb88a1; S=0xb88b5; @synthesize=_leftImageProxy
@property(retain) ATVImage *rightImage;	// G=0xb88c5; S=0xb88d9; @synthesize=_rightImage
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0xb88e9; S=0xb88fd; @synthesize=_rightImageProxy
@property(copy) NSString *rightJustifiedText;	// G=0xb8979; S=0xb898d; @synthesize=_rightJustifiedText
@property(copy) NSString *text;	// G=0xb8931; S=0xb8945; @synthesize=_text
- (id)init;	// 0xb7d09
- (void)_getRightJustifiedAttributed:(id *)attributed textRect:(CGRect *)rect;	// 0xb7e69
- (void)_imageLoadFailed:(id)failed;	// 0xb8ac1
- (void)_imageLoadSucceeded:(id)succeeded;	// 0xb899d
- (void)_setWaitingForImages:(BOOL)images;	// 0xb8b8d
- (void)dealloc;	// 0xb7d61
// declared property getter: - (id)detailedText;	// 0xb8955
// declared property getter: - (BOOL)dimmed;	// 0xb886d
- (void)drawRect:(CGRect)rect;	// 0xb806d
// declared property getter: - (BOOL)highlightRightJustifiedText;	// 0xb805d
// declared property getter: - (id)imageSeparatorText;	// 0xb890d
// declared property getter: - (id)leftImage;	// 0xb887d
// declared property getter: - (id)leftImageProxy;	// 0xb88a1
// declared property getter: - (id)rightImage;	// 0xb88c5
// declared property getter: - (id)rightImageProxy;	// 0xb88e9
// declared property getter: - (id)rightJustifiedText;	// 0xb8979
// declared property setter: - (void)setDetailedText:(id)text;	// 0xb8969
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xb8715
// declared property setter: - (void)setHighlightRightJustifiedText:(BOOL)text;	// 0xb8005
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0xb8921
// declared property setter: - (void)setLeftImage:(id)image;	// 0xb8891
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0xb88b5
// declared property setter: - (void)setRightImage:(id)image;	// 0xb88d9
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0xb88fd
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0xb898d
// declared property setter: - (void)setText:(id)text;	// 0xb8945
// declared property getter: - (id)text;	// 0xb8931
@end

