/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber, SSItemContentRating, NSArray, NSString;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
	NSNumber *_accountDSID;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
	NSString *_bundleShortVersionString;	// 16 = 0x10
	NSString *_bundleVersion;	// 20 = 0x14
	NSString *_containerPath;	// 24 = 0x18
	SSItemContentRating *_contentRating;	// 28 = 0x1c
	NSNumber *_itemIdentifier;	// 32 = 0x20
	NSString *_itemName;	// 36 = 0x24
	BOOL _profileValidated;	// 40 = 0x28
	NSString *_softwareType;	// 44 = 0x2c
	NSNumber *_storeFrontIdentifier;	// 48 = 0x30
	NSNumber *_versionIdentifier;	// 52 = 0x34
	NSArray *_versionOrdering;	// 56 = 0x38
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x3688df81; S=0x3688df91; @synthesize=_accountDSID
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x3688dfa1; S=0x3688dfb5; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x3688dfc5; S=0x3688dfd9; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleShortVersionString;	// G=0x3688dfe9; S=0x3688dffd; @synthesize=_bundleShortVersionString
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x3688e00d; S=0x3688e021; @synthesize=_bundleVersion
@property(copy, nonatomic) NSString *containerPath;	// G=0x3688e031; S=0x3688e045; @synthesize=_containerPath
@property(copy, nonatomic) SSItemContentRating *contentRating;	// G=0x3688e055; S=0x3688e069; @synthesize=_contentRating
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x3688e079; S=0x3688e089; @synthesize=_itemIdentifier
@property(copy, nonatomic) NSString *itemName;	// G=0x3688e099; S=0x3688e0ad; @synthesize=_itemName
@property(assign, nonatomic, getter=isProfileValidated) BOOL profileValidated;	// G=0x3688e0bd; S=0x3688e0cd; @synthesize=_profileValidated
@property(copy, nonatomic) NSString *softwareType;	// G=0x3688e0dd; S=0x3688e0f1; @synthesize=_softwareType
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x3688e101; S=0x3688e111; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x3688e121; S=0x3688e131; @synthesize=_versionIdentifier
@property(copy, nonatomic) NSArray *versionOrdering;	// G=0x3688e141; S=0x3688e155; @synthesize=_versionOrdering
+ (id)lookupAttributeKeys;	// 0x3688d5c1
- (id)initWithMobileInstallationDictionary:(id)mobileInstallationDictionary;	// 0x3688d161
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3688d809
- (void)_loadMetadataFromContainer:(id)container;	// 0x3688db11
// declared property getter: - (id)accountDSID;	// 0x3688df81
// declared property getter: - (id)accountIdentifier;	// 0x3688dfa1
// declared property getter: - (id)bundleIdentifier;	// 0x3688dfc5
// declared property getter: - (id)bundleShortVersionString;	// 0x3688dfe9
// declared property getter: - (id)bundleVersion;	// 0x3688e00d
// declared property getter: - (id)containerPath;	// 0x3688e031
// declared property getter: - (id)contentRating;	// 0x3688e055
- (id)copyXPCEncoding;	// 0x3688d649
- (void)dealloc;	// 0x3688d3dd
- (id)description;	// 0x3688d51d
// declared property getter: - (BOOL)isProfileValidated;	// 0x3688e0bd
// declared property getter: - (id)itemIdentifier;	// 0x3688e079
// declared property getter: - (id)itemName;	// 0x3688e099
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x3688df91
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3688dfb5
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3688dfd9
// declared property setter: - (void)setBundleShortVersionString:(id)string;	// 0x3688dffd
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x3688e021
// declared property setter: - (void)setContainerPath:(id)path;	// 0x3688e045
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3688e069
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3688e089
// declared property setter: - (void)setItemName:(id)name;	// 0x3688e0ad
// declared property setter: - (void)setProfileValidated:(BOOL)validated;	// 0x3688e0cd
// declared property setter: - (void)setSoftwareType:(id)type;	// 0x3688e0f1
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x3688e111
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x3688e131
// declared property setter: - (void)setVersionOrdering:(id)ordering;	// 0x3688e155
// declared property getter: - (id)softwareType;	// 0x3688e0dd
// declared property getter: - (id)storeFrontIdentifier;	// 0x3688e101
// declared property getter: - (id)versionIdentifier;	// 0x3688e121
// declared property getter: - (id)versionOrdering;	// 0x3688e141
@end
