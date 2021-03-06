/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class UIView, NSArray;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 108 = 0x6c
	NSArray *_labels;	// 112 = 0x70
	NSArray *_titles;	// 116 = 0x74
	BOOL _showingLoadingUI;	// 120 = 0x78
	unsigned _marqueeScrollableIndex;	// 124 = 0x7c
	BOOL _marqueeScrollingActive;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x31d34b45; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x31d35ab5; S=0x31d34b8d; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x31d35ac5; S=0x31d34b55; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x31d35aa5; S=0x31d34cb9; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x31d35a95; S=0x31d34c51; @synthesize=_titles
- (id)init;	// 0x31d34569
- (id)initWithFrame:(CGRect)frame;	// 0x31d34689
- (id)_addLabel:(unsigned)label;	// 0x31d34e85
- (id)_addLoadingLabel;	// 0x31d34d05
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x31d34ce5
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x31d34cf5
- (void)_layoutLabels;	// 0x31d35421
- (void)_layoutLoadingUI;	// 0x31d3509d
- (void)_tearDownLabels;	// 0x31d359d1
- (void)_updateLabelMarqueeScrolling;	// 0x31d358a5
// declared property getter: - (id)contentView;	// 0x31d34b45
- (void)dealloc;	// 0x31d34851
- (void)layoutSubviews;	// 0x31d34935
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x31d35ab5
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x31d35ac5
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x31d34b8d
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x31d34b55
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x31d34cb9
// declared property setter: - (void)setTitles:(id)titles;	// 0x31d34c51
// declared property getter: - (BOOL)showingLoadingUI;	// 0x31d35aa5
// declared property getter: - (id)titles;	// 0x31d35a95
@end

