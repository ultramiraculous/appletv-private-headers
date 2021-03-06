/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class SKScrollBar, CAScrollLayer;

@interface SKScrollLayer : SKLayer {
	CAScrollLayer *_scrollContent;	// 56 = 0x38
	SKScrollBar *_scrollBarH;	// 60 = 0x3c
	SKScrollBar *_scrollBarV;	// 64 = 0x40
	CGRect _contentRect;	// 68 = 0x44
	CGPoint _origin;	// 84 = 0x54
	CGPoint _mouseDownPoint;	// 92 = 0x5c
	BOOL _enableDrag;	// 100 = 0x64
}
@property(readonly, retain) CAScrollLayer *scrollContent;	// G=0x3560db4d; converted property
- (id)init;	// 0x3560da39
- (void)addSublayer:(id)sublayer;	// 0x3560de51
- (CGRect)contentBounds;	// 0x3560db5d
- (BOOL)drags;	// 0x3560df85
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3560dfcd
// converted property getter: - (id)scrollContent;	// 0x3560db4d
- (void)setBounds:(CGRect)bounds;	// 0x3560dbe9
- (void)setEnableDrag:(BOOL)drag;	// 0x3560df95
- (void)setOrigin:(CGPoint)origin;	// 0x3560dec9
- (void)setXOrigin:(float)origin;	// 0x3560df65
- (void)setYOrigin:(float)origin;	// 0x3560df45
- (void)updateContentSize;	// 0x3560dcc1
- (CGRect)viewableBounds;	// 0x3560db91
@end

