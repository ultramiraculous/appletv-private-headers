/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableView.h"

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
	UISearchDisplayController *_controller;	// 756 = 0x2f4
	float _offsetForNoResultsMessage;	// 760 = 0x2f8
	UIView *_topShadowView;	// 764 = 0x2fc
}
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;	// G=0x30ebc42d; S=0x30ebc43d; 
@property(assign, nonatomic) UISearchDisplayController *controller;	// G=0x30ebc61d; S=0x30cd1675; @synthesize=_controller
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x30ebc199
- (void)_numberOfRowsDidChange;	// 0x30d3d1b5
- (float)_offsetForNoResultsMessage;	// 0x30ebc209
- (void)_setOffsetForNoResultsMessage:(float)noResultsMessage;	// 0x30ebc1f9
// declared property setter: - (void)_setTopShadowView:(id)view;	// 0x30ebc43d
// declared property getter: - (id)_topShadowView;	// 0x30ebc42d
// declared property getter: - (id)controller;	// 0x30ebc61d
- (void)setContentOffset:(CGPoint)offset;	// 0x30d3cb75
// declared property setter: - (void)setController:(id)controller;	// 0x30cd1675
@end

