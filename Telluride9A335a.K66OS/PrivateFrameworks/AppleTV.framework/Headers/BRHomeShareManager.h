/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@protocol BRHomeShareHandler;

@interface BRHomeShareManager : BRSingleton {
@private
	Class _homeShareHandlerClass;	// 4 = 0x4
	id<BRHomeShareHandler> _handlerInstance;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x342783a5
+ (id)singleton;	// 0x34278395
- (void)disableHomeSharing;	// 0x342784f9
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x342784c9
- (id)handler;	// 0x3427861d
- (BOOL)hasHomeShareAccount;	// 0x34278549
- (id)homeShareAccount;	// 0x34278571
- (id)homeSharingGroupIDIsEnabled:(id *)enabled;	// 0x3427849d
- (BOOL)isHomeSharingEnabled;	// 0x34278521
- (unsigned long long)machineIDForServer:(ATVDataServerRef)server;	// 0x342785f1
- (long)pairForHomeShareStreamingWithHost:(ATVDataServerRef)host;	// 0x34278599
- (unsigned long long)pairingGUIDForServer:(ATVDataServerRef)server;	// 0x342785c5
- (void)registerHandlerClass:(Class)aClass;	// 0x342783b5
@end

