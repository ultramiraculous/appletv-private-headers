/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
	int _dataNetworkType;	// 112 = 0x70
	int _wifiStrengthRaw;	// 116 = 0x74
	int _wifiStrengthBars;	// 120 = 0x78
	BOOL _enableRSSI;	// 124 = 0x7c
	BOOL _showRSSI;	// 125 = 0x7d
}
- (id)_dataNetworkImageForStyle:(int)style;	// 0x3090aced
- (id)_stringForRSSI;	// 0x30bd4009
- (id)contentsImageForStyle:(int)style;	// 0x3090ab85
- (float)extraLeftPadding;	// 0x308bae59
- (float)maximumOverlap;	// 0x30bd3f35
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30bd3f45
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x308ba431
@end

