/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSProgressPublisher.h"

@class NSMutableSet, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
	id<NSProgressPublisher> _forwarder;	// 4 = 0x4
	id _publisherID;	// 8 = 0x8
	NSFileAccessNode *_itemLocation;	// 12 = 0xc
	NSMutableSet *_bundleIDsOfUnacknowledgedApps;	// 16 = 0x10
}
@property(readonly, retain) id publisherID;	// G=0x347a0955; converted property
- (id)initWithForwarder:(id)forwarder publisherID:(id)anId acknowledgementAppBundleIDs:(id)ids;	// 0x347a0841
- (oneway void)appWithBundleID:(id)bundleID didAcknowledgeWithSuccess:(BOOL)success;	// 0x347a0e45
- (void)broadcastValue:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x347a0cc1
- (oneway void)cancel;	// 0x347a0e05
- (void)dealloc;	// 0x347a08dd
- (id)description;	// 0x347a0f3d
- (id)descriptionWithIndenting:(id)indenting;	// 0x347a0e95
- (oneway void)pause;	// 0x347a0e25
// converted property getter: - (id)publisherID;	// 0x347a0955
- (void)setItemLocation:(id)location;	// 0x347a098d
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)initialAcceptor;	// 0x347a0dc5
- (oneway void)stopProvidingValues;	// 0x347a0de5
@end

