/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface MUSICTopShelfITunesMatchView : BRControl {
	BRAsyncImageControl *_iTunesMatchLogo;	// 84 = 0x54
	BRTextControl *_title;	// 88 = 0x58
	BRTextControl *_iTunesMatchDescription;	// 92 = 0x5c
	float _maxWidth;	// 96 = 0x60
	BOOL _showsLogo;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL showsLogo;	// G=0x7c5e9; S=0x7c5f9; @synthesize=_showsLogo
- (id)init;	// 0x7bc7d
- (void).cxx_destruct;	// 0x7c609
- (id)_subtextAttributes;	// 0x7c0e9
- (id)_titleAttributes;	// 0x7bf4d
- (id)accessibilityLabel;	// 0x7c571
- (void)layoutSubcontrols;	// 0x7c279
- (void)setDescriptionKey:(id)key;	// 0x7bebd
- (void)setMaxDescriptionWidth:(float)width;	// 0x7bf2d
// declared property setter: - (void)setShowsLogo:(BOOL)logo;	// 0x7c5f9
- (void)setTitleKey:(id)key;	// 0x7be4d
// declared property getter: - (BOOL)showsLogo;	// 0x7c5e9
@end

