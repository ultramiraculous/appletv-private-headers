/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRLogManager : NSObject {
}
+ (void)initialize;	// 0x3036c43d
+ (BOOL)isClassNameRegistered:(id)registered;	// 0x3036c4fd
+ (BOOL)isClassRegistered:(Class)registered;	// 0x3036c4d9
+ (void)logMessage:(id)message fromSource:(id)source args:(void *)args;	// 0x3036c565
+ (void)registerClass:(Class)aClass;	// 0x3036c4b9
+ (void)registerClassWithName:(id)name;	// 0x3036c521
+ (void)resetRegisteredClasses;	// 0x3036c4a9
+ (void)unregisterClass:(Class)aClass;	// 0x3036c545
@end

