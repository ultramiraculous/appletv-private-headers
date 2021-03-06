/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayer, NSString, AVPlayerLayerInternal;

@interface AVPlayerLayer : CALayer {
	AVPlayerLayerInternal *_playerLayer;	// 48 = 0x30
}
@property(assign, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x3029f505; S=0x3029f605; converted property
@property(retain, nonatomic) AVPlayer *player;	// G=0x3029e929; S=0x3029ea55; 
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;	// G=0x3029f19d; 
@property(copy) NSString *videoGravity;	// G=0x3029ed35; S=0x3029eea1; 
+ (id)playerLayerWithPlayer:(id)player;	// 0x3029b5c1
- (id)init;	// 0x3029b61d
- (id)initWithLayer:(id)layer;	// 0x3029b8b5
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x3029c045
- (void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;	// 0x3029c511
- (void)_calculateSubtitleLayerBounds:(CGRect)bounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform shouldUpdateCachedSubtitleSample:(BOOL)sample outBound:(CGRect *)bound;	// 0x3029df3d
- (void)_connectContentLayerToPlayer;	// 0x3029d171
- (void)_disconnectContentLayerFromPlayer;	// 0x3029d1ad
- (CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;	// 0x3029d1e9
- (CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;	// 0x3029f91d
- (float)_pctOfSubtitleLayerHeight;	// 0x3029f479
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x3029d829
- (void)_setItem:(id)item readyForDisplay:(BOOL)display;	// 0x3029f1f1
- (void)_setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3029f2f5
- (void)_setSubtitleGravity:(id)gravity;	// 0x3029f3b1
- (BOOL)_subtitleDisplayEnabled;	// 0x3029f2bd
- (id)_subtitleGravity;	// 0x3029f381
- (void)_subtitlesDidChange:(id)_subtitles;	// 0x3029e8f5
- (void)_updatePresentationSize:(CGSize)size;	// 0x3029d255
- (void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform forceRender:(BOOL)render;	// 0x3029e121
- (void)_updateSubtitles:(id)subtitles forceRender:(BOOL)render;	// 0x3029e569
- (CGRect)_videoRectForBounds:(CGRect)bounds;	// 0x3029f8f9
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x3029c945
- (void)dealloc;	// 0x3029cf65
- (void)finalize;	// 0x3029d0b1
// converted property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x3029f505
// declared property getter: - (BOOL)isReadyForDisplay;	// 0x3029f19d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3029ec49
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3029de11
// declared property getter: - (id)player;	// 0x3029e929
- (void)removeAllAnimations;	// 0x3029ce99
- (void)removeAnimationForKey:(id)key;	// 0x3029cd41
- (void)setBounds:(CGRect)bounds;	// 0x3029b9f9
// converted property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x3029f605
// declared property setter: - (void)setPlayer:(id)player;	// 0x3029ea55
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x3029eea1
// declared property getter: - (id)videoGravity;	// 0x3029ed35
- (CGRect)videoRect;	// 0x3029f70d
@end

