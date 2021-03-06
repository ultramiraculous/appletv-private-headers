/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVCursorTracker, ATVCarouselView, BRPhotoBrowserHeaderControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchBrowserView : BRControl {
	ATVCursorTracker *_cursorTracker;	// 80 = 0x50
	BRPhotoBrowserHeaderControl *_header;	// 84 = 0x54
	ATVCarouselView *_carousel;	// 88 = 0x58
}
@property(retain, nonatomic) ATVCarouselView *carousel;	// G=0x38ec01; S=0x38ec11; @synthesize=_carousel
@property(retain, nonatomic) ATVCursorTracker *cursorTracker;	// G=0x38eb91; S=0x38eba1; @synthesize=_cursorTracker
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0x38ebc9; S=0x38ebd9; @synthesize=_header
- (id)init;	// 0x38e6e9
- (void).cxx_destruct;	// 0x38ec39
// declared property getter: - (id)carousel;	// 0x38ec01
// declared property getter: - (id)cursorTracker;	// 0x38eb91
// declared property getter: - (id)header;	// 0x38ebc9
- (id)initialFocus;	// 0x38e981
- (void)layoutSubcontrols;	// 0x38e991
// declared property setter: - (void)setCarousel:(id)carousel;	// 0x38ec11
// declared property setter: - (void)setCursorTracker:(id)tracker;	// 0x38eba1
// declared property setter: - (void)setHeader:(id)header;	// 0x38ebd9
@end

