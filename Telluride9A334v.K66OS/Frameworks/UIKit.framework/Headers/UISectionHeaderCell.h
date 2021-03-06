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
@property(retain) NSString *title;	// G=0x3020c179; S=0x3020bc95; converted property
+ (id)defaultTitleFont;	// 0x3020ba61
- (id)initWithFrame:(CGRect)frame;	// 0x3020ba85
- (CGRect)_rectForTitle:(id)title;	// 0x3020bb39
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3020c211
- (void)dealloc;	// 0x3020bad5
- (void)drawRect:(CGRect)rect;	// 0x3020bf71
- (void)drawTitle:(id)title inRect:(CGRect)rect;	// 0x3020becd
- (void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;	// 0x3020bdc9
- (BOOL)isEqualToView:(id)view;	// 0x3020c189
- (void)mouseUp:(GSEventRef)up;	// 0x3020c215
- (void)setStyle:(int)style;	// 0x3020bb21
// converted property setter: - (void)setTitle:(id)title;	// 0x3020bc95
// converted property getter: - (id)title;	// 0x3020c179
@end

