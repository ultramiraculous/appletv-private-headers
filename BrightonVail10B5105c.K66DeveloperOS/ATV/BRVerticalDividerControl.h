/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRVerticalDividerControl : BRControl {
	int _heightStyle;	// 84 = 0x54
}
@property(assign) int heightStyle;	// G=0x2d25f1; S=0x2d25d1; converted property
- (id)init;	// 0x2d23cd
- (void)drawRect:(CGRect)rect;	// 0x2d24a9
// converted property getter: - (int)heightStyle;	// 0x2d25f1
// converted property setter: - (void)setHeightStyle:(int)style;	// 0x2d25d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d2425
@end
