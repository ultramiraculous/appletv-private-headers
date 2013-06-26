/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
	UICompletionTablePrivate *_private;	// 96 = 0x60
}
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x2f640ea1; S=0x2f640ee1; 
@property(assign, nonatomic) id delegate;	// G=0x2f640c8d; S=0x2f640c19; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x2f640f2d; S=0x2f640f6d; 
+ (id)_cellFont;	// 0x2f6407c5
+ (id)_shadowImage;	// 0x2f6407e9
- (id)initWithFrame:(CGRect)frame;	// 0x2f640821
- (id)_completionForRow:(int)row;	// 0x2f640fe9
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x2f640ea1
- (void)dealloc;	// 0x2f640a69
// declared property getter: - (id)delegate;	// 0x2f640c8d
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x2f641025
- (void)layoutSubviews;	// 0x2f640ab5
- (void)reloadData;	// 0x2f640cad
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x2f640f2d
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x2f640ee1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f640c19
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x2f640f6d
- (void)setTopStrokeColor:(id)color;	// 0x2f640d59
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f641055
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2f641241
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2f640fb9
@end
