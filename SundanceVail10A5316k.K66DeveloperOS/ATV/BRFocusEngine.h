/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRFocusEngine : XXUnknownSuperclass {
}
+ (BRFocusEdge)focusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x35f04d
+ (id)initalFocusForPoint:(CGPoint)point container:(id)container searchDownwardOnly:(BOOL)only;	// 0x35e86d
+ (id)newFocusForCandidate:(id)candidate container:(id)container event:(id)event;	// 0x35eb05
+ (id)newFocusForEdge:(BRFocusEdge)edge currentCandidate:(id)candidate container:(id)container event:(id)event;	// 0x35ec0d
+ (BRFocusEdge)oppositeFocusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x35f0d9
@end
