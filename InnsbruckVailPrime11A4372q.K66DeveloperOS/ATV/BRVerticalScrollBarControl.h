/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVerticalScrollBarControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	float _position;	// 88 = 0x58
}
@property(retain) BRImageControl *image;	// G=0x371a21; S=0x371a01; converted property
- (id)init;	// 0x371919
- (void)dealloc;	// 0x371995
// converted property getter: - (id)image;	// 0x371a21
- (void)layoutSubcontrols;	// 0x371a41
// converted property setter: - (void)setImage:(id)image;	// 0x371a01
- (void)setScrollPosition:(float)position;	// 0x3719e1
@end

