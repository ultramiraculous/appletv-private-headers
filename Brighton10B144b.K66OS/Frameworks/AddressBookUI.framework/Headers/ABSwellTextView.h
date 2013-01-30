/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UITextViewDelegate.h"
#import <UIView.h> // Unknown library

@class NSString, UIColor, UITextView, UIFont;
@protocol ABSwellTextViewDelegate;

@interface ABSwellTextView : UIView <UITextViewDelegate> {
	UITextView *_textView;	// 84 = 0x54
	float _maxHeight;	// 88 = 0x58
	BOOL _allowsEditing;	// 92 = 0x5c
	id<ABSwellTextViewDelegate> _delegate;	// 96 = 0x60
	struct {
		unsigned delegateImplementsShouldBeginEditing : 1;
		unsigned delegateImplementsShouldEndEditing : 1;
		unsigned delegateImplementsDidBeginEditing : 1;
		unsigned delegateImplementsDidEndEditing : 1;
		unsigned delegateImplementsDidChange : 1;
	} _flags;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x3094cf21; S=0x3094cf31; @synthesize=_allowsEditing
@property(assign, nonatomic) id<ABSwellTextViewDelegate> delegate;	// G=0x3094cf41; S=0x3094cb39; @synthesize=_delegate
@property(assign, nonatomic) UIFont *font;	// G=0x3094c90d; S=0x3094c92d; 
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3094c811; S=0x3094c835; 
@property(assign, nonatomic) UIColor *highlightedTextColor;	// G=0x3094c855; S=0x3094c875; 
@property(assign, nonatomic) float maxHeight;	// G=0x3094cf11; S=0x3094c32d; @synthesize=_maxHeight
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x3094c2e9; S=0x3094c30d; 
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x3094cea1; S=0x3094ce81; 
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x3094cee1; S=0x3094cec1; 
@property(assign, nonatomic) NSString *text;	// G=0x3094c895; S=0x3094c8b5; 
@property(assign, nonatomic) UIColor *textColor;	// G=0x3094c94d; S=0x3094c96d; 
+ (float)lineHeightWithFont:(id)font;	// 0x3094c33d
- (id)initWithFrame:(CGRect)frame;	// 0x3094c079
- (void)_beginPinningInputViews;	// 0x3094c799
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x3094c7d9
- (void)_endPinningInputViews;	// 0x3094c7b9
- (void)abUITextView:(id)view contentSizeChanged:(CGSize)changed;	// 0x3094cd65
- (float)abUITextView:(id)view heightForContentSize:(CGSize)contentSize;	// 0x3094c351
// declared property getter: - (BOOL)allowsEditing;	// 0x3094cf21
- (BOOL)becomeFirstResponder;	// 0x3094c715
- (BOOL)canBecomeFirstResponder;	// 0x3094c6ed
- (BOOL)canResignFirstResponder;	// 0x3094c751
- (void)dealloc;	// 0x3094c225
// declared property getter: - (id)delegate;	// 0x3094cf41
// declared property getter: - (id)font;	// 0x3094c90d
// declared property getter: - (id)highlightedTextColor;	// 0x3094c855
- (BOOL)isFirstResponder;	// 0x3094c6c9
// declared property getter: - (BOOL)isHighlighted;	// 0x3094c811
// declared property getter: - (BOOL)isScrollEnabled;	// 0x3094c2e9
// declared property getter: - (float)maxHeight;	// 0x3094cf11
- (CGRect)rectForSelection;	// 0x3094c98d
- (BOOL)resignFirstResponder;	// 0x3094c775
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x3094cf31
- (void)setBackgroundColor:(id)color;	// 0x3094c5d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3094cb39
// declared property setter: - (void)setFont:(id)font;	// 0x3094c92d
- (void)setFrame:(CGRect)frame;	// 0x3094c491
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3094c835
// declared property setter: - (void)setHighlightedTextColor:(id)color;	// 0x3094c875
- (void)setKeyboardSettings:(id)settings;	// 0x3094ca7d
// declared property setter: - (void)setMaxHeight:(float)height;	// 0x3094c32d
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x3094c30d
// declared property setter: - (void)setShadowColor:(id)color;	// 0x3094ce81
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x3094cec1
// declared property setter: - (void)setText:(id)text;	// 0x3094c8b5
// declared property setter: - (void)setTextColor:(id)color;	// 0x3094c96d
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3094c2a1
// declared property getter: - (id)shadowColor;	// 0x3094cea1
// declared property getter: - (CGSize)shadowOffset;	// 0x3094cee1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3094c3f1
// declared property getter: - (id)text;	// 0x3094c895
// declared property getter: - (id)textColor;	// 0x3094c94d
- (void)textViewDidBeginEditing:(id)textView;	// 0x3094ccf5
- (void)textViewDidEndEditing:(id)textView;	// 0x3094cd2d
- (BOOL)textViewShouldBeginEditing:(id)textView;	// 0x3094cc75
- (BOOL)textViewShouldEndEditing:(id)textView;	// 0x3094ccb5
- (void)textViewTextDidChange:(id)textViewText;	// 0x3094cc3d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3094c621
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3094c699
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3094c651
@end
