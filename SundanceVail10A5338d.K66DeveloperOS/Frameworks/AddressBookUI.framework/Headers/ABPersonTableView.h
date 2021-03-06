/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPersonTabsScrollView.h"
#import "AddressBookUI-Structs.h"
#import <UITableView.h> // Unknown library

@class UIView, ABPersonViewControllerHelper;
@protocol ABPersonTabsLayoutManager;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
	float _minimumBottomInset;	// 756 = 0x2f4
	UIEdgeInsets _savedContentInset;	// 760 = 0x2f8
	ABPersonViewControllerHelper *_helper;	// 776 = 0x308
	id<ABPersonTabsLayoutManager> _tabsLayoutManager;	// 780 = 0x30c
}
@property(retain, nonatomic) UIView *backgroundView;
@property(assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x370cb019; S=0x37061861; @synthesize=_helper
@property(assign, nonatomic) float minimumBottomInset;	// G=0x370caedd; S=0x370cae85; 
@property(assign, nonatomic) id<ABPersonTabsLayoutManager> tabsLayoutManager;	// G=0x370cb029; S=0x370cb039; @synthesize=_tabsLayoutManager
// declared property getter: - (id)helper;	// 0x370cb019
- (void)layoutSubviews;	// 0x370caf65
// declared property getter: - (float)minimumBottomInset;	// 0x370caedd
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x370caeed
- (void)setContentOffset:(CGPoint)offset;	// 0x37061781
// declared property setter: - (void)setHelper:(id)helper;	// 0x37061861
// declared property setter: - (void)setMinimumBottomInset:(float)inset;	// 0x370cae85
// declared property setter: - (void)setTabsLayoutManager:(id)manager;	// 0x370cb039
// declared property getter: - (id)tabsLayoutManager;	// 0x370cb029
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x37086c21
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x370cae7d
@end

