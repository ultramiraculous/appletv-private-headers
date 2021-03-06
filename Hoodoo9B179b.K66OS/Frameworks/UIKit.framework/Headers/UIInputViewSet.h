/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject {
@private
	UIView *_inputView;	// 4 = 0x4
	UIView *_inputAccessoryView;	// 8 = 0x8
	BOOL _isKeyboard;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x32ebfd79; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x32ebf739; S=0x32ebf81d; @synthesize=_inputAccessoryView
@property(retain, nonatomic) UIView *inputView;	// G=0x32ebf749; S=0x32ebf841; @synthesize=_inputView
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x32f3bd55; 
+ (id)emptyInputSet;	// 0x32ebfdb1
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x32ebf759
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x32fa4aa1
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x32ebf7ad
- (BOOL)containsResponder:(id)responder;	// 0x32ebf911
- (void)dealloc;	// 0x32ec00cd
- (id)description;	// 0x331dbda5
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x331dbfc5
// declared property getter: - (id)inputAccessoryView;	// 0x32ebf739
// declared property getter: - (id)inputView;	// 0x32ebf749
// declared property getter: - (BOOL)isEmpty;	// 0x32ebfd79
- (BOOL)isEqual:(id)equal;	// 0x32ebfe11
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x32ff3f05
// declared property getter: - (id)keyboard;	// 0x32f3bd55
- (int)keyboardOrientation:(id)orientation;	// 0x331dbf61
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x32ebf81d
// declared property setter: - (void)setInputView:(id)view;	// 0x32ebf841
- (BOOL)usesKeyClicks;	// 0x331dbd05
- (BOOL)visible;	// 0x32f3ccbd
@end

