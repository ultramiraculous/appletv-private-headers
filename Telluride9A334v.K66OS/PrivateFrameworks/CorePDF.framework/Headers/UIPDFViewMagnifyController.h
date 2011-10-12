/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFMagnifiedView, UIWindow, UIPDFPageView;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	CGPoint _touchPoint;	// 12 = 0xc
	float _loupeRadius;	// 20 = 0x14
	float _power;	// 24 = 0x18
	CGSize _magnifierSize;	// 28 = 0x1c
	BOOL _showingLoupe;	// 36 = 0x24
	UIPDFMagnifiedView *_magnifiedView;	// 40 = 0x28
	UIWindow *_textEffectsWindow;	// 44 = 0x2c
	UIPDFPageView *_pageView;	// 48 = 0x30
	float _magnification;	// 52 = 0x34
}
@property(assign, nonatomic) float magnification;	// G=0x307eaaa5; S=0x307eaab5; @synthesize=_magnification
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x307eaac5; S=0x307eaad5; @synthesize=_pageView
- (id)init;	// 0x307eaae5
- (CGImageRef)createBackingImage;	// 0x307eb581
- (CGImageRef)createBitMap:(CGRect)map source:(CGRect)source;	// 0x307eb7a9
- (void)hide;	// 0x307eab9d
// declared property getter: - (float)magnification;	// 0x307eaaa5
- (void)move;	// 0x307eabe5
// declared property getter: - (id)pageView;	// 0x307eaac5
- (void)selectPower;	// 0x307eafb1
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x307eaab5
// declared property setter: - (void)setPageView:(id)view;	// 0x307eaad5
- (void)setPosition:(CGPoint)position viewPoint:(CGPoint)point loupe:(BOOL)loupe;	// 0x307eb9dd
- (void)setSelectionPath;	// 0x307eb0b1
- (void)showGlass:(BOOL)glass size:(CGSize)size;	// 0x307ead8d
- (void)showLoupe;	// 0x307ead41
- (void)showMagnifier;	// 0x307eacf9
- (CGPoint)transformPointToTSpace:(CGPoint)tspace transform:(CGAffineTransform *)transform;	// 0x307eb479
@end

