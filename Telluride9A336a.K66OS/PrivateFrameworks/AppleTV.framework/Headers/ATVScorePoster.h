/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"

@class BRImage, NSString, ATVScorePosterReflectionControl;
@protocol BRImageProxy;

@interface ATVScorePoster : BRControl <BRMediaShelfViewCell> {
@private
	ATVScorePosterReflectionControl *_reflectionControl;	// 48 = 0x30
	BOOL _waitingForImages;	// 52 = 0x34
	BRImage *_backgroundImage;	// 56 = 0x38
	NSString *_upperLeftLabel1;	// 60 = 0x3c
	NSString *_upperLeftLabel2;	// 64 = 0x40
	NSString *_upperRightLabel;	// 68 = 0x44
	BRImage *_upperImage;	// 72 = 0x48
	id<BRImageProxy> _upperImageProxy;	// 76 = 0x4c
	NSString *_lowerLeftLabel1;	// 80 = 0x50
	NSString *_lowerLeftLabel2;	// 84 = 0x54
	NSString *_lowerRightLabel;	// 88 = 0x58
	BRImage *_lowerImage;	// 92 = 0x5c
	id<BRImageProxy> _lowerImageProxy;	// 96 = 0x60
	NSString *_centerLabel1;	// 100 = 0x64
	NSString *_centerLabel2;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x339f5ff9; S=0x339f6009; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *centerLabel1;	// G=0x339f6235; S=0x339f6245; @synthesize=_centerLabel1
@property(retain, nonatomic) NSString *centerLabel2;	// G=0x339f6269; S=0x339f6279; @synthesize=_centerLabel2
@property(retain, nonatomic) BRImage *lowerImage;	// G=0x339f61cd; S=0x339f61dd; @synthesize=_lowerImage
@property(retain, nonatomic) id<BRImageProxy> lowerImageProxy;	// G=0x339f6201; S=0x339f6211; @synthesize=_lowerImageProxy
@property(retain, nonatomic) NSString *lowerLeftLabel1;	// G=0x339f6131; S=0x339f6141; @synthesize=_lowerLeftLabel1
@property(retain, nonatomic) NSString *lowerLeftLabel2;	// G=0x339f6165; S=0x339f6175; @synthesize=_lowerLeftLabel2
@property(retain, nonatomic) NSString *lowerRightLabel;	// G=0x339f6199; S=0x339f61a9; @synthesize=_lowerRightLabel
@property(retain, nonatomic) BRImage *reflectionBackgroundImage;	// G=0x339f533d; S=0x339f531d; 
@property(retain, nonatomic) BRImage *upperImage;	// G=0x339f60c9; S=0x339f60d9; @synthesize=_upperImage
@property(retain, nonatomic) id<BRImageProxy> upperImageProxy;	// G=0x339f60fd; S=0x339f610d; @synthesize=_upperImageProxy
@property(retain, nonatomic) NSString *upperLeftLabel1;	// G=0x339f602d; S=0x339f603d; @synthesize=_upperLeftLabel1
@property(retain, nonatomic) NSString *upperLeftLabel2;	// G=0x339f6061; S=0x339f6071; @synthesize=_upperLeftLabel2
@property(retain, nonatomic) NSString *upperRightLabel;	// G=0x339f6095; S=0x339f60a5; @synthesize=_upperRightLabel
- (id)init;	// 0x339f50e9
- (CGRect)_contentFrame;	// 0x339f629d
- (void)_imageLoadFailed:(id)failed;	// 0x339f6455
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x339f6339
- (void)_setWaitingForImages:(BOOL)images;	// 0x339f651d
- (id)accessibilityLabel;	// 0x339f6635
// declared property getter: - (id)backgroundImage;	// 0x339f5ff9
// declared property getter: - (id)centerLabel1;	// 0x339f6235
// declared property getter: - (id)centerLabel2;	// 0x339f6269
- (void)dealloc;	// 0x339f519d
- (void)drawInContext:(CGContextRef)context;	// 0x339f53f5
- (CGRect)focusCursorFrame;	// 0x339f535d
- (void)hideTextLayers;	// 0x339f5fc1
- (BOOL)isAccessibilityElement;	// 0x339f6631
// declared property getter: - (id)lowerImage;	// 0x339f61cd
// declared property getter: - (id)lowerImageProxy;	// 0x339f6201
// declared property getter: - (id)lowerLeftLabel1;	// 0x339f6131
// declared property getter: - (id)lowerLeftLabel2;	// 0x339f6165
// declared property getter: - (id)lowerRightLabel;	// 0x339f6199
// declared property getter: - (id)reflectionBackgroundImage;	// 0x339f533d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x339f6009
// declared property setter: - (void)setCenterLabel1:(id)a1;	// 0x339f6245
// declared property setter: - (void)setCenterLabel2:(id)a2;	// 0x339f6279
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x339f5fc5
// declared property setter: - (void)setLowerImage:(id)image;	// 0x339f61dd
// declared property setter: - (void)setLowerImageProxy:(id)proxy;	// 0x339f6211
// declared property setter: - (void)setLowerLeftLabel1:(id)a1;	// 0x339f6141
// declared property setter: - (void)setLowerLeftLabel2:(id)a2;	// 0x339f6175
// declared property setter: - (void)setLowerRightLabel:(id)label;	// 0x339f61a9
// declared property setter: - (void)setReflectionBackgroundImage:(id)image;	// 0x339f531d
// declared property setter: - (void)setUpperImage:(id)image;	// 0x339f60d9
// declared property setter: - (void)setUpperImageProxy:(id)proxy;	// 0x339f610d
// declared property setter: - (void)setUpperLeftLabel1:(id)a1;	// 0x339f603d
// declared property setter: - (void)setUpperLeftLabel2:(id)a2;	// 0x339f6071
// declared property setter: - (void)setUpperRightLabel:(id)label;	// 0x339f60a5
// declared property getter: - (id)upperImage;	// 0x339f60c9
// declared property getter: - (id)upperImageProxy;	// 0x339f60fd
// declared property getter: - (id)upperLeftLabel1;	// 0x339f602d
// declared property getter: - (id)upperLeftLabel2;	// 0x339f6061
// declared property getter: - (id)upperRightLabel;	// 0x339f6095
@end

