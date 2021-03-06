/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebCache : NSObject {
}
+ (bool)addImageToCache:(CGImageRef)cache forURL:(id)url;	// 0x316a0605
+ (void)clearCachedCredentials;	// 0x316a0601
+ (void)empty;	// 0x31694c45
+ (void)emptyInMemoryResources;	// 0x3167e691
+ (void)initialize;	// 0x3167e68d
+ (BOOL)isDisabled;	// 0x316a0921
+ (void)removeImageFromCacheForURL:(id)url;	// 0x316a078d
+ (void)setDisabled:(BOOL)disabled;	// 0x316a08d5
+ (void)sizeOfDeadResources:(int *)deadResources;	// 0x316a05b5
+ (id)statistics;	// 0x316a0075
@end

