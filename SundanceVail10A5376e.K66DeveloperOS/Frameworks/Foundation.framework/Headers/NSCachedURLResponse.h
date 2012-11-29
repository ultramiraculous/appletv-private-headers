/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying> {
	NSCachedURLResponseInternal *_internal;	// 4 = 0x4
}
- (id)initWithCoder:(id)coder;	// 0x34df9ecd
- (id)initWithResponse:(id)response data:(id)data;	// 0x34df9c51
- (id)initWithResponse:(id)response data:(id)data userInfo:(id)info storagePolicy:(unsigned)policy;	// 0x34df9c79
- (id)initWithResponse:(id)response dataArray:(id)array userInfo:(id)info storagePolicy:(unsigned)policy;	// 0x34df9dad
- (CFCachedURLResponseRef)_CFCachedURLResponse;	// 0x34d75a21
- (void)_deallocInternalCFCachedURLResponse;	// 0x34dfa2f9
- (id)_initWithCFCachedURLResponse:(CFCachedURLResponseRef)cfcachedURLResponse;	// 0x34d75919
- (void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponseRef)response;	// 0x34dfa339
- (id)copyWithZone:(NSZone *)zone;	// 0x34df9ebd
- (id)data;	// 0x34dfa1dd
- (id)dataArray;	// 0x34dfa28d
- (void)dealloc;	// 0x34d75a41
- (void)encodeWithCoder:(id)coder;	// 0x34dfa0f9
- (id)response;	// 0x34dfa1bd
- (unsigned)storagePolicy;	// 0x34dfa2d9
- (id)userInfo;	// 0x34dfa2b9
@end
