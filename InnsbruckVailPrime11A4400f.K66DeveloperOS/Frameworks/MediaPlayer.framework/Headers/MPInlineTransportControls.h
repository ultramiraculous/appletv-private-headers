/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls {
	UILabel *_loadingMovieLabel;	// 200 = 0xc8
	UIActivityIndicatorView *_loadingMovieIndicator;	// 204 = 0xcc
}
@property(readonly, assign, nonatomic) CGRect availableProgressControlAreaFrame;	// G=0x2e2d116d; 
- (id)initWithFrame:(CGRect)frame;	// 0x2e2d0401
- (void).cxx_destruct;	// 0x2e2d13c5
- (void)_disableAnimationIfNecessary:(id)necessary;	// 0x2e2d1325
- (void)_enableAnimationIfNecessary:(id)necessary;	// 0x2e2d1365
// declared property getter: - (CGRect)availableProgressControlAreaFrame;	// 0x2e2d116d
- (id)buttonImageForPart:(unsigned long long)part;	// 0x2e2d07ad
- (void)layoutSubviews;	// 0x2e2d0929
- (id)newButtonForPart:(unsigned long long)part;	// 0x2e2d0769
- (id)pauseButtonImage;	// 0x2e2d08d5
- (id)playButtonImage;	// 0x2e2d08bd
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x2e2d0481
- (void)setDisabledParts:(unsigned long long)parts;	// 0x2e2d08ed
@end
