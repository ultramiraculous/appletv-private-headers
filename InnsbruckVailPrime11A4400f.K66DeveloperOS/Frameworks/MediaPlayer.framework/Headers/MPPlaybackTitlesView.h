/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIControl.h>

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 120 = 0x78
	NSArray *_labels;	// 124 = 0x7c
	NSArray *_titles;	// 128 = 0x80
	BOOL _showingLoadingUI;	// 132 = 0x84
	unsigned _marqueeScrollableIndex;	// 136 = 0x88
	BOOL _marqueeScrollingActive;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x2e2e1f61; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x2e2e300d; S=0x2e2e1fad; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x2e2e301d; S=0x2e2e1f75; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x2e2e2ffd; S=0x2e2e20f1; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x2e2e2fed; S=0x2e2e208d; @synthesize=_titles
- (id)init;	// 0x2e2e18e5
- (id)initWithFrame:(CGRect)frame;	// 0x2e2e1a3d
- (void).cxx_destruct;	// 0x2e2e302d
- (id)_addLabel:(unsigned)label;	// 0x2e2e22e1
- (id)_addLoadingLabel;	// 0x2e2e213d
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x2e2e211d
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x2e2e212d
- (void)_layoutLabels;	// 0x2e2e28e9
- (void)_layoutLoadingUI;	// 0x2e2e251d
- (void)_tearDownLabels;	// 0x2e2e2f1d
- (void)_updateLabelMarqueeScrolling;	// 0x2e2e2dc9
// declared property getter: - (id)contentView;	// 0x2e2e1f61
- (void)dealloc;	// 0x2e2e1c45
- (void)layoutSubviews;	// 0x2e2e1ced
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x2e2e300d
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x2e2e301d
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x2e2e1fad
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x2e2e1f75
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x2e2e20f1
// declared property setter: - (void)setTitles:(id)titles;	// 0x2e2e208d
// declared property getter: - (BOOL)showingLoadingUI;	// 0x2e2e2ffd
// declared property getter: - (id)titles;	// 0x2e2e2fed
@end

