/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRWindow : XXUnknownSuperclass {
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x28d359; S=0x28d339; converted property
@property(retain) BRControl *content;	// G=0x28d169; S=0x28d0c1; converted property
@property(assign) BOOL isOpaque;	// G=0x28d37d; S=0x28d2fd; converted property
@property(assign) int level;	// G=0x28d1b9; S=0x28d179; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x28d38d; converted property
+ (void)_establishRootContext;	// 0x28d39d
+ (void)_establishRootLayerBounds;	// 0x28d7bd
+ (void)adjustToDisplayChange;	// 0x28cdb9
+ (BOOL)dispatchEvent:(id)event;	// 0x28dcd1
+ (id)focusedLeafControl;	// 0x28dd09
+ (void)initialize;	// 0x28cccd
+ (CGRect)interfaceFrame;	// 0x28cd99
+ (CGSize)maxBounds;	// 0x28cd85
+ (id)rootLayer;	// 0x28db11
+ (void)setMaxBounds:(CGSize)bounds;	// 0x28db3d
+ (id)window;	// 0x28cd4d
+ (id)windowList;	// 0x28db2d
- (id)init;	// 0x28cf85
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x28e015
- (id)_controlPlane;	// 0x28dd35
- (void)_orderWindow:(id)window above:(id)above;	// 0x28df71
- (void)_orderWindow:(id)window below:(id)below;	// 0x28decd
- (void)_orderWindowBack:(id)back;	// 0x28de39
- (void)_orderWindowFront:(id)front;	// 0x28dda5
- (void)_orderWindowOut:(id)anOut;	// 0x28dd45
- (void)_updateContent;	// 0x28e299
- (void)_updateRenderedWindows;	// 0x28e0c9
// converted property getter: - (BOOL)acceptsFocus;	// 0x28d359
// converted property getter: - (id)content;	// 0x28d169
- (void)dealloc;	// 0x28d031
// converted property getter: - (BOOL)isOpaque;	// 0x28d37d
// converted property getter: - (BOOL)isOrderedIn;	// 0x28d38d
// converted property getter: - (int)level;	// 0x28d1b9
- (void)orderAbove:(id)above;	// 0x28d2b9
- (void)orderBack;	// 0x28d235
- (void)orderBelow:(id)below;	// 0x28d275
- (void)orderFront;	// 0x28d1f5
- (void)orderOut;	// 0x28d1c9
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x28d339
// converted property setter: - (void)setContent:(id)content;	// 0x28d0c1
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x28d2fd
// converted property setter: - (void)setLevel:(int)level;	// 0x28d179
@end

