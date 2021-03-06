/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface UIWebFormPasswordsEditor : NSObject {
	NSDictionary *_credentialsByProtectionSpace;	// 4 = 0x4
	NSMutableArray *_flattenedCredentials;	// 8 = 0x8
	NSMutableDictionary *_credentialToProtectionSpaceMap;	// 12 = 0xc
	BOOL _ignoreNotifications;	// 16 = 0x10
}
+ (id)sharedPasswordsEditor;	// 0x32db9491
- (id)addressStringForCredential:(id)credential;	// 0x32db8f7d
- (void)credentialsChanged:(id)changed;	// 0x32db92fd
- (void)dealloc;	// 0x32db94e5
- (id)protectionSpaceForCredential:(id)credential;	// 0x32db8f5d
- (void)removeAll;	// 0x32db961d
- (void)removeSelectedItems:(id)items;	// 0x32db9525
- (void)resetCredentials;	// 0x32db905d
- (void)startMonitoringCredentials;	// 0x32db9321
- (void)stopMonitoringCredentials;	// 0x32db93c1
@end

