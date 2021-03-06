/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, BRControl, NSTimer, RUIPhloatoArtLoader, RUIPhloatoPlaneDelegate;

__attribute__((visibility("hidden")))
@interface RUIPhloatoPlane : XXUnknownSuperclass {
	BRControl *_planeLayer;	// 4 = 0x4
	RUIPhloatoArtLoader *_provider;	// 8 = 0x8
	NSMutableArray *_photoLayers;	// 12 = 0xc
	RUIPhloatoPlaneDelegate *_animationDelegate;	// 16 = 0x10
	NSTimer *_pullTimer;	// 20 = 0x14
	float _frameMultiplier;	// 24 = 0x18
	float _zPosition;	// 28 = 0x1c
	BOOL _pullsImages;	// 32 = 0x20
	const RUIPhloatoPlaneImagePosition *_table;	// 36 = 0x24
	long _currentEntryIndex;	// 40 = 0x28
	long _entryCount;	// 44 = 0x2c
}
@property(assign) float frameMultiplier;	// G=0x3f4045; S=0x3f4035; converted property
@property(retain) RUIPhloatoArtLoader *provider;	// G=0x3f3ee5; S=0x3f3ead; converted property
@property(assign) BOOL pullsImages;	// G=0x3f3f25; S=0x3f3ef9; converted property
@property(assign) float zPosition;	// G=0x3f4025; S=0x3f3f35; converted property
- (id)initWithPlaneLayer:(id)planeLayer positionTable:(const RUIPhloatoPlaneImagePosition *)table count:(long)count;	// 0x3f3d2d
- (void).cxx_destruct;	// 0x3f4055
- (void)_addNextImage:(id)image;	// 0x3f41b9
- (void)_createImagePuller;	// 0x3f411d
- (void)_updateImagePuller;	// 0x3f40c1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3f45f5
- (void)dealloc;	// 0x3f3e41
// converted property getter: - (float)frameMultiplier;	// 0x3f4045
// converted property getter: - (id)provider;	// 0x3f3ee5
// converted property getter: - (BOOL)pullsImages;	// 0x3f3f25
// converted property setter: - (void)setFrameMultiplier:(float)multiplier;	// 0x3f4035
// converted property setter: - (void)setProvider:(id)provider;	// 0x3f3ead
// converted property setter: - (void)setPullsImages:(BOOL)images;	// 0x3f3ef9
// converted property setter: - (void)setZPosition:(float)position;	// 0x3f3f35
// converted property getter: - (float)zPosition;	// 0x3f4025
@end

