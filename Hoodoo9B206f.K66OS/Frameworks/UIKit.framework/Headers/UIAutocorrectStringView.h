/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectStringView : UIView {
@private
	NSString *m_string;	// 48 = 0x30
	UIFont *m_font;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame string:(id)string font:(id)font;	// 0x3552f3ed
- (void)dealloc;	// 0x3552f46d
- (void)drawRect:(CGRect)rect;	// 0x3552f4b9
@end

