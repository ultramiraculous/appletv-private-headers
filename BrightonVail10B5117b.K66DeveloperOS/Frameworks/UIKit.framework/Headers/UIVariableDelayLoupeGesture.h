/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
	UIResponder<UITextInput> *_textView;	// 104 = 0x68
}
@property(assign) UIResponder<UITextInput> *textView;	// G=0x32da3da5; S=0x32d11c3d; @synthesize=_textView
- (void)invalidate;	// 0x32d7aad5
- (BOOL)isCloseToCaret;	// 0x32da3c69
// declared property setter: - (void)setTextView:(id)view;	// 0x32d11c3d
- (void)startTimer;	// 0x32da3c01
// declared property getter: - (id)textView;	// 0x32da3da5
@end
