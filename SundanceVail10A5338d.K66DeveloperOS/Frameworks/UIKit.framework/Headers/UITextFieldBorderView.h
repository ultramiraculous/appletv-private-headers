/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextFieldBorderView : UIView {
	UIImage *_image;	// 84 = 0x54
}
- (id)initWithFrame:(CGRect)frame;	// 0x30c75099
- (void)_updateViewPropertiesForBackgroundImage;	// 0x30c751a1
- (void)dealloc;	// 0x30d610c9
- (void)layoutSubviews;	// 0x30c755f1
- (void)setImage:(id)image;	// 0x30c750e9
- (BOOL)useBlockyMagnificationInClassic;	// 0x30ddb445
@end

