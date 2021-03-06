/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"


__attribute__((visibility("hidden")))
@interface EmojiScrollView : UIScrollView {
	double _delay;	// 464 = 0x1d0
	BOOL _canDragToScroll;	// 472 = 0x1d8
}
@property(assign) double delay;	// G=0x31e7543d; S=0x31e75471; @synthesize=_delay
- (id)initWithFrame:(CGRect)frame;	// 0x31e752e1
- (void)_lookForScrolling;	// 0x31e753bd
- (void)_stopLookingForScrolling;	// 0x31e753a9
- (double)_touchDelayForScrollDetection;	// 0x31e75361
// declared property getter: - (double)delay;	// 0x31e7543d
- (void)setContentOffset:(CGPoint)offset;	// 0x31e75379
// declared property setter: - (void)setDelay:(double)delay;	// 0x31e75471
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x31e75415
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x31e7542d
@end

