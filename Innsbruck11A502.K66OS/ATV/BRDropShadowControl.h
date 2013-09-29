/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRDropShadowControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	int _shadowStyle;	// 88 = 0x58
	float _sizeFactor;	// 92 = 0x5c
}
@property(retain) BRControl *content;	// G=0x35fd9d; S=0x35fd2d; converted property
@property(assign) float shadowSizeFactor;	// G=0x35fd1d; S=0x35fce5; converted property
@property(assign) int shadowStyle;	// G=0x35fcd5; S=0x35fcad; converted property
- (id)init;	// 0x35fc01
- (void)_updateImages;	// 0x360071
// converted property getter: - (id)content;	// 0x35fd9d
- (void)dealloc;	// 0x35fc61
- (void)layoutSubcontrols;	// 0x35fdad
// converted property setter: - (void)setContent:(id)content;	// 0x35fd2d
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x35fce5
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x35fcad
// converted property getter: - (float)shadowSizeFactor;	// 0x35fd1d
// converted property getter: - (int)shadowStyle;	// 0x35fcd5
@end
