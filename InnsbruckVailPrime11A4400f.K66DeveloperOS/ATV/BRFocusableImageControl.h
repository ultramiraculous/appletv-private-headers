/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageControl.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRFocusableImageControl : BRImageControl {
	ATVImage *_focusedImage;	// 104 = 0x68
	ATVImage *_unfocusedImage;	// 108 = 0x6c
	ATVImage *_disabledImage;	// 112 = 0x70
	BOOL _dimsWhenDisabled;	// 116 = 0x74
	BOOL _disabled;	// 117 = 0x75
}
@property(assign) BOOL dimsWhenDisabled;	// G=0x32a819; S=0x32a7ed; converted property
@property(assign) BOOL disabled;	// G=0x32a77d; S=0x32a749; converted property
@property(retain) ATVImage *disabledImage;	// G=0x32a7dd; S=0x32a78d; converted property
@property(retain) ATVImage *focusedImage;	// G=0x32a6d9; S=0x32a689; converted property
@property(retain) ATVImage *unfocusedImage;	// G=0x32a739; S=0x32a6e9; converted property
- (void)_updateDim;	// 0x32aa15
- (void)_updateImage;	// 0x32a979
- (void)controlWasFocused;	// 0x32a829
- (void)controlWasUnfocused;	// 0x32a881
- (void)dealloc;	// 0x32a611
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x32a819
// converted property getter: - (BOOL)disabled;	// 0x32a77d
// converted property getter: - (id)disabledImage;	// 0x32a7dd
// converted property getter: - (id)focusedImage;	// 0x32a6d9
- (id)preferredActionForKey:(id)key;	// 0x32a8d9
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x32a7ed
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x32a749
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x32a78d
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x32a689
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x32a6e9
// converted property getter: - (id)unfocusedImage;	// 0x32a739
@end

