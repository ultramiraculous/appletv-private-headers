/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UIImageView, UIButton, NSAttributedString, UILabel, NSError;
@protocol QLGenericViewDelegate;

@interface QLGenericView : UIView {
	UIView *_containerView;	// 96 = 0x60
	UIImageView *_iconView;	// 100 = 0x64
	UILabel *_titleLabel;	// 104 = 0x68
	UILabel *_subtitleLabel;	// 108 = 0x6c
	UIButton *_showArchiveContentButton;	// 112 = 0x70
	NSError *_error;	// 116 = 0x74
	id<QLGenericViewDelegate> delegate;	// 120 = 0x78
}
@property(copy) NSAttributedString *attributedSubtitle;	// G=0x2f30bcfd; S=0x2f30bcdd; 
@property(assign) id<QLGenericViewDelegate> delegate;	// G=0x2f30bde9; S=0x2f30bdfd; @synthesize
@property(assign) BOOL showArchiveButton;	// G=0x2f30bd65; S=0x2f30bd1d; 
@property(copy) NSString *subtitle;	// G=0x2f30bcbd; S=0x2f30bc9d; 
@property(copy) NSString *title;	// G=0x2f30bc7d; S=0x2f30bc5d; 
- (id)initWithFrame:(CGRect)frame;	// 0x2f30b3fd
- (void)_updateContainerFrameForOrientation:(int)orientation;	// 0x2f30b899
// declared property getter: - (id)attributedSubtitle;	// 0x2f30bcfd
// declared property getter: - (id)delegate;	// 0x2f30bde9
- (void)layoutSubviews;	// 0x2f30ba01
// declared property setter: - (void)setAttributedSubtitle:(id)subtitle;	// 0x2f30bcdd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f30bdfd
// declared property setter: - (void)setShowArchiveButton:(BOOL)button;	// 0x2f30bd1d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x2f30bc9d
// declared property setter: - (void)setTitle:(id)title;	// 0x2f30bc5d
// declared property getter: - (BOOL)showArchiveButton;	// 0x2f30bd65
- (void)showArchiveContents:(id)contents;	// 0x2f30bd95
// declared property getter: - (id)subtitle;	// 0x2f30bcbd
// declared property getter: - (id)title;	// 0x2f30bc7d
@end

