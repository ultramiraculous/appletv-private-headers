/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMainMenuImageControl, BRMainMenuShelfErrorControl, BRMediaShelfView;

@interface BRTopShelfView : BRControl {
@private
	int _state;	// 48 = 0x30
	BRMediaShelfView *_shelf;	// 52 = 0x34
	BRMainMenuShelfErrorControl *_error;	// 56 = 0x38
	BRMainMenuImageControl *_productImage;	// 60 = 0x3c
	BRControl *_customLogoControl;	// 64 = 0x40
}
@property(retain, nonatomic) BRControl *customLogoControl;	// G=0x302a9d99; S=0x302a9da9; @synthesize=_customLogoControl
@property(readonly, assign) BRMainMenuShelfErrorControl *error;	// G=0x302a9d89; @synthesize=_error
@property(readonly, assign) BRMediaShelfView *shelf;	// G=0x302a9d79; @synthesize=_shelf
@property(assign) int state;	// G=0x302a9ad1; S=0x302a9ae1; 
- (id)init;	// 0x302a955d
- (BOOL)accessibilityElementIsHidden;	// 0x302a9cb1
- (id)accessibilityScreenContent;	// 0x302a9d21
// declared property getter: - (id)customLogoControl;	// 0x302a9d99
- (void)dealloc;	// 0x302a96e5
// declared property getter: - (id)error;	// 0x302a9d89
- (void)layoutSubcontrols;	// 0x302a97f9
- (id)preferredActionForKey:(id)key;	// 0x302a9989
- (void)setAcceptsFocus:(BOOL)focus;	// 0x302a976d
// declared property setter: - (void)setCustomLogoControl:(id)control;	// 0x302a9da9
// declared property setter: - (void)setState:(int)state;	// 0x302a9ae1
// declared property getter: - (id)shelf;	// 0x302a9d79
// declared property getter: - (int)state;	// 0x302a9ad1
@end

