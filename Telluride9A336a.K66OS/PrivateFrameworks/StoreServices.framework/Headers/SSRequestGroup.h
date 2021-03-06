/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSString, NSArray;

@interface SSRequestGroup : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	NSMutableSet *_requests;	// 8 = 0x8
	Class _requestClass;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *groupIdentifier;	// G=0x341edd49; @synthesize=_identifier
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x341ed919; 
- (id)init;	// 0x341ed5ad
- (id)initWithGroupIdentifier:(id)groupIdentifier;	// 0x341ed5c1
- (id)initWithGroupIdentifier:(id)groupIdentifier requestClass:(Class)aClass;	// 0x341ed5d5
- (void)_daemonExited:(id)exited;	// 0x341ed9d5
- (void)_mainThreadDaemonExited:(id)exited;	// 0x341eda1d
- (void)_registerForDaemonNotifications;	// 0x341eda69
- (void)_reloadRequestsFromDaemon;	// 0x341edaed
- (void)_setGroupIdentifier:(id)identifier forRequestWithIdentifier:(id)identifier2;	// 0x341edc61
- (void)_unregisterForDaemonNotifications;	// 0x341edcfd
- (void)addRequest:(id)request;	// 0x341ed7d5
- (void)dealloc;	// 0x341ed72d
// declared property getter: - (id)groupIdentifier;	// 0x341edd49
- (void)removeRequest:(id)request;	// 0x341ed939
// declared property getter: - (id)requests;	// 0x341ed919
@end

