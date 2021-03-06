/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent {
}
@property(readonly, assign) int charCode;	// G=0x36028f3d; 
@property(readonly, assign) int detail;	// G=0x36028e0d; 
@property(readonly, assign) int keyCode;	// G=0x36028e39; 
@property(readonly, assign) int layerX;	// G=0x36029041; 
@property(readonly, assign) int layerY;	// G=0x36029145; 
@property(readonly, assign) int pageX;	// G=0x36029249; 
@property(readonly, assign) int pageY;	// G=0x3602934d; 
@property(readonly, assign) DOMAbstractView *view;	// G=0x36028d09; 
@property(readonly, assign) int which;	// G=0x36029451; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x36029781
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x36029555
// declared property getter: - (int)charCode;	// 0x36028f3d
// declared property getter: - (int)detail;	// 0x36028e0d
// declared property getter: - (int)keyCode;	// 0x36028e39
// declared property getter: - (int)layerX;	// 0x36029041
// declared property getter: - (int)layerY;	// 0x36029145
// declared property getter: - (int)pageX;	// 0x36029249
// declared property getter: - (int)pageY;	// 0x3602934d
// declared property getter: - (id)view;	// 0x36028d09
// declared property getter: - (int)which;	// 0x36029451
@end

