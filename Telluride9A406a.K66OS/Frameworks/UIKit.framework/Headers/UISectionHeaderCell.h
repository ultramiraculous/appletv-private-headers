/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

@interface UISectionHeaderCell : UIView {
	NSString *_title;	// 48 = 0x30
	mdocFlags _sectionHeaderCellFlags;	// 52 = 0x34
}
@property(retain) NSString *title;	// G=0x35856179; S=0x35855c95; converted property
+ (id)defaultTitleFont;	// 0x35855a61
- (id)initWithFrame:(CGRect)frame;	// 0x35855a85
- (CGRect)_rectForTitle:(id)title;	// 0x35855b39
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x35856211
- (void)dealloc;	// 0x35855ad5
- (void)drawRect:(CGRect)rect;	// 0x35855f71
- (void)drawTitle:(id)title inRect:(CGRect)rect;	// 0x35855ecd
- (void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;	// 0x35855dc9
- (BOOL)isEqualToView:(id)view;	// 0x35856189
- (void)mouseUp:(GSEventRef)up;	// 0x35856215
- (void)setStyle:(int)style;	// 0x35855b21
// converted property setter: - (void)setTitle:(id)title;	// 0x35855c95
// converted property getter: - (id)title;	// 0x35856179
@end

