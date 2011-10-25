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
@property(readonly, retain) NSMutableArray *recents;	// G=0x3534da55; converted property
- (id)initWithController:(id)controller;	// 0x3534ce59
- (void)clearAncientHistory;	// 0x3534d629
- (void)dealloc;	// 0x3534cf01
- (id)defaultsDictionary;	// 0x3534d865
- (void)emojiUsed:(id)used;	// 0x3534d385
- (BOOL)isAncientSequence:(int)sequence;	// 0x3534d211
- (void)readDefaultsDictionary:(id)dictionary;	// 0x3534cf61
// converted property getter: - (id)recents;	// 0x3534da55
- (double)scoreForEmoji:(id)emoji;	// 0x3534d279
- (double)scoreForSequence:(int)sequence;	// 0x3534d22d
@end

