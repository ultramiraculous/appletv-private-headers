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
@private
	NSString *_contentsString;	// 76 = 0x4c
	float _letterSpacing;	// 80 = 0x50
	BOOL _ellipsize;	// 84 = 0x54
}
- (id)contentsImageForStyle:(int)style;	// 0x359e2145
- (void)dealloc;	// 0x359e1f49
- (float)extraRightPadding;	// 0x359e2315
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x359e1f95
- (BOOL)usesSmallerTextFont;	// 0x359e2311
@end

