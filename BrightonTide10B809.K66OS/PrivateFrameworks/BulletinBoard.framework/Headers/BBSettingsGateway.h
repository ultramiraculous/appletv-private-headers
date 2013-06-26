/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "BBSettingsGatewayRemoteInterface.h"


@interface BBSettingsGateway : NSObject <BBSettingsGatewayRemoteInterface, XPCProxyTarget> {
	id _serverProxy;	// 4 = 0x4
	id _overrideStatusChangeHandler;	// 8 = 0x8
	id _activeOverrideTypesChangedHandler;	// 12 = 0xc
}
+ (void)initialize;	// 0x3356e49d
- (id)init;	// 0x3356e4a1
- (void)activeBehaviorOverrideTypesChanged:(unsigned)changed;	// 0x3356eddd
- (void)behaviorOverrideStatusChanged:(int)changed;	// 0x3356edc1
- (void)dealloc;	// 0x3356e619
- (void)getBehaviorOverridesEnabledWithCompletion:(id)completion;	// 0x3356edf9
- (void)getBehaviorOverridesWithCompletion:(id)completion;	// 0x3356e851
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)completion;	// 0x3356ea0d
- (void)getPrivilegedSenderTypesWithCompletion:(id)completion;	// 0x3356e925
- (void)getSectionInfoWithCompletion:(id)completion;	// 0x3356e6a1
- (void)getSectionOrderRuleWithCompletion:(id)completion;	// 0x3356e775
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3356ed75
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)handler;	// 0x3356ebf9
- (void)setBehaviorOverrideStatus:(int)status;	// 0x3356ecfd
- (void)setBehaviorOverrideStatusChangeHandler:(id)handler;	// 0x3356eb91
- (void)setBehaviorOverrides:(id)overrides;	// 0x3356ecd9
- (void)setBehaviorOverridesEnabled:(BOOL)enabled;	// 0x3356ee69
- (void)setOrderedSectionIDs:(id)ids;	// 0x3356ec85
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;	// 0x3356ed45
- (void)setPrivilegedSenderTypes:(unsigned)types;	// 0x3356ed21
- (void)setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x3356eca9
- (void)setSectionOrderRule:(unsigned)rule;	// 0x3356ec61
@end
