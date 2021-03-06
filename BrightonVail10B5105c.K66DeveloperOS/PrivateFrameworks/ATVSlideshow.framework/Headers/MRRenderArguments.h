/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MRRenderer, CMAttitude, NSOperationQueue, NSDictionary;

@interface MRRenderArguments : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	NSOperationQueue *_preloadQueue;	// 8 = 0x8
	NSDictionary *_forcedState;	// 12 = 0xc
	CMAttitude *_attitude;	// 16 = 0x10
	double _unalteredTime;	// 20 = 0x14
	double _displayLinkTimestamp;	// 28 = 0x1c
	float _morphingProgress;	// 36 = 0x24
	int _thumbnailPolicy;	// 40 = 0x28
	unsigned char _currentLayoutIndex;	// 44 = 0x2c
	BOOL _isPreloading;	// 45 = 0x2d
	BOOL _freezesSizeOfImageRequests;	// 46 = 0x2e
	BOOL _skipsAnimations;	// 47 = 0x2f
}
@property(retain) CMAttitude *attitude;	// G=0x325c914d; S=0x325c9161; @synthesize=_attitude
@property(assign) unsigned char currentLayoutIndex;	// G=0x325c926d; S=0x325c9285; @synthesize=_currentLayoutIndex
@property(assign) double displayLinkTimestamp;	// G=0x325c91d9; S=0x325c920d; @synthesize=_displayLinkTimestamp
@property(retain) NSDictionary *forcedState;	// G=0x325c9129; S=0x325c913d; @synthesize=_forcedState
@property(assign) BOOL freezesSizeOfImageRequests;	// G=0x325c92e1; S=0x325c92f9; @synthesize=_freezesSizeOfImageRequests
@property(readonly, assign) BOOL isPreloading;	// G=0x325c929d; @synthesize=_isPreloading
@property(assign) float morphingProgress;	// G=0x325c9241; S=0x325c9255; @synthesize=_morphingProgress
@property(retain) NSOperationQueue *preloadQueue;	// G=0x325c9105; S=0x325c9119; @synthesize=_preloadQueue
@property(readonly, assign) MRRenderer *renderer;	// G=0x325c90f1; @synthesize=_renderer
@property(assign, nonatomic) BOOL skipsAnimations;	// G=0x325c9311; S=0x325c9321; @synthesize=_skipsAnimations
@property(assign) int thumbnailPolicy;	// G=0x325c92b5; S=0x325c92c9; @synthesize=_thumbnailPolicy
@property(assign) double unalteredTime;	// G=0x325c9171; S=0x325c91a5; @synthesize=_unalteredTime
- (id)initWithRenderer:(id)renderer;	// 0x325c8ee1
// declared property getter: - (id)attitude;	// 0x325c914d
- (void)cleanup;	// 0x325c8f75
- (id)copyForPreloading;	// 0x325c8ff9
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x325c926d
- (void)dealloc;	// 0x325c8f35
// declared property getter: - (double)displayLinkTimestamp;	// 0x325c91d9
// declared property getter: - (id)forcedState;	// 0x325c9129
// declared property getter: - (BOOL)freezesSizeOfImageRequests;	// 0x325c92e1
// declared property getter: - (BOOL)isPreloading;	// 0x325c929d
// declared property getter: - (float)morphingProgress;	// 0x325c9241
// declared property getter: - (id)preloadQueue;	// 0x325c9105
// declared property getter: - (id)renderer;	// 0x325c90f1
// declared property setter: - (void)setAttitude:(id)attitude;	// 0x325c9161
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x325c9285
// declared property setter: - (void)setDisplayLinkTimestamp:(double)timestamp;	// 0x325c920d
// declared property setter: - (void)setForcedState:(id)state;	// 0x325c913d
// declared property setter: - (void)setFreezesSizeOfImageRequests:(BOOL)imageRequests;	// 0x325c92f9
// declared property setter: - (void)setMorphingProgress:(float)progress;	// 0x325c9255
// declared property setter: - (void)setPreloadQueue:(id)queue;	// 0x325c9119
// declared property setter: - (void)setSkipsAnimations:(BOOL)animations;	// 0x325c9321
// declared property setter: - (void)setThumbnailPolicy:(int)policy;	// 0x325c92c9
// declared property setter: - (void)setUnalteredTime:(double)time;	// 0x325c91a5
// declared property getter: - (BOOL)skipsAnimations;	// 0x325c9311
// declared property getter: - (int)thumbnailPolicy;	// 0x325c92b5
// declared property getter: - (double)unalteredTime;	// 0x325c9171
@end

