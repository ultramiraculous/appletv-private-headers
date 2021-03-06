/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryController : NSObject {
@private
	id<UIKeyboardEmojiController> emojiController;	// 4 = 0x4
	NSMutableDictionary *categories;	// 8 = 0x8
	NSMutableDictionary *_defaultsData;	// 12 = 0xc
}
@property(retain) NSDictionary *defaultsData;	// G=0x32f06f41; S=0x32f06ed1; 
- (id)initWithController:(id)controller;	// 0x32f06a81
- (id)categoryForKey:(id)key;	// 0x32f06b75
- (void)dealloc;	// 0x32f06af5
// declared property getter: - (id)defaultsData;	// 0x32f06f41
- (void)releaseCategories;	// 0x32f06b55
// declared property setter: - (void)setDefaultsData:(id)data;	// 0x32f06ed1
- (void)updateRecents;	// 0x32f06e75
@end

