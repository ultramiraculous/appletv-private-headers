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
	UIImage *_customClearButtonImage;	// 344 = 0x158
	UIImage *_customClearButtonImagePressed;	// 348 = 0x15c
	NSMutableDictionary *_iconOffsets;	// 352 = 0x160
	NSValue *_searchTextOffsetValue;	// 356 = 0x164
}
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;	// G=0x30e71685; S=0x30e715e9; 
- (CGRect)_adjustedTextOrEditingRect:(CGRect)rect forBounds:(CGRect)bounds;	// 0x30c754a1
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x30d8b26d
- (id)_clearButtonImageForState:(unsigned)state;	// 0x30c74ea9
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x30e71699
- (id)_offsetValueForIcon:(int)icon;	// 0x30c74e49
// declared property getter: - (id)_searchTextOffsetValue;	// 0x30e71685
- (void)_setClearButtonImage:(id)image forState:(unsigned)state;	// 0x30c57a3d
- (void)_setOffsetValue:(id)value forIcon:(int)icon;	// 0x30e714d9
// declared property setter: - (void)_setSearchTextOffetValue:(id)value;	// 0x30e715e9
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x30d3c185
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x30c74cf1
- (void)dealloc;	// 0x30d6103d
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x30d3a1a5
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x30c74f85
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x30e716d1
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x30c7540d
@end

