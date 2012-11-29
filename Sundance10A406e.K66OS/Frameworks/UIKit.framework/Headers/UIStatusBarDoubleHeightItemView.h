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
- (id)contentsImageForStyle:(int)style;	// 0x30c33b3d
- (void)dealloc;	// 0x30c33951
- (float)extraRightPadding;	// 0x30c33d0d
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x30c3399d
- (BOOL)usesSmallerTextFont;	// 0x30c33d09
@end
