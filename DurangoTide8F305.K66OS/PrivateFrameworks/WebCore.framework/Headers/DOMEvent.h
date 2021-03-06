/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject {
}
@property(readonly, assign) BOOL bubbles;	// G=0x316767d1; 
@property(assign) BOOL cancelBubble;	// G=0x31676859; S=0x3167686d; 
@property(readonly, assign) BOOL cancelable;	// G=0x316767e5; 
@property(readonly, retain) id<DOMEventTarget> currentTarget;	// G=0x31676b79; 
@property(readonly, assign) unsigned short eventPhase;	// G=0x316767bd; 
@property(assign) BOOL returnValue;	// G=0x31676821; S=0x3167683d; 
@property(readonly, retain) id<DOMEventTarget> srcElement;	// G=0x31676b5d; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x315ec1f5; 
@property(readonly, assign) unsigned long long timeStamp;	// G=0x316767f9; 
@property(readonly, copy) NSString *type;	// G=0x31676b95; 
- (void)initEvent:(id)event :(BOOL)arg2 :(BOOL)arg3;	// 0x316768cd
- (void)initEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3;	// 0x31676a15
// declared property getter: - (BOOL)bubbles;	// 0x316767d1
// declared property getter: - (BOOL)cancelBubble;	// 0x31676859
// declared property getter: - (BOOL)cancelable;	// 0x316767e5
// declared property getter: - (id)currentTarget;	// 0x31676b79
- (void)dealloc;	// 0x315ec229
- (BOOL)defaultPrevented;	// 0x3167680d
// declared property getter: - (unsigned short)eventPhase;	// 0x316767bd
- (void)finalize;	// 0x31676bbd
- (void)preventDefault;	// 0x3167689d
// declared property getter: - (BOOL)returnValue;	// 0x31676821
// declared property setter: - (void)setCancelBubble:(BOOL)bubble;	// 0x3167686d
// declared property setter: - (void)setReturnValue:(BOOL)value;	// 0x3167683d
// declared property getter: - (id)srcElement;	// 0x31676b5d
- (void)stopImmediatePropagation;	// 0x316768b9
- (void)stopPropagation;	// 0x31676889
// declared property getter: - (id)target;	// 0x315ec1f5
// declared property getter: - (unsigned long long)timeStamp;	// 0x316767f9
// declared property getter: - (id)type;	// 0x31676b95
@end

