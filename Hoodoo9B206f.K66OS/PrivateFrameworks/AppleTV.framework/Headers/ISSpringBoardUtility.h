/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ISSpringBoardUtility : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSDictionary *_enabledRemoteNotificationTypes;	// 8 = 0x8
	NSMutableSet *_processAssertions;	// 12 = 0xc
}
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x36823f79; 
+ (id)sharedInstance;	// 0x36823eb5
- (id)init;	// 0x36823ded
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x36823f65
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x36823f69
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x36823f6d
- (void)dealloc;	// 0x36823e3d
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x36823f71
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x36823f79
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x36823f8d
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x36823f7d
- (void)resetEnabledRemoteNotificationTypes;	// 0x36823f81
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x36823f85
- (void)suspendFrontApplication;	// 0x36823f89
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x36823f91
@end
