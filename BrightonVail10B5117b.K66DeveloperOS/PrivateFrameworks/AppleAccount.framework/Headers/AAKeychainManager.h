/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library


@interface AAKeychainManager : NSObject {
}
+ (void)initialize;	// 0x33624051
+ (id)passwordForServiceName:(id)serviceName username:(id)username accessGroup:(id)group;	// 0x33624099
+ (void)removePasswordForService:(id)service username:(id)username accessGroup:(id)group;	// 0x33624505
+ (void)setPassword:(id)password forServiceName:(id)serviceName username:(id)username accessGroup:(id)group;	// 0x33624241
@end

