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
+ (BRFocusEdge)focusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x4180ad
+ (id)initalFocusForPoint:(CGPoint)point container:(id)container searchDownwardOnly:(BOOL)only;	// 0x41786d
+ (id)newFocusForCandidate:(id)candidate container:(id)container event:(id)event;	// 0x417b35
+ (id)newFocusForEdge:(BRFocusEdge)edge currentCandidate:(id)candidate container:(id)container event:(id)event;	// 0x417c41
+ (BRFocusEdge)oppositeFocusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x418139
@end
