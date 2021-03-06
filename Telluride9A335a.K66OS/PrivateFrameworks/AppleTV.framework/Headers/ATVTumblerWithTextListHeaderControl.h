/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
@private
	float _tumblerMaxWidth;	// 48 = 0x30
	BRTumblerControl *_tumbler;	// 52 = 0x34
	BRTextControl *_customText;	// 56 = 0x38
	BOOL _customTextOnTop;	// 60 = 0x3c
}
@property(readonly, assign) BRTextControl *customText;	// G=0x3416366d; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x3416367d; S=0x34163041; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x3416365d; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x3416363d; S=0x3416364d; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x34162f29
- (id)accessibilityLabel;	// 0x341635d9
- (BOOL)brEventAction:(id)action;	// 0x34163071
// declared property getter: - (id)customText;	// 0x3416366d
// declared property getter: - (BOOL)customTextOnTop;	// 0x3416367d
- (void)dealloc;	// 0x34162fe1
- (void)layoutSubcontrols;	// 0x341631b9
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x34163041
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x3416364d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34163095
// declared property getter: - (id)tumbler;	// 0x3416365d
// declared property getter: - (float)tumblerMaxWidth;	// 0x3416363d
@end

