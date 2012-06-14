/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x30bc73b5
+ (void)flush;	// 0x30bc6e39
+ (void)initialize;	// 0x30bc6c99
+ (unsigned)memoryLimit;	// 0x30bc6e05
+ (void)removeSignature:(id)signature;	// 0x30bc71e9
+ (void)setMemoryLimit:(unsigned)limit;	// 0x30bc6d45
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x30bc6f3d
+ (id)symbolOwnerForSignature:(id)signature;	// 0x30bc76dd
+ (id)symbolOwners;	// 0x30bc70c1
@end
