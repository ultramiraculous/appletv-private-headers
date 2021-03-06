/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x36aeb405; 
@property(readonly, assign) DOMTouchList *changedTouches;	// G=0x36aeb23d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x36aeb39d; 
@property(readonly, assign) BOOL metaKey;	// G=0x36aeb439; 
@property(readonly, assign) float rotation;	// G=0x36aeb36d; 
@property(readonly, assign) float scale;	// G=0x36aeb341; 
@property(readonly, assign) BOOL shiftKey;	// G=0x36aeb3d1; 
@property(readonly, assign) DOMTouchList *targetTouches;	// G=0x36aeb139; 
@property(readonly, assign) DOMTouchList *touches;	// G=0x36aeb035; 
- (void)initTouchEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 touches:(id)touches targetTouches:(id)touches15 changedTouches:(id)touches16 scale:(float)scale rotation:(float)rotation;	// 0x36aeb46d
// declared property getter: - (BOOL)altKey;	// 0x36aeb405
// declared property getter: - (id)changedTouches;	// 0x36aeb23d
// declared property getter: - (BOOL)ctrlKey;	// 0x36aeb39d
// declared property getter: - (BOOL)metaKey;	// 0x36aeb439
// declared property getter: - (float)rotation;	// 0x36aeb36d
// declared property getter: - (float)scale;	// 0x36aeb341
// declared property getter: - (BOOL)shiftKey;	// 0x36aeb3d1
// declared property getter: - (id)targetTouches;	// 0x36aeb139
// declared property getter: - (id)touches;	// 0x36aeb035
@end

