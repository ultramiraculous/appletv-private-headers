/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <WAKView.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWebDocumentView, UIView, CALayer;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView {
	UIWebDocumentView *_webView;	// 40 = 0x28
	CALayer *_hostingLayer;	// 44 = 0x2c
	UIView *_uiView;	// 48 = 0x30
	CFRunLoopObserverRef _mainRunLoopDrawObserver;	// 52 = 0x34
	BOOL _isFullScreen;	// 56 = 0x38
	BOOL _parentedInLayer;	// 57 = 0x39
	BOOL _isQuickTimePlugIn;	// 58 = 0x3a
	BOOL _isMapViewPlugIn;	// 59 = 0x3b
	BOOL _isiAdPlugIn;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL isMapViewPlugIn;	// G=0x33bf1995; S=0x33b2b5cd; @synthesize=_isMapViewPlugIn
@property(assign, nonatomic) BOOL isQuickTimePlugIn;	// G=0x33bf1985; S=0x33b2b5bd; @synthesize=_isQuickTimePlugIn
@property(assign, nonatomic) BOOL isiAdPlugIn;	// G=0x33bf19a5; S=0x33bf19b5; @synthesize=_isiAdPlugIn
@property(assign, nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;	// G=0x33b2be99; S=0x33b2c3e9; @synthesize=_parentedInLayer
- (id)initWithWebView:(id)webView plugInView:(id)view;	// 0x33b2b46d
- (void)_attachPluginLayerOnMainThread;	// 0x33b2c345
- (void)_connectPluginLayers;	// 0x33b2bb75
- (void)_detachPluginLayerOnMainThread;	// 0x33b2cb0d
- (void)_disconnectPluginLayers;	// 0x33b2cb1d
- (void)_reshapeOnMainThread;	// 0x33b2b78d
- (void)_viewDidMoveToWindowOnMainThread;	// 0x33b2baa1
- (void)attachPluginLayer;	// 0x33b2c2c1
- (void)dealloc;	// 0x33b2cd01
- (void)detachPluginLayer;	// 0x33b2ca89
- (void)drawRect:(CGRect)rect;	// 0x33b2c421
- (void)forwardInvocation:(id)invocation;	// 0x33b2d4d1
- (void)invalidateGState;	// 0x33b2b671
// declared property getter: - (BOOL)isMapViewPlugIn;	// 0x33bf1995
- (BOOL)isParented;	// 0x33b2c3ad
// declared property getter: - (BOOL)isParentedInLayer;	// 0x33b2be99
// declared property getter: - (BOOL)isQuickTimePlugIn;	// 0x33bf1985
// declared property getter: - (BOOL)isiAdPlugIn;	// 0x33bf19a5
- (void)layout;	// 0x33bf17f1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33b2b735
- (void)mouseDown:(id)down;	// 0x33bf1881
- (void)mouseUp:(id)up;	// 0x33bf18bd
- (id)objectForWebScript;	// 0x33bf1839
- (id)plugInView;	// 0x33b2bd69
- (id)pluginLayer;	// 0x33b2be65
- (void)reshape;	// 0x33b2b6b1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x33b2bd79
- (void)setFrame:(CGRect)frame;	// 0x33b2b5dd
- (void)setFrameSize:(CGSize)size;	// 0x33bf16f1
// declared property setter: - (void)setIsMapViewPlugIn:(BOOL)anIn;	// 0x33b2b5cd
// declared property setter: - (void)setIsQuickTimePlugIn:(BOOL)anIn;	// 0x33b2b5bd
// declared property setter: - (void)setIsiAdPlugIn:(BOOL)anIn;	// 0x33bf19b5
// declared property setter: - (void)setParentedInLayer:(BOOL)layer;	// 0x33b2c3e9
- (void)setWebView:(id)view;	// 0x33bf18f9
- (void)viewDidMoveToWindow;	// 0x33b2b9c1
- (void)webPlugInDestroy;	// 0x33b2ccb9
- (void)webPlugInInitialize;	// 0x33b2bdd5
- (void)webPlugInStart;	// 0x33b2be1d
- (void)webPlugInStop;	// 0x33b2cc71
- (BOOL)willProvidePluginLayer;	// 0x33b2bea9
@end
