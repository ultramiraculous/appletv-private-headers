/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


@interface BRDropShadowControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	int _shadowStyle;	// 52 = 0x34
	float _sizeFactor;	// 56 = 0x38
}
@property(retain) BRControl *content;	// G=0x35df45e5; S=0x35df4575; converted property
@property(assign) float shadowSizeFactor;	// G=0x35df4565; S=0x35df4529; converted property
@property(assign) int shadowStyle;	// G=0x35df4519; S=0x35df44ed; converted property
- (id)init;	// 0x35df4441
- (void)_updateImages;	// 0x35df48ad
// converted property getter: - (id)content;	// 0x35df45e5
- (void)dealloc;	// 0x35df44a1
- (void)layoutSubcontrols;	// 0x35df45f5
// converted property setter: - (void)setContent:(id)content;	// 0x35df4575
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x35df4529
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x35df44ed
// converted property getter: - (float)shadowSizeFactor;	// 0x35df4565
// converted property getter: - (int)shadowStyle;	// 0x35df4519
@end

