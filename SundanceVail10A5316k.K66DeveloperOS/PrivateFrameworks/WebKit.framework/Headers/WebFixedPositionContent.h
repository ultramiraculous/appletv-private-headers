/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebFixedPositionContent : NSObject {
@private
	WebFixedPositionContentData *_private;	// 4 = 0x4
}
- (id)initWithWebView:(id)webView;	// 0x350037dd
- (void)addOrUpdateLayer:(id)layer sizing:(unsigned)sizing bounds:(CGRect)bounds alignmentOffset:(CGSize)offset insideLayerSync:(BOOL)sync;	// 0x3503dec1
- (void)dealloc;	// 0x3503da5d
- (void)didFinishScrollingOrZooming;	// 0x3502222d
- (BOOL)hasFixedPositionLayers;	// 0x35020be5
- (void)lockLayers;	// 0x3500fc31
- (void)removeAllLayers;	// 0x3501b59d
- (void)removeLayer:(id)layer insideLayerSync:(BOOL)sync;	// 0x3503e189
- (void)scrollOrZoomChanged:(CGRect)changed;	// 0x3503db71
- (void)unlockLayers;	// 0x3500fd2d
@end

