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
- (id)initWithFrame:(CGRect)frame;	// 0x302b999d
- (void)_updateViewPropertiesForBackgroundImage;	// 0x302b9aa5
- (void)dealloc;	// 0x30381fcd
- (void)layoutSubviews;	// 0x302ba73d
- (void)setImage:(id)image;	// 0x302b99ed
- (BOOL)useBlockyMagnificationInClassic;	// 0x30412e11
@end

