/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class NSArray;

@interface MPPlaybackTitlesView : UIControl {
	NSArray *_labels;	// 68 = 0x44
	NSArray *_titles;	// 72 = 0x48
	BOOL _showingLoadingUI;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x33639cc1; S=0x33639f0d; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x33639cd1; S=0x33639f35; @synthesize=_titles
- (id)init;	// 0x33639f8d
- (id)initWithFrame:(CGRect)frame;	// 0x3363a0b1
- (id)_addLabel:(unsigned)label;	// 0x33639ce1
- (id)_addLoadingLabel;	// 0x3363a935
- (void)_layoutLabels;	// 0x3363a415
- (void)_layoutLoadingUI;	// 0x3363a191
- (void)_tearDownLabels;	// 0x3363a881
- (void)dealloc;	// 0x3363a055
- (void)layoutSubviews;	// 0x3363a009
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x33639f0d
// declared property setter: - (void)setTitles:(id)titles;	// 0x33639f35
// declared property getter: - (BOOL)showingLoadingUI;	// 0x33639cc1
// declared property getter: - (id)titles;	// 0x33639cd1
@end

