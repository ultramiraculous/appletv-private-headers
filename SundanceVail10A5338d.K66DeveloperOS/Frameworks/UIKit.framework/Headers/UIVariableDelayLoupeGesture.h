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
@property(assign) UIResponder<UITextInput> *textView;	// G=0x30cfe4a5; S=0x30c56c99; @synthesize=_textView
- (void)invalidate;	// 0x30ce9e15
- (BOOL)isCloseToCaret;	// 0x30cfe369
// declared property setter: - (void)setTextView:(id)view;	// 0x30c56c99
- (void)startTimer;	// 0x30cfe301
// declared property getter: - (id)textView;	// 0x30cfe4a5
@end

