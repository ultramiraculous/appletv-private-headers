/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLRequest, NSString, NSCachedURLResponse;

__attribute__((visibility("hidden")))
@interface NSURLCacheNode : NSObject {
@private
	NSCachedURLResponse *cachedResponse;	// 4 = 0x4
	NSURLRequest *request;	// 8 = 0x8
	NSString *key;	// 12 = 0xc
	NSURLCacheNode *prev;	// 16 = 0x10
	NSURLCacheNode *next;	// 20 = 0x14
	unsigned long hash;	// 24 = 0x18
}
- (id)initWithCachedResponse:(id)cachedResponse request:(id)request key:(id)key;	// 0x3370b3a9
- (void)dealloc;	// 0x3370b549
- (id)description;	// 0x3370b4f5
- (BOOL)isEqual:(id)equal;	// 0x3370b471
@end

