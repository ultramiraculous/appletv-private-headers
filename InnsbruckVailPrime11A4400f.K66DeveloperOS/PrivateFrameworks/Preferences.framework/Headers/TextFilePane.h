/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSEditingPane.h"

@class UITextView;

@interface TextFilePane : PSEditingPane {
	UITextView *_textView;	// 108 = 0x6c
}
- (id)initWithFrame:(CGRect)frame;	// 0x3249a34d
- (void)dealloc;	// 0x3249a321
- (BOOL)handlesDoneButton;	// 0x3249a31d
- (void)setPreferenceSpecifier:(id)specifier;	// 0x3249a4c9
@end
