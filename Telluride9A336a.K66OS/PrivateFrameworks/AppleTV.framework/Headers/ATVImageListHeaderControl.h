/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
}
@property(readonly, assign) BRImageControl *image;	// G=0x33a14c0d; @synthesize=_image
- (id)init;	// 0x33a14a21
- (id)accessibilityLabel;	// 0x33a14bed
- (void)dealloc;	// 0x33a14a95
// declared property getter: - (id)image;	// 0x33a14c0d
- (void)layoutSubcontrols;	// 0x33a14b59
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a14ae1
@end

