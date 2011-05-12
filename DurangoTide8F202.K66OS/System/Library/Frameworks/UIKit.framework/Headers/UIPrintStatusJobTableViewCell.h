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
@private
	UIActivityIndicatorView *_activityIndicator;	// 216 = 0xd8
	UIView *_verticalSeparator;	// 220 = 0xdc
}
@property(assign, nonatomic) BOOL showActive;	// G=0x30869fd1; S=0x30869f11; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x3086a2b9
- (void)dealloc;	// 0x3086a25d
- (void)layoutSubviews;	// 0x3086ad45
// declared property setter: - (void)setShowActive:(BOOL)active;	// 0x30869f11
// declared property getter: - (BOOL)showActive;	// 0x30869fd1
@end
