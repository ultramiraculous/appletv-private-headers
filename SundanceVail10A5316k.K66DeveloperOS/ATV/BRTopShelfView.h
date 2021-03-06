/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaShelfView, BRMainMenuImageControl, BRMainMenuShelfErrorControl;

__attribute__((visibility("hidden")))
@interface BRTopShelfView : BRControl {
	int _state;	// 80 = 0x50
	BRMediaShelfView *_shelf;	// 84 = 0x54
	BRMainMenuShelfErrorControl *_error;	// 88 = 0x58
	BRMainMenuImageControl *_productImage;	// 92 = 0x5c
	BRControl *_customLogoControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRControl *customLogoControl;	// G=0x2b8a25; S=0x2b8a35; @synthesize=_customLogoControl
@property(readonly, assign) BRMainMenuShelfErrorControl *error;	// G=0x2b8a11; @synthesize=_error
@property(readonly, assign) BRMediaShelfView *shelf;	// G=0x2b89fd; @synthesize=_shelf
@property(assign) int state;	// G=0x2b87dd; S=0x2b87ed; 
- (id)init;	// 0x2b82f1
- (BOOL)accessibilityElementIsHidden;	// 0x2b8949
- (id)accessibilityScreenContent;	// 0x2b89b9
// declared property getter: - (id)customLogoControl;	// 0x2b8a25
- (void)dealloc;	// 0x2b846d
// declared property getter: - (id)error;	// 0x2b8a11
- (void)layoutSubcontrols;	// 0x2b8585
- (id)preferredActionForKey:(id)key;	// 0x2b86dd
- (void)setAcceptsFocus:(BOOL)focus;	// 0x2b84f9
// declared property setter: - (void)setCustomLogoControl:(id)control;	// 0x2b8a35
// declared property setter: - (void)setState:(int)state;	// 0x2b87ed
// declared property getter: - (id)shelf;	// 0x2b89fd
// declared property getter: - (int)state;	// 0x2b87dd
@end

