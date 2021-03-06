/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
	NSString *_contentsString;	// 112 = 0x70
	float _letterSpacing;	// 116 = 0x74
	BOOL _ellipsize;	// 120 = 0x78
}
- (id)contentsImageForStyle:(int)style;	// 0x30f72051
- (void)dealloc;	// 0x30f71e65
- (float)extraRightPadding;	// 0x30f72221
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x30f71eb1
- (BOOL)usesSmallerTextFont;	// 0x30f7221d
@end

