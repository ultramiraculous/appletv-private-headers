/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface XPCServiceRuntime : NSObject {
	NSDictionary *_entitlements;	// 4 = 0x4
}
+ (id)defaultRuntime;	// 0x311d8669
- (id)init;	// 0x311d8625
- (void)_initializeEntitlements;	// 0x311d8695
- (void)dealloc;	// 0x311d875d
- (id)entitlementForKey:(id)key;	// 0x311d8731
@end
