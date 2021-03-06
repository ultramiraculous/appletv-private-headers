/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, UIKeyboardEmojiCategory, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiInputController : NSObject {
	int _currentSequence;	// 4 = 0x4
	NSMutableDictionary *_usageHistory;	// 8 = 0x8
	NSMutableArray *_recents;	// 12 = 0xc
	UIKeyboardEmojiCategory *_lastCategory;	// 16 = 0x10
}
@property(readonly, retain) UIKeyboardEmojiCategory *lastCategory;	// G=0x32f2bfa9; converted property
@property(retain, nonatomic) UIKeyboardEmojiCategory *lastViewedCategory;	// G=0x32f2c4cd; S=0x32f2bfb9; @synthesize=_lastCategory
@property(readonly, retain) NSMutableArray *recents;	// G=0x32f2bf99; converted property
+ (id)activeInputView;	// 0x32f2b6d1
+ (Class)classForInputView;	// 0x32f2b645
+ (void)writeEmojiDefaults;	// 0x32f2b6e1
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;	// 0x32f2b715
- (id)initWithInputView:(id)inputView;	// 0x32f2b755
- (void)clearAncientHistory;	// 0x32f2c081
- (void)dealloc;	// 0x32f2b939
- (id)defaultsDictionary;	// 0x32f2c2e9
- (void)emojiUsed:(id)used;	// 0x32f2bb39
- (BOOL)isAncientSequence:(int)sequence;	// 0x32f2b99d
// converted property getter: - (id)lastCategory;	// 0x32f2bfa9
// declared property getter: - (id)lastViewedCategory;	// 0x32f2c4cd
// converted property getter: - (id)recents;	// 0x32f2bf99
- (double)scoreForEmoji:(id)emoji;	// 0x32f2ba09
- (double)scoreForSequence:(int)sequence;	// 0x32f2b9b9
// declared property setter: - (void)setLastViewedCategory:(id)category;	// 0x32f2bfb9
@end

