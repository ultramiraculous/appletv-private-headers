/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


@interface UITextLabel : UILabel {
}
@property(assign) int alignment;	// G=0x330cff49; S=0x330cff39; converted property
@property(assign) BOOL centersHorizontally;	// G=0x330cfde1; S=0x330cfdc1; converted property
@property(retain) id color;	// G=0x330cfd91; S=0x330cfd81; converted property
@property(retain) id highlightedColor;	// G=0x330cfdb1; S=0x330cfda1; converted property
@property(assign) float minFontSize;	// G=0x330cff29; S=0x330cff19; converted property
@property(assign) BOOL textAutoresizesToFit;	// G=0x330cff01; S=0x330cfef1; converted property
@property(assign) BOOL wrapsText;	// G=0x330cfed1; S=0x330cfe01; converted property
// converted property getter: - (int)alignment;	// 0x330cff49
// converted property getter: - (BOOL)centersHorizontally;	// 0x330cfde1
// converted property getter: - (id)color;	// 0x330cfd91
- (void)drawRect:(CGRect)rect;	// 0x33066f6d
- (CGSize)ellipsizedTextSize;	// 0x330cfd35
// converted property getter: - (id)highlightedColor;	// 0x330cfdb1
// converted property getter: - (float)minFontSize;	// 0x330cff29
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x330cff39
// converted property setter: - (void)setCentersHorizontally:(BOOL)horizontally;	// 0x330cfdc1
// converted property setter: - (void)setColor:(id)color;	// 0x330cfd81
// converted property setter: - (void)setHighlightedColor:(id)color;	// 0x330cfda1
// converted property setter: - (void)setMinFontSize:(float)size;	// 0x330cff19
// converted property setter: - (void)setTextAutoresizesToFit:(BOOL)fit;	// 0x330cfef1
// converted property setter: - (void)setWrapsText:(BOOL)text;	// 0x330cfe01
// converted property getter: - (BOOL)textAutoresizesToFit;	// 0x330cff01
// converted property getter: - (BOOL)wrapsText;	// 0x330cfed1
@end

