/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebApplicationCache : NSObject {
}
+ (long long)defaultOriginQuota;	// 0x364a305d
+ (void)deleteAllApplicationCaches;	// 0x364a3511
+ (void)deleteCacheForOrigin:(id)origin;	// 0x364a34f1
+ (long long)diskUsageForOrigin:(id)origin;	// 0x364a3521
+ (void)initializeWithBundleIdentifier:(id)bundleIdentifier;	// 0x364a306d
+ (long long)maximumSize;	// 0x364a31bd
+ (id)originsWithCache;	// 0x364a3201
+ (void)setDefaultOriginQuota:(long long)quota;	// 0x3647c689
+ (void)setMaximumSize:(long long)size;	// 0x364a31cd
@end

