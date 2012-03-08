/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	CGPoint _downPoint;	// 76 = 0x4c
}
+ (id)grabberImage;	// 0x3311b901
- (id)initWithFrame:(CGRect)frame tableViewCell:(id)cell;	// 0x3311b939
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3311ba59
- (void)cancelTrackingWithEvent:(id)event;	// 0x3311bb91
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3311bac9
- (void)drawRect:(CGRect)rect;	// 0x3311b9ad
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3311bb55
- (BOOL)shouldTrack;	// 0x3311ba55
@end
