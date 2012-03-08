/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextRange, NSString;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject {
@private
	UITextRange *_range;	// 4 = 0x4
	NSString *_originalText;	// 8 = 0x8
	NSString *_replacementText;	// 12 = 0xc
	NSString *_menuTitle;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x35417afd; @synthesize=_menuTitle
@property(readonly, assign, nonatomic) NSString *originalText;	// G=0x35417add; @synthesize=_originalText
@property(readonly, assign, nonatomic) UITextRange *range;	// G=0x35417acd; @synthesize=_range
@property(readonly, assign, nonatomic) NSString *replacementText;	// G=0x35417aed; @synthesize=_replacementText
+ (id)replacementWithRange:(id)range original:(id)original replacement:(id)replacement menuTitle:(id)title;	// 0x35417985
- (void)dealloc;	// 0x35417a45
// declared property getter: - (id)menuTitle;	// 0x35417afd
// declared property getter: - (id)originalText;	// 0x35417add
// declared property getter: - (id)range;	// 0x35417acd
// declared property getter: - (id)replacementText;	// 0x35417aed
@end
