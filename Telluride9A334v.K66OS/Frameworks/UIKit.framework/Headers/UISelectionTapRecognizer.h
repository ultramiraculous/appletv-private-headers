/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextTapRecognizer.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UISelectionTapRecognizer : UITextTapRecognizer {
@private
	UIView<UITextSelectingContainer> *_textView;	// 72 = 0x48
}
@property(assign) UIView<UITextSelectingContainer> *textView;	// G=0x3030690d; S=0x3030691d; @synthesize=_textView
- (BOOL)isCloseToSelection;	// 0x30306551
- (void)setState:(int)state;	// 0x303068a1
// declared property setter: - (void)setTextView:(id)view;	// 0x3030691d
// declared property getter: - (id)textView;	// 0x3030690d
@end
