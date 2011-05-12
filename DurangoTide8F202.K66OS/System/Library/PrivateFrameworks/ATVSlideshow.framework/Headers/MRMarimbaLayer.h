/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import <CAEAGLLayer.h> // Unknown library

@class MPDocument, MRRenderer, EAGLContext;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaPlayback> {
@private
	MRRenderer *_renderer;	// 52 = 0x34
	MPDocument *_document;	// 56 = 0x38
	BOOL _masterClockIsSet;	// 60 = 0x3c
	BOOL _bailTimeWatcher;	// 61 = 0x3d
	BOOL _stopWithVideo;	// 62 = 0x3e
	BOOL _readOnly;	// 63 = 0x3f
	EAGLContext *_context;	// 64 = 0x40
	unsigned _viewRenderbuffer;	// 68 = 0x44
	unsigned _viewFramebuffer;	// 72 = 0x48
}
@property(assign) BOOL bailTimeWatcher;	// G=0x3150a5ad; S=0x3150a5bd; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x31509d9d; S=0x31509dbd; 
@property(retain) MPDocument *document;	// G=0x315095c5; S=0x315096b9; converted property
@property(readonly, retain) MRRenderer *renderer;	// G=0x3150a099; converted property
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x31509ce1; S=0x31509cf1; 
@property(assign) double time;	// G=0x31509ddd; S=0x31509dfd; converted property
@property(assign) float volume;	// G=0x31509ea1; S=0x31509ec1; converted property
+ (id)layerWithDocument:(id)document size:(CGSize)size;	// 0x31509175
+ (void)releaseResources;	// 0x315091e5
- (id)init;	// 0x315092f5
- (id)_currentEffectContainer;	// 0x31507631
- (id)_effectContainerForTime:(double)time;	// 0x31507b55
- (id)_firstEffectContainer;	// 0x31507af5
- (int)_mainLayerIndex;	// 0x31507c95
- (void)_warmupRendererThreaded:(id)threaded;	// 0x3150a169
- (void)aspectRatioChangedTo:(id)to;	// 0x3150a591
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x3150a5ad
- (void)callbackThread:(id)thread;	// 0x31507d5d
- (void)cleanup;	// 0x31509551
- (id)currentSlide;	// 0x3150816d
- (id)currentSlides;	// 0x31507fa1
- (void)dealloc;	// 0x31509469
- (void)destroyFramebuffer;	// 0x3150a5cd
- (void)didAddEffects:(id)effects;	// 0x3150a515
- (void)didLiveChanged:(id)changed;	// 0x31509b49
- (id)displayedEffectContainers;	// 0x31506f1d
// declared property getter: - (BOOL)displaysFPS;	// 0x31509d9d
// converted property getter: - (id)document;	// 0x315095c5
- (void)gotoBeginning;	// 0x31509f85
- (void)gotoEnd;	// 0x31509ee1
- (void)gotoNextSlide;	// 0x315084c9
- (void)gotoPreviousSlide;	// 0x31508b25
- (void)gotoSlide:(id)slide;	// 0x31508f9d
- (BOOL)isInTransition;	// 0x31507809
- (BOOL)isPlaying;	// 0x31509bd9
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x31506f79
- (void)moveToNextEffectContainer;	// 0x31507159
- (void)moveToPreviousEffectContainer;	// 0x31507231
- (void)moveToSubtitleForSlide:(id)slide;	// 0x31507495
- (void)moveToTitleSlide;	// 0x31507301
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x3150a1c1
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x3150a441
- (void)nextFrame;	// 0x31509fd1
- (void)pause;	// 0x31509cad
- (void)play;	// 0x31509bf9
- (void)prevFrame;	// 0x3150a035
- (double)relativeTime;	// 0x31506dd1
- (double)relativeTimeForBackgroundAudio;	// 0x31506e21
- (double)relativeTimeForLayer:(id)layer;	// 0x31506e7d
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x3150830d
// converted property getter: - (id)renderer;	// 0x3150a099
- (void)setAsynchronous:(BOOL)asynchronous;	// 0x315095d5
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x3150a5bd
- (void)setBounds:(CGRect)bounds;	// 0x31509649
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x31509dbd
// converted property setter: - (void)setDocument:(id)document;	// 0x315096b9
- (void)setFrame:(CGRect)frame;	// 0x315095d9
- (void)setReadOnly:(BOOL)only;	// 0x3150a59d
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x31509cf1
// converted property setter: - (void)setTime:(double)time;	// 0x31509dfd
// converted property setter: - (void)setVolume:(float)volume;	// 0x31509ec1
- (CGImageRef)snapshotAsCGImage;	// 0x3150a599
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x3150a595
// declared property getter: - (BOOL)stopWithVideo;	// 0x31509ce1
// converted property getter: - (double)time;	// 0x31509ddd
- (double)timeRemaining;	// 0x31509e49
- (void)togglePlayback;	// 0x31509b95
- (BOOL)updateFramebuffer;	// 0x3150a689
// converted property getter: - (float)volume;	// 0x31509ea1
- (void)warmupRenderer;	// 0x3150a0a9
- (void)watcherThread:(id)thread;	// 0x31507e89
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x315078e5
@end
