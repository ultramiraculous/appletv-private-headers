/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSKeyValueProxyCaching.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x336cda25
+ (id)_proxyShare;	// 0x336cda29
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x336cda2d
- (XXStruct_OzJQfB)_proxyLocator;	// 0x33683fb9
- (void)_proxyNonGCFinalize;	// 0x336cda31
@end

