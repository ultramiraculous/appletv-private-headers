/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImageView, UIKeyboardEmoji;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiView : UIControl {
@private
	UIKeyboardEmoji *_emoji;	// 72 = 0x48
	UIView *_popup;	// 76 = 0x4c
	UIImageView *_imageView;	// 80 = 0x50
}
@property(retain) UIKeyboardEmoji *emoji;	// G=0x302bef59; S=0x302bef6d; @synthesize=_emoji
@property(retain) UIImageView *imageView;	// G=0x302befc9; S=0x302befdd; @synthesize=_imageView
@property(retain) UIView *popup;	// G=0x302bef91; S=0x302befa5; @synthesize=_popup
+ (id)emojiViewForEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x302bee71
+ (void)recycleEmojiView:(id)view;	// 0x302bee19
- (id)initWithFrame:(CGRect)frame emoji:(id)emoji;	// 0x302be5bd
- (id)createAndInstallKeyPopupView;	// 0x302be75d
- (void)dealloc;	// 0x302be6f1
// declared property getter: - (id)emoji;	// 0x302bef59
// declared property getter: - (id)imageView;	// 0x302befc9
// declared property getter: - (id)popup;	// 0x302bef91
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x302bef6d
- (void)setEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x302bed49
// declared property setter: - (void)setImageView:(id)view;	// 0x302befdd
// declared property setter: - (void)setPopup:(id)popup;	// 0x302befa5
- (void)uninstallPopup;	// 0x302becfd
@end

