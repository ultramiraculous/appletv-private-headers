/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface UITouchDiagnosticsLayer : UIView {
@private
	CFArrayRef _eventQueue;	// 48 = 0x30
	UIBezierPath *_hitRectsPath;	// 52 = 0x34
	UIBezierPath *_customHitRectsPath;	// 56 = 0x38
	UIBezierPath *_chargesPath;	// 60 = 0x3c
	BOOL _trackTouchEvents;	// 64 = 0x40
	BOOL _displayTouchEvents;	// 65 = 0x41
	BOOL _displayHitRects;	// 66 = 0x42
	BOOL _displayChargeMap;	// 67 = 0x43
}
- (id)initWithFrame:(CGRect)frame;	// 0x330b98a9
- (void)_addLayerHitRects:(id)rects toPath:(id)path customPath:(id)path3;	// 0x330b9a75
- (void)dealloc;	// 0x330b9915
- (void)diagnoseEvent:(GSEventRef)event;	// 0x330ba4fd
- (void)drawChargeMap;	// 0x330b9cd9
- (void)drawRect:(CGRect)rect;	// 0x330ba0b1
- (BOOL)layerRespondsToEvents:(id)events;	// 0x330b9999
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x330ba579
- (void)refreshHitRects;	// 0x330ba57d
- (void)setDisplayChargeMap:(BOOL)map;	// 0x330ba68d
- (void)setDisplayHitRects:(BOOL)rects;	// 0x330ba62d
- (void)setDisplayTouchEvents:(BOOL)events;	// 0x330ba65d
- (void)setTrackTouchEvents:(BOOL)events;	// 0x330ba5fd
- (void)tearDown;	// 0x330ba6bd
@end

