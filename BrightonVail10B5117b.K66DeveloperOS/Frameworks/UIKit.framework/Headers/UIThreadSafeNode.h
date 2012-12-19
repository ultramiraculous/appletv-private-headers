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
	DOMNode *_node;	// 4 = 0x4
}
+ (id)threadSafeNodeWithNode:(id)node;	// 0x32f4f6f1
- (id)initWithNode:(id)node;	// 0x32f4f779
- (id)_realNode;	// 0x32f4fad5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32f4f91d
- (void)dealloc;	// 0x32f4f855
- (id)description;	// 0x32f4f7cd
- (void)forwardInvocation:(id)invocation;	// 0x32f4f9e1
- (BOOL)isEqual:(id)equal;	// 0x32f4f8f9
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32f4f8a1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32f4fa6d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32f4f979
@end
