/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class UIImage;

@interface TPLCDBar : UIImageView {
	UIImage *_barBackground;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *barBackground;	// G=0x31422329; S=0x31422469; @synthesize=_barBackground
+ (id)backgroundImage;	// 0x31422431
+ (float)defaultHeight;	// 0x31422371
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x31422385
+ (void)preloadImages;	// 0x31422361
- (id)initWithDefaultSize;	// 0x31422339
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x3142264d
- (id)initWithFrame:(CGRect)frame;	// 0x314225d5
// declared property getter: - (id)barBackground;	// 0x31422329
- (CGRect)contentStretchRect;	// 0x31422491
- (void)dealloc;	// 0x314223e5
// declared property setter: - (void)setBarBackground:(id)background;	// 0x31422469
- (void)setOrientation:(int)orientation;	// 0x3142234d
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x31422519
@end

