/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel {
@private
	BOOL _reverseShadow;	// 107 = 0x6b
}
@property(assign) CGSize shadowOffset;	// G=0x33be64bd; S=0x339d0201; converted property
- (void)setFont:(id)font;	// 0x339d00e9
- (void)setLineBreakMode:(int)mode;	// 0x339d036d
- (void)setReverseShadow:(BOOL)shadow;	// 0x339d0491
// converted property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x339d0201
// converted property getter: - (CGSize)shadowOffset;	// 0x33be64bd
@end
