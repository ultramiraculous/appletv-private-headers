/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRHeaderControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRImageWithHeaderControl : BRControl {
	BRHeaderControl *_header;	// 80 = 0x50
	BRImageControl *_image;	// 84 = 0x54
}
+ (id)controlWithTitle:(id)title andImage:(id)image;	// 0x2a9909
- (id)init;	// 0x2a9981
- (id)accessibilityLabel;	// 0x2a9d45
- (id)accessibilityScreenContent;	// 0x2a9d65
- (void)dealloc;	// 0x2a9a65
- (BOOL)isAccessibilityElement;	// 0x2a9d41
- (void)layoutSubcontrols;	// 0x2a9b79
- (void)setImage:(id)image;	// 0x2a9b39
- (void)setTitle:(id)title;	// 0x2a9ac9
@end

