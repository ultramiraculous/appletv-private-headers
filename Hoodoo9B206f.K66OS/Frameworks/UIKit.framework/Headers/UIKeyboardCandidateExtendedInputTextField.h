/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSTimer, NSString, UILabel;
@protocol UIKeyboardCandidateExtendedInputTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputTextField : UIView {
@private
	BOOL _caretBlinking;	// 46 = 0x2e
	id<UIKeyboardCandidateExtendedInputTextFieldDelegate> _delegate;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	UIView *_caretView;	// 56 = 0x38
	NSTimer *_caretTimer;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL caretBlinking;	// G=0x356b2109; S=0x356b1d7d; @synthesize=_caretBlinking
@property(retain, nonatomic) NSTimer *caretTimer;	// G=0x356b2181; S=0x356b2191; @synthesize=_caretTimer
@property(retain, nonatomic) UIView *caretView;	// G=0x356b200d; S=0x356b215d; @synthesize=_caretView
@property(assign, nonatomic) id<UIKeyboardCandidateExtendedInputTextFieldDelegate> delegate;	// G=0x356b2119; S=0x356b2129; @synthesize=_delegate
@property(retain, nonatomic) UILabel *label;	// G=0x356b1e85; S=0x356b2139; @synthesize=_label
@property(copy, nonatomic) NSString *text;	// G=0x356b1d11; S=0x356b1d39; 
+ (id)font;	// 0x356b17ad
- (id)initWithFrame:(CGRect)frame;	// 0x356b16a5
// declared property getter: - (BOOL)caretBlinking;	// 0x356b2109
// declared property getter: - (id)caretTimer;	// 0x356b2181
- (void)caretTimerFired:(id)fired;	// 0x356b1c6d
// declared property getter: - (id)caretView;	// 0x356b200d
- (void)dealloc;	// 0x356b1711
// declared property getter: - (id)delegate;	// 0x356b2119
- (void)hideCaret;	// 0x356b1bc1
// declared property getter: - (id)label;	// 0x356b1e85
- (void)layout;	// 0x356b185d
// declared property setter: - (void)setCaretBlinking:(BOOL)blinking;	// 0x356b1d7d
// declared property setter: - (void)setCaretTimer:(id)timer;	// 0x356b2191
// declared property setter: - (void)setCaretView:(id)view;	// 0x356b215d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x356b2129
- (void)setFrame:(CGRect)frame;	// 0x356b1cc9
// declared property setter: - (void)setLabel:(id)label;	// 0x356b2139
// declared property setter: - (void)setText:(id)text;	// 0x356b1d39
- (void)showCaret;	// 0x356b1b09
// declared property getter: - (id)text;	// 0x356b1d11
- (int)textEffectsVisibilityLevel;	// 0x356b1799
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x356b17d1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x356b1859
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x356b17d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x356b17d5
@end

