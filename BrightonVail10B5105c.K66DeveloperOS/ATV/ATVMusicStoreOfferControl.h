/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
	BRTextControl *_topLineTextControl;	// 84 = 0x54
	BRTextControl *_bottomLineTextControl;	// 88 = 0x58
	BRImageControl *_hdImageControl;	// 92 = 0x5c
	BRImageControl *_ddImageControl;	// 96 = 0x60
	BRImageControl *_ccImageControl;	// 100 = 0x64
	BRImageControl *_digitalExtrasControl;	// 104 = 0x68
	BOOL _displaysBottomLineText;	// 108 = 0x6c
}
@property(assign) BOOL displaysBottomLineText;	// G=0x200471; S=0x200489; @synthesize=_displaysBottomLineText
- (id)init;	// 0x1ff4f5
- (id)accessibilityLabel;	// 0x200365
- (void)dealloc;	// 0x1ff53d
// declared property getter: - (BOOL)displaysBottomLineText;	// 0x200471
- (void)layoutSubcontrols;	// 0x1ffd8d
- (void)setClosedCaption:(BOOL)caption;	// 0x1ffb79
// declared property setter: - (void)setDisplaysBottomLineText:(BOOL)text;	// 0x200489
- (void)setDolbyDigital:(BOOL)digital;	// 0x1ffaa9
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x1ffc49
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd and1080p:(BOOL)p;	// 0x1ff5f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1ffd19
@end

