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
@property(retain) BRImageControl *image;	// G=0x2fe569; S=0x2fe549; converted property
- (id)init;	// 0x2fe461
- (void)dealloc;	// 0x2fe4dd
// converted property getter: - (id)image;	// 0x2fe569
- (void)layoutSubcontrols;	// 0x2fe589
// converted property setter: - (void)setImage:(id)image;	// 0x2fe549
- (void)setScrollPosition:(float)position;	// 0x2fe529
@end
