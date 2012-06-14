/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class CALayer, MPVideoBufferLayerContainer, NSString, MPAVController, MPMovieSnapshotController;

@interface MPVideoView : UIView {
	MPAVController *_player;	// 48 = 0x30
	UIView *_videoBufferContainerView;	// 52 = 0x34
	MPVideoBufferLayerContainer *_videoBufferContainerLayer;	// 56 = 0x38
	CALayer *_videoBufferLayer;	// 60 = 0x3c
	MPMovieSnapshotController *_snapshotController;	// 64 = 0x40
	NSString *_moviePath;	// 68 = 0x44
	NSString *_movieSubtitle;	// 72 = 0x48
	NSString *_movieTitle;	// 76 = 0x4c
	NSString *_videoID;	// 80 = 0x50
	unsigned _scaleMode;	// 84 = 0x54
	double _startTime;	// 88 = 0x58
	double _stopTime;	// 96 = 0x60
	unsigned _effectiveScaleMode;	// 104 = 0x68
	unsigned _disableFudgingScaleToFullScreen : 1;	// 108 = 0x6c
	unsigned _requiresIntegralScreenFrame : 1;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x3467124d; 
@property(assign) double currentTime;	// G=0x34672b2d; S=0x34672c59; converted property
@property(assign, nonatomic) unsigned effectiveScaleMode;	// G=0x3467298d; S=0x3467299d; @synthesize=_effectiveScaleMode
@property(readonly, assign, nonatomic) CGRect movieFrame;	// G=0x34671999; 
@property(readonly, retain) NSString *moviePath;	// G=0x34671339; converted property
@property(retain, nonatomic) NSString *movieSubtitle;	// G=0x34671349; S=0x346729ad; @synthesize=_movieSubtitle
@property(retain, nonatomic) NSString *movieTitle;	// G=0x346729d1; S=0x346729e1; @synthesize=_movieTitle
@property(assign, nonatomic) MPAVController *player;	// G=0x34672a05; S=0x34672a15; @synthesize=_player
@property(assign, nonatomic) BOOL requiresIntegralScreenFrame;	// G=0x3467195d; S=0x34671971; 
@property(assign, nonatomic) unsigned scaleMode;	// G=0x34672a25; S=0x346717b5; @synthesize=_scaleMode
@property(assign, nonatomic) double startTime;	// G=0x34672a35; S=0x34672a4d; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x34672a61; S=0x34672a79; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x34672a8d; S=0x34672a9d; @synthesize=_videoID
- (id)initWithFrame:(CGRect)frame;	// 0x34670c61
- (void)_AddVideoBufferLayerToViewHierarchyAndHideIfNecessary;	// 0x346724e5
- (BOOL)_allowFudgingScaleToFullScreen;	// 0x34671d99
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x34671a3d
- (BOOL)_isCloseToFullScreenWithTransform:(CGAffineTransform)transform;	// 0x34671d51
- (BOOL)_isExactlyFullScreenWithTransform:(CGAffineTransform)transform;	// 0x34671d09
- (void)_itemWillChangeNotification:(id)_item;	// 0x34671a85
- (void)_layoutSublayers;	// 0x34671fb1
- (void)_layoutVideoLayers:(BOOL)layers;	// 0x34671fc5
- (void)_playbackStateChangedNotification:(id)notification;	// 0x34671a95
- (void)_sizeDidChangedNotification:(id)_size;	// 0x34671b4d
- (BOOL)_sizeDifferenceFromFullScreenIsLessThan:(CGSize)fullScreenIsLessThan allowingZero:(BOOL)zero withTransform:(CGAffineTransform)transform;	// 0x34671e11
- (void)_validityChangedNotification:(id)notification;	// 0x34671b7d
- (void)addSubview:(id)subview;	// 0x346726e5
- (id)avPlayer;	// 0x34672ad5
- (void)bringSubviewToFront:(id)front;	// 0x34672739
- (int)bufferingStatusMask;	// 0x34672b0d
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x3467124d
- (void)cancelSnapshots;	// 0x34671be1
// converted property getter: - (double)currentTime;	// 0x34672b2d
- (void)dealloc;	// 0x34671025
- (double)duration;	// 0x34672b4d
// declared property getter: - (unsigned)effectiveScaleMode;	// 0x3467298d
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x34672691
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34672809
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x3467263d
- (void)insertSubview:(id)subview below:(id)below;	// 0x3467278d
// declared property getter: - (CGRect)movieFrame;	// 0x34671999
// converted property getter: - (id)moviePath;	// 0x34671339
// declared property getter: - (id)movieSubtitle;	// 0x34671349
// declared property getter: - (id)movieTitle;	// 0x346729d1
- (id)mpavController;	// 0x34672ac1
- (void)pause;	// 0x34672c19
- (void)play;	// 0x34672c39
- (void)play;	// 0x34671775
- (void)playFromBeginning;	// 0x3467170d
- (void)playWhenLikelyToKeepUp;	// 0x346716cd
- (int)playableContentType;	// 0x34672b85
- (int)playbackState;	// 0x34672bcd
// declared property getter: - (id)player;	// 0x34672a05
- (void)prepareAVControllerQueue;	// 0x346713cd
- (void)prepareToDisplayVideo;	// 0x346715d1
// declared property getter: - (BOOL)requiresIntegralScreenFrame;	// 0x3467195d
// declared property getter: - (unsigned)scaleMode;	// 0x34672a25
- (void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x34671c39
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x34672c59
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x34672c7d
// declared property setter: - (void)setEffectiveScaleMode:(unsigned)mode;	// 0x3467299d
- (void)setFrame:(CGRect)frame;	// 0x34672865
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x346729ad
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x346729e1
- (void)setMovieWithPath:(id)path;	// 0x346715e1
- (void)setNeedsDisplay;	// 0x346728ad
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x34672905
// declared property setter: - (void)setPlayer:(id)player;	// 0x34672a15
- (void)setRepeatMode:(int)mode;	// 0x34672cc1
// declared property setter: - (void)setRequiresIntegralScreenFrame:(BOOL)frame;	// 0x34671971
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x346717b5
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x346718f5
- (void)setScaleMode:(unsigned)mode duration:(float)duration;	// 0x346717c9
// declared property setter: - (void)setStartTime:(double)time;	// 0x34672a4d
// declared property setter: - (void)setStopTime:(double)time;	// 0x34672a79
// declared property setter: - (void)setVideoID:(id)anId;	// 0x34672a9d
// declared property getter: - (double)startTime;	// 0x34672a35
- (void)stop;	// 0x34672ce1
// declared property getter: - (double)stopTime;	// 0x34672a61
- (void)toggleScaleMode:(BOOL)mode;	// 0x34671925
// declared property getter: - (id)videoID;	// 0x34672a8d
- (id)viewWithTag:(int)tag;	// 0x346727e1
@end
