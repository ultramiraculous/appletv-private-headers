/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRKeyboard, BRKeyboardCandidates, NSArray, NSString, NSMutableString;

__attribute__((visibility("hidden")))
@interface BRInputMethod : XXUnknownSuperclass {
	int _textEntryStyle;	// 4 = 0x4
	NSArray *_keyboards;	// 8 = 0x8
	BOOL _includeHistoryKeyboard;	// 12 = 0xc
	NSString *_mostRecentCandidateCharacter;	// 16 = 0x10
	NSMutableString *_candidatesBuffer;	// 20 = 0x14
	BRKeyboard *_activeKeyboard;	// 24 = 0x18
	BRKeyboardCandidates *_candidatesKeyboard;	// 28 = 0x1c
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x395f45; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x39622d; S=0x395e91; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x395f05; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x395e81; converted property
- (id)init;	// 0x395ce1
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x396241
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x39623d
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x3962fd
- (id)candidates;	// 0x396229
// converted property getter: - (id)candidatesKeyboard;	// 0x395f45
- (void)dealloc;	// 0x395d45
- (BOOL)deleteText;	// 0x3960f1
- (void)flushText;	// 0x3961b5
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x39622d
- (BOOL)inputText:(id)text;	// 0x395fd1
- (id)isoLanguageCode;	// 0x395ddd
// converted property getter: - (id)keyboards;	// 0x395f05
- (id)mostRecentCharacter;	// 0x3960e1
- (id)name;	// 0x395dd1
- (void)removeCandidatesKeyboard;	// 0x395f95
- (void)setActiveKeyboard:(id)keyboard;	// 0x395f31
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x395e91
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x395de1
// converted property getter: - (int)textEntryStyle;	// 0x395e81
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x395f41
@end
