/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import </libobjc.A.h>

@class BKSApplicationDataStoreRepositoryClient;
@protocol OS_dispatch_queue;

@interface BKSApplicationDataStoreClientFactory : NSObject {
	unsigned long long _count;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
	BKSApplicationDataStoreRepositoryClient *_sharedClient;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x301cafb5
- (id)init;	// 0x301caed9
- (void)checkin;	// 0x301cb345
- (id)checkout;	// 0x301cb025
- (void)dealloc;	// 0x301caf4d
@end
