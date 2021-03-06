/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject {
@private
	DOMNode *_node;	// 4 = 0x4
}
+ (id)threadSafeNodeWithNode:(id)node;	// 0x301864c9
- (id)initWithNode:(id)node;	// 0x3018654d
- (id)_realNode;	// 0x302b7db5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x302b7dc5
- (void)dealloc;	// 0x3018859d
- (id)description;	// 0x302b7e81
- (void)forwardInvocation:(id)invocation;	// 0x30187411
- (BOOL)isEqual:(id)equal;	// 0x302b7d91
- (BOOL)isKindOfClass:(Class)aClass;	// 0x30187369
- (id)methodSignatureForSelector:(SEL)selector;	// 0x301873c1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x302b7e1d
@end

