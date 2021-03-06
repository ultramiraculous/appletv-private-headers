/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class RUIPhloatoPlane, NSTimer;

__attribute__((visibility("hidden")))
@interface RUIPhloatoControl : BRControl {
	RUIPhloatoPlane *_frontPlane;	// 84 = 0x54
	RUIPhloatoPlane *_middlePlane;	// 88 = 0x58
	RUIPhloatoPlane *_backPlane;	// 92 = 0x5c
	NSTimer *_spinTimer;	// 96 = 0x60
	float _spinFrequency;	// 100 = 0x64
	BOOL _waitingForQueue;	// 104 = 0x68
}
@property(assign) float spinFrequency;	// G=0x4ae04d; S=0x4ae03d; converted property
- (id)init;	// 0x4ad8a1
- (void).cxx_destruct;	// 0x4ae13d
- (void)_addProviderToPlane:(id)plane withMaxImageSize:(CGSize)maxImageSize;	// 0x4ae435
- (BOOL)_allQueuesReady;	// 0x4ae199
- (void)_cupidDataClientUpdated:(id)updated;	// 0x4aec7d
- (void)_fireSpinAnimation:(id)animation;	// 0x4ae545
- (void)_queueReady:(id)ready;	// 0x4ae411
- (void)_requestScreenSaverData;	// 0x4aeb59
- (float)_rotationForFrame:(int)frame totalFrameCount:(int)count directionFactor:(float)factor;	// 0x4aea91
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x4aec6d
- (void)_screenSaverDataReady:(id)ready;	// 0x4aed35
- (void)_startWhenReady;	// 0x4ae25d
- (void)_stopUpdates;	// 0x4ae38d
- (float)_zTranslationForFrame:(int)frame totalFrameCount:(int)count;	// 0x4ae979
- (void)controlWasActivated;	// 0x4ae05d
- (void)controlWasDeactivated;	// 0x4ae0fd
- (void)dealloc;	// 0x4addf5
- (void)setProvider:(id)provider;	// 0x4adeb1
// converted property setter: - (void)setSpinFrequency:(float)frequency;	// 0x4ae03d
// converted property getter: - (float)spinFrequency;	// 0x4ae04d
@end

