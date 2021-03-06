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
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x33cddafd; @synthesize=_menuTitle
@property(readonly, assign, nonatomic) NSString *originalText;	// G=0x33cddadd; @synthesize=_originalText
@property(readonly, assign, nonatomic) UITextRange *range;	// G=0x33cddacd; @synthesize=_range
@property(readonly, assign, nonatomic) NSString *replacementText;	// G=0x33cddaed; @synthesize=_replacementText
+ (id)replacementWithRange:(id)range original:(id)original replacement:(id)replacement menuTitle:(id)title;	// 0x33cdd985
- (void)dealloc;	// 0x33cdda45
// declared property getter: - (id)menuTitle;	// 0x33cddafd
// declared property getter: - (id)originalText;	// 0x33cddadd
// declared property getter: - (id)range;	// 0x33cddacd
// declared property getter: - (id)replacementText;	// 0x33cddaed
@end

