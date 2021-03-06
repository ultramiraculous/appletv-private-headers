/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenterObserver : NSObject {
	id _block;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id block;	// G=0x34e7eef1; @synthesize=_block
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;	// G=0x34e7ef01; @synthesize=_dispatchQueue
@property(readonly, assign, nonatomic) NSString *name;	// G=0x34e7ef11; @synthesize=_name
- (id)initWithName:(id)name queue:(id)queue block:(id)block;	// 0x34e7eded
// declared property getter: - (id)block;	// 0x34e7eef1
- (void)dealloc;	// 0x34e7ee7d
// declared property getter: - (id)dispatchQueue;	// 0x34e7ef01
// declared property getter: - (id)name;	// 0x34e7ef11
@end

