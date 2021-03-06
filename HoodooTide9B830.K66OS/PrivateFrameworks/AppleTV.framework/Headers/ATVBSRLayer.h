/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVBSRLayer : BRControl {
@private
	BRImageControl *_appleLogo;	// 48 = 0x30
	BRTextControl *_currentResolutionLabel;	// 52 = 0x34
	BRTextControl *_countDownToNextResolutionLabel;	// 56 = 0x38
	BRTextControl *_canYouSeeTheAppleLogoLabel;	// 60 = 0x3c
}
- (id)init;	// 0x328978d9
- (id)_bsrCountDownLabelAttributes;	// 0x32898081
- (id)_centeredTextAttributesForAttributes:(id)attributes;	// 0x32898019
- (void)dealloc;	// 0x32897ae1
- (void)layoutSubcontrols;	// 0x32897b69
- (void)setCurrentResolutionString:(id)string;	// 0x32897e79
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(id)string;	// 0x32897f75
@end

