/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class ATVThunderGameCourtView, ATVThunderLineScoreView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
@private
	ATVThunderLineScoreView *_lineScore;	// 44 = 0x2c
	ATVThunderGameCourtView *_gameCourt;	// 48 = 0x30
}
- (id)initWithDictionary:(id)dictionary;	// 0x337134d5
- (id)accessibilityLabel;	// 0x337135cd
- (void)dealloc;	// 0x33713479
- (void)layoutSubcontrols;	// 0x33713611
@end

