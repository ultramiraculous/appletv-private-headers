/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class MCPlug, MCPlugHaven, MCPlugParallel, MCPlugSerial, MRAudioPlayer, NSString, NSMutableDictionary, NSMutableArray, MRRenderer, MRLayerClock, NSDictionary;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	CGSize mPixelSize;	// 28 = 0x1c
	double mTimeIn;	// 36 = 0x24
	BOOL mIsPreactivated;	// 44 = 0x2c
	BOOL mIsActivated;	// 45 = 0x2d
	BOOL mOkToDeferKenBurns;	// 46 = 0x2e
	MRLayerClock *mClock;	// 48 = 0x30
	XXStruct_6H5sIB *mRenderingState;	// 52 = 0x34
	NSMutableDictionary *mAnimationTriggers;	// 56 = 0x38
	NSMutableDictionary *mPersistentState;	// 60 = 0x3c
	BOOL mIsSelected;	// 64 = 0x40
	BOOL mIsDimmed;	// 65 = 0x41
	NSDictionary *mParameters;	// 68 = 0x44
	MRRenderer *mRenderer;	// 72 = 0x48
	BOOL mIsPrecomputing;	// 76 = 0x4c
	BOOL mIsReadonly;	// 77 = 0x4d
	BOOL mDoAudio;	// 78 = 0x4e
	BOOL mNeedsRendering;	// 79 = 0x4f
	BOOL mNeedsToUpdateGeometry;	// 80 = 0x50
	BOOL mNeedsToRequestRebuildAudio;	// 81 = 0x51
	BOOL mNeedsToRequestRebuildVolume;	// 82 = 0x52
	NSMutableArray *mLayerCommandQueue;	// 84 = 0x54
	BOOL mIsScheduledForDestruction;	// 88 = 0x58
	double mTimeStamp;	// 92 = 0x5c
	BOOL mSupportsAccumulation;	// 100 = 0x64
	MRAudioPlayer *mAudioPlayer;	// 104 = 0x68
	id mParentHelper;	// 108 = 0x6c
}
@property(readonly, assign) BOOL _isNative3D;	// G=0x34365575; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x3436552d; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x34361c71; 
@property(assign) double duration;	// G=0x34361fa1; S=0x34362005; 
@property(readonly, assign) BOOL isActivated;	// G=0x34365479; @synthesize=mIsActivated
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x34362521; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x343654b9; S=0x34365349; @synthesize=mIsDimmed
@property(readonly, assign) BOOL isInfinite;	// G=0x3436251d; 
@property(readonly, assign) BOOL isNative3D;	// G=0x343624dd; 
@property(readonly, assign) BOOL isOpaque;	// G=0x34362519; 
@property(readonly, assign) BOOL isPreactivated;	// G=0x34365489; @synthesize=mIsPreactivated
@property(readonly, assign) BOOL isScheduledForDestruction;	// G=0x3436550d; @synthesize=mIsScheduledForDestruction
@property(assign) BOOL isSelected;	// G=0x34365499; S=0x343654a9; @synthesize=mIsSelected
@property(readonly, assign) NSDictionary *parameters;	// G=0x34365401; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x3436553d; S=0x34365551; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x3436551d; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x343653d5; S=0x34361c91; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x34365395; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x343653c5; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x343653b5; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x343653a5; @synthesize=mPlugAsSerial
@property(readonly, assign) XXStruct_6H5sIB *renderingState;	// G=0x34361c81; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x34365385; @synthesize=mSuperlayer
@property(readonly, assign) BOOL supportsAccumulation;	// G=0x343654fd; @synthesize=mSupportsAccumulation
@property(readonly, assign) BOOL supportsDynamicExpansion;	// G=0x343638d5; 
@property(assign) double timeIn;	// G=0x34365411; S=0x34365445; @synthesize=mTimeIn
@property(readonly, assign) double timeStamp;	// G=0x343654c9; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x343653f1; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x34360eb9
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34362d99
- (void)_applyState:(id)state;	// 0x34363acd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x3436522d
// declared property getter: - (BOOL)_isNative3D;	// 0x34365575
- (void)_observePlug;	// 0x3436568d
- (void)_observePlugOnPreactivate;	// 0x343657a1
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x34365581
- (void)_rebuildAudio;	// 0x34364ded
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34365579
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3436557d
- (void)_sendAction:(id)action async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x34364b95
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x3436590d
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x343625c1
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x34364cc9
- (void)_unobservePlug;	// 0x34365729
- (void)_unobservePlugOnDepreactivate;	// 0x34365869
- (void)_updateStateWithContext:(id)context;	// 0x3436499d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x34363bd9
- (void)activate;	// 0x34362125
// declared property getter: - (id)animationTriggers;	// 0x3436552d
- (void)cancelLoading;	// 0x343624d9
- (void)cleanup;	// 0x343612f9
// declared property getter: - (id)clock;	// 0x34361c71
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x34363a21
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x3436398d
- (void)deactivate;	// 0x3436222d
- (void)dealloc;	// 0x34361279
- (void)depreactivate:(BOOL)depreactivate;	// 0x34362331
- (double)doActionTrigger:(id)trigger;	// 0x34363fe5
- (double)doAnimationTrigger:(id)trigger;	// 0x34363bdd
- (double)doGenericAction:(id)action;	// 0x34364071
// declared property getter: - (double)duration;	// 0x34361fa1
- (void)finalize;	// 0x343612b9
- (BOOL)hasAudio;	// 0x34363989
- (BOOL)hasSomethingToRender;	// 0x34361e81
// declared property getter: - (BOOL)isActivated;	// 0x34365479
- (BOOL)isActivatedAtTime:(double)time;	// 0x34362481
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x34362521
// declared property getter: - (BOOL)isDimmed;	// 0x343654b9
- (BOOL)isFlatAndSquare;	// 0x34362525
// declared property getter: - (BOOL)isInfinite;	// 0x3436251d
- (BOOL)isLoadedForTime:(double)time;	// 0x343624c1
// declared property getter: - (BOOL)isNative3D;	// 0x343624dd
// declared property getter: - (BOOL)isOpaque;	// 0x34362519
// declared property getter: - (BOOL)isPreactivated;	// 0x34365489
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x3436242d
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x3436550d
// declared property getter: - (BOOL)isSelected;	// 0x34365499
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x343624d1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34361581
// declared property getter: - (id)parameters;	// 0x34365401
// declared property getter: - (id)parentHelper;	// 0x3436553d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3436376d
// declared property getter: - (id)persistentState;	// 0x3436551d
// declared property getter: - (CGSize)pixelSize;	// 0x343653d5
// declared property getter: - (id)plug;	// 0x34365395
// declared property getter: - (id)plugAsHaven;	// 0x343653c5
// declared property getter: - (id)plugAsParallel;	// 0x343653b5
// declared property getter: - (id)plugAsSerial;	// 0x343653a5
- (void)preactivate;	// 0x34362045
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343628d9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34362fd5
// declared property getter: - (XXStruct_6H5sIB *)renderingState;	// 0x34361c81
- (void)resumeOrPause:(BOOL)pause;	// 0x34361f0d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343635d5
- (void)scheduleForDestruction;	// 0x3436393d
// declared property setter: - (void)setDuration:(double)duration;	// 0x34362005
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x34365349
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x343654a9
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x34361c6d
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x34365551
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x34361c91
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x34365445
- (void)stampTime;	// 0x343638d9
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x343619ed
- (id)sublayerWithPlug:(id)plug;	// 0x343617f5
// declared property getter: - (id)superlayer;	// 0x34365385
// declared property getter: - (BOOL)supportsAccumulation;	// 0x343654fd
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x343638d5
- (void)synchronizeTime;	// 0x34361f75
// declared property getter: - (double)timeIn;	// 0x34365411
// declared property getter: - (double)timeStamp;	// 0x343654c9
- (void)unload;	// 0x343624d5
- (void)updateGeometry;	// 0x34361cf9
// declared property getter: - (id)uuid;	// 0x343653f1
@end

