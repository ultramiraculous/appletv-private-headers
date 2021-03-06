/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIColor, UIRefreshControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView {
	UIRefreshControl *_refreshControl;	// 96 = 0x60
	UIColor *_tintColor;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x2f9125bd; S=0x2f9125c1; 
@property(readonly, assign, nonatomic) float maximumSnappingHeight;	// G=0x2f9125cd; 
@property(readonly, assign, nonatomic) float minimumSnappingHeight;	// G=0x2f9125c9; 
@property(assign, nonatomic) UIRefreshControl *refreshControl;	// G=0x2f9125dd; S=0x2f491385; @synthesize=_refreshControl
@property(readonly, assign, nonatomic) int style;	// G=0x2f9125c5; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x2f49177d; S=0x2f4916d5; @synthesize=_tintColor
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// 0x2f9125d9
// declared property getter: - (id)attributedTitle;	// 0x2f9125bd
- (void)dealloc;	// 0x2f912571
- (void)didTransitionFromState:(int)state toState:(int)state2;	// 0x2f52270d
// declared property getter: - (float)maximumSnappingHeight;	// 0x2f9125cd
// declared property getter: - (float)minimumSnappingHeight;	// 0x2f9125c9
// declared property getter: - (id)refreshControl;	// 0x2f9125dd
- (void)refreshControlInvalidatedSnappingHeight;	// 0x2f9125d1
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x2f9125c1
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x2f491385
// declared property setter: - (void)setTintColor:(id)color;	// 0x2f4916d5
// declared property getter: - (int)style;	// 0x2f9125c5
// declared property getter: - (id)tintColor;	// 0x2f49177d
- (void)willTransitionFromState:(int)state toState:(int)state2;	// 0x2f521b05
@end

