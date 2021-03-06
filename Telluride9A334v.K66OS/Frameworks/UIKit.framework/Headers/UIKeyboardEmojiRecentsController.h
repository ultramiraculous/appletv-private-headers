/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiRecentsController : NSObject {
@private
	id<UIKeyboardEmojiController> _controller;	// 4 = 0x4
	int _currentSequence;	// 8 = 0x8
	NSMutableArray *_recents;	// 12 = 0xc
	NSMutableDictionary *_usageHistory;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recents;	// G=0x302c2a55; converted property
- (id)initWithController:(id)controller;	// 0x302c1e59
- (void)clearAncientHistory;	// 0x302c2629
- (void)dealloc;	// 0x302c1f01
- (id)defaultsDictionary;	// 0x302c2865
- (void)emojiUsed:(id)used;	// 0x302c2385
- (BOOL)isAncientSequence:(int)sequence;	// 0x302c2211
- (void)readDefaultsDictionary:(id)dictionary;	// 0x302c1f61
// converted property getter: - (id)recents;	// 0x302c2a55
- (double)scoreForEmoji:(id)emoji;	// 0x302c2279
- (double)scoreForSequence:(int)sequence;	// 0x302c222d
@end

