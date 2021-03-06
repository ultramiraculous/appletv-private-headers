/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIImageView, UIColor, NSMutableArray;

@interface UISnapshotView : UIView <UIStatusBarTinting> {
	CGSize _contentSize;	// 84 = 0x54
	UIEdgeInsets _contentBeyondBounds;	// 92 = 0x5c
	UIEdgeInsets _edgePadding;	// 108 = 0x6c
	UIEdgeInsets _edgeInsets;	// 124 = 0x7c
	CGPoint _contentOffset;	// 140 = 0x8c
	UIColor *_edgePaddingColor;	// 148 = 0x94
	UIView *_imageView;	// 152 = 0x98
	NSMutableArray *_edgePaddingViews;	// 156 = 0x9c
	CGRect _snapshotRect;	// 160 = 0xa0
	UIImageView *_shadowView;	// 176 = 0xb0
	unsigned _disableEdgeAntialiasing : 1;	// 180 = 0xb4
	unsigned _disableVerticalStretch : 1;	// 180 = 0xb4
	UIColor *_statusBarTintColor;	// 184 = 0xb8
}
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x348855d1; S=0x346c7289; @synthesize
@property(assign, nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset;	// G=0x34885599; S=0x346c8ddd; @synthesize=_contentOffset
@property(readonly, assign, nonatomic, getter=_contentSize) CGSize contentSize;	// G=0x34885581; @synthesize=_contentSize
@property(assign, nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;	// G=0x34885295; S=0x346c5ed5; 
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x3488555d; S=0x346c5f15; @synthesize=_edgeInsets
@property(assign, nonatomic) UIEdgeInsets edgePadding;	// G=0x34885539; S=0x34885205; @synthesize=_edgePadding
@property(retain, nonatomic) UIColor *edgePaddingColor;	// G=0x348855b1; S=0x348855c1; @synthesize=_edgePaddingColor
@property(retain, nonatomic) UIImageView *shadowView;	// G=0x346c8d9d; S=0x346c73b5; @synthesize=_shadowView
@property(assign, nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;	// G=0x348852c5; S=0x348852e9; 
@property(readonly, assign, nonatomic, getter=_snapshotView) UIView *snapshotView;	// G=0x346c77ed; @synthesize=_imageView
@property(assign, nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;	// G=0x348852ad; S=0x346c7799; 
- (id)initWithFrame:(CGRect)frame;	// 0x346c5d41
- (void)_addEdgePaddingViewInRect:(CGRect)rect;	// 0x34885479
// declared property getter: - (CGPoint)_contentOffset;	// 0x34885599
// declared property getter: - (CGSize)_contentSize;	// 0x34885581
- (CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)edgePadding withContentSize:(CGSize)contentSize;	// 0x346c6cf9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x346c7349
- (void)_drawEdges:(UIEdgeInsets)edges withContentSize:(CGSize)contentSize;	// 0x346c7561
- (UIEdgeInsets)_edgePadding;	// 0x346c696d
- (void)_positionImageView;	// 0x346c8dad
// declared property setter: - (void)_setContentOffset:(CGPoint)offset;	// 0x346c8ddd
// declared property setter: - (void)_setSnapshotRect:(CGRect)rect;	// 0x348852e9
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x346c7289
// declared property getter: - (CGRect)_snapshotRect;	// 0x348852c5
// declared property getter: - (id)_snapshotView;	// 0x346c77ed
// declared property getter: - (id)_statusBarTintColor;	// 0x348855d1
- (void)_updateContentsRect;	// 0x346c6f8d
- (void)captureSnapshotOfView:(id)view withSnapshotType:(int)snapshotType;	// 0x346c5fa5
- (void)captureSnapshotRect:(CGRect)rect fromView:(id)view withSnapshotType:(int)snapshotType;	// 0x346c6001
- (void)dealloc;	// 0x346c8f05
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x3488555d
// declared property getter: - (UIEdgeInsets)edgePadding;	// 0x34885539
// declared property getter: - (id)edgePaddingColor;	// 0x348855b1
// declared property getter: - (BOOL)isEdgeAntialiasingEnabled;	// 0x34885295
// declared property getter: - (BOOL)isVerticalStretchEnabled;	// 0x348852ad
- (void)layoutSubviews;	// 0x346c6d49
- (void)setBounds:(CGRect)bounds;	// 0x34885321
- (void)setContentStretch:(CGRect)stretch;	// 0x348853fd
// declared property setter: - (void)setEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x346c5ed5
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x346c5f15
// declared property setter: - (void)setEdgePadding:(UIEdgeInsets)padding;	// 0x34885205
// declared property setter: - (void)setEdgePaddingColor:(id)color;	// 0x348855c1
- (void)setFrame:(CGRect)frame;	// 0x346c5df9
// declared property setter: - (void)setShadowView:(id)view;	// 0x346c73b5
// declared property setter: - (void)setVerticalStretchEnabled:(BOOL)enabled;	// 0x346c7799
// declared property getter: - (id)shadowView;	// 0x346c8d9d
@end

