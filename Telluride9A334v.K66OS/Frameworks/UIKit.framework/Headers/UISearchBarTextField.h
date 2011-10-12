/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextField.h"

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarTextField : UITextField {
@private
	UIImage *_customClearButtonImage;	// 288 = 0x120
	UIImage *_customClearButtonImagePressed;	// 292 = 0x124
	NSMutableDictionary *_iconOffsets;	// 296 = 0x128
	NSValue *_searchTextOffsetValue;	// 300 = 0x12c
}
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;	// G=0x302aa3a9; S=0x302aa309; 
- (CGRect)_adjustedTextOrEditingRect:(CGRect)rect forBounds:(CGRect)bounds;	// 0x300972cd
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x301c3e71
- (id)_clearButtonImageForState:(unsigned)state;	// 0x30096c61
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x302aa3b9
- (id)_offsetValueForIcon:(int)icon;	// 0x30096c09
// declared property getter: - (id)_searchTextOffsetValue;	// 0x302aa3a9
- (void)_setClearButtonImage:(id)image forState:(unsigned)state;	// 0x30077a51
- (void)_setOffsetValue:(id)value forIcon:(int)icon;	// 0x302aa1c9
// declared property setter: - (void)_setSearchTextOffetValue:(id)value;	// 0x302aa309
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x3016a041
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x30096ab9
- (void)dealloc;	// 0x30191f71
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x30167fe9
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x30096cf5
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x302aa3f1
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x3009723d
@end

