/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIURLResolver : NSObject {
}
+ (void)invalidate;	// 0x30e2ebb1
+ (id)sharedResolver;	// 0x30d475dd
+ (id)urlCacheChangedNotificationName;	// 0x30e2e931
+ (id)urlCacheName;	// 0x30e2e92d
- (id)init;	// 0x30e2ec75
- (id)initWithDictionary:(id)dictionary;	// 0x30d47b91
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x30e2ed15
- (BOOL)_url:(id)url matchesHostPatterns:(id)patterns pathPatterns:(id)patterns3;	// 0x30e2ee25
- (BOOL)_url:(id)url matchesHostWhitelist:(id)whitelist;	// 0x30e2eed9
- (void)dealloc;	// 0x30e2ecb1
@end

