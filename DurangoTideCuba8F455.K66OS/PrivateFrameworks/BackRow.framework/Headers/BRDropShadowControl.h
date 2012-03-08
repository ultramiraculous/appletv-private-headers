/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRDropShadowControl : BRControl {
@private
	BRControl *_content;	// 44 = 0x2c
	int _shadowStyle;	// 48 = 0x30
	float _sizeFactor;	// 52 = 0x34
}
@property(retain) BRControl *content;	// G=0x32f6bbc9; S=0x32f1c8f9; converted property
@property(assign) float shadowSizeFactor;	// G=0x32f6bbb9; S=0x32f6bbd9; converted property
@property(assign) int shadowStyle;	// G=0x32f6bba9; S=0x32f1c489; converted property
- (id)init;	// 0x32f1c435
- (void)_updateImages;	// 0x32f1c4b1
// converted property getter: - (id)content;	// 0x32f6bbc9
- (void)dealloc;	// 0x32f2d931
- (void)layoutSubcontrols;	// 0x32f6bc0d
// converted property setter: - (void)setContent:(id)content;	// 0x32f1c8f9
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x32f6bbd9
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x32f1c489
// converted property getter: - (float)shadowSizeFactor;	// 0x32f6bbb9
// converted property getter: - (int)shadowStyle;	// 0x32f6bba9
@end
