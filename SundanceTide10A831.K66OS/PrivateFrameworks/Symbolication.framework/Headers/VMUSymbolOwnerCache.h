/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x379c4125
+ (void)flush;	// 0x379c48ed
+ (void)initialize;	// 0x379c3de1
+ (unsigned)memoryLimit;	// 0x379c49ed
+ (void)removeSignature:(id)signature;	// 0x379c4441
+ (void)setMemoryLimit:(unsigned)limit;	// 0x379c4a15
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x379c4759
+ (id)symbolOwnerForSignature:(id)signature;	// 0x379c3e8d
+ (id)symbolOwners;	// 0x379c4615
@end

