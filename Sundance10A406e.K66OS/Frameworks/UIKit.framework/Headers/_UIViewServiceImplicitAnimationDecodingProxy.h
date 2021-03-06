/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h"

@class _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {
	SEL _implicitAnimationSelector;	// 8 = 0x8
	_UIViewAnimationAttributes *_animationAttributes;	// 12 = 0xc
}
+ (id)proxyDecodingAnimationsForTarget:(id)target;	// 0x30d00f89
- (void)__animateNextInvocationOfSelector:(id)selector withAnimationAttributes:(id)animationAttributes;	// 0x30d0115d
- (void)dealloc;	// 0x30d00fb5
- (void)forwardInvocation:(id)invocation;	// 0x30d01001
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30d011b9
@end

