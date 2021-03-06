/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobTableViewCell : UITableViewCell {
	UIActivityIndicatorView *_activityIndicator;	// 300 = 0x12c
	UIView *_verticalSeparator;	// 304 = 0x130
}
@property(assign, nonatomic) BOOL showActive;	// G=0x348b7dd5; S=0x348b7df9; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x348b7b79
- (void)dealloc;	// 0x348b7d71
- (void)layoutSubviews;	// 0x348b7ebd
// declared property setter: - (void)setShowActive:(BOOL)active;	// 0x348b7df9
// declared property getter: - (BOOL)showActive;	// 0x348b7dd5
@end

