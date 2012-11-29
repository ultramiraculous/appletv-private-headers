/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRTumblerControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
	float _tumblerMaxWidth;	// 84 = 0x54
	BRTumblerControl *_tumbler;	// 88 = 0x58
	BRTextControl *_customText;	// 92 = 0x5c
	BOOL _customTextOnTop;	// 96 = 0x60
}
@property(readonly, assign) BRTextControl *customText;	// G=0x106109; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x10611d; S=0x105b45; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x1060f5; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x1060d5; S=0x1060e5; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x105a29
- (id)accessibilityLabel;	// 0x10606d
- (BOOL)brEventAction:(id)action;	// 0x105b71
// declared property getter: - (id)customText;	// 0x106109
// declared property getter: - (BOOL)customTextOnTop;	// 0x10611d
- (void)dealloc;	// 0x105ae1
- (void)layoutSubcontrols;	// 0x105cad
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x105b45
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x1060e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x105b95
// declared property getter: - (id)tumbler;	// 0x1060f5
// declared property getter: - (float)tumblerMaxWidth;	// 0x1060d5
@end
