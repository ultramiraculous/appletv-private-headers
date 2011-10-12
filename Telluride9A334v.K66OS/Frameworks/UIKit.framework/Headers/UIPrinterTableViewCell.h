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
@interface UIPrinterTableViewCell : UITableViewCell {
@private
	int _printerState;	// 248 = 0xf8
	UIActivityIndicatorView *_activityIndicator;	// 252 = 0xfc
}
@property(assign, nonatomic) int printerState;	// G=0x30382465; S=0x30382305; @synthesize=_printerState
// declared property getter: - (int)printerState;	// 0x30382465
// declared property setter: - (void)setPrinterState:(int)state;	// 0x30382305
@end

