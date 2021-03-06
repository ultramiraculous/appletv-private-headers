/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSString, NSSet, NSDictionary;

@interface MBDomain : NSObject {
	NSString *_rootPath;	// 4 = 0x4
	NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;	// 8 = 0x8
	BOOL _shouldDigest;	// 12 = 0xc
	NSSet *_relativePathsNotToRestoreToIPods;	// 16 = 0x10
	NSSet *_relativePathsNotToBackupAndRestoreToAppleTVs;	// 20 = 0x14
	NSSet *_relativePathsToRestoreOnly;	// 24 = 0x18
	NSSet *_relativePathsToBackgroundRestore;	// 28 = 0x1c
	NSSet *_relativePathsToRemoveOnRestore;	// 32 = 0x20
	NSSet *_relativePathsNotToBackup;	// 36 = 0x24
	NSSet *_relativePathsToBackupAndRestore;	// 40 = 0x28
	NSSet *_relativePathsNotToRemoveIfNotRestored;	// 44 = 0x2c
	NSSet *_relativePathsOfSystemFilesToAlwaysRestore;	// 48 = 0x30
	NSDictionary *_relativePathAggregateDictionaryGroups;	// 52 = 0x34
	NSSet *_relativePathsNotToBackupToDrive;	// 56 = 0x38
	NSString *_name;	// 60 = 0x3c
	NSSet *_relativePathsNotToRestore;	// 64 = 0x40
	NSSet *_relativePathsNotToBackupToService;	// 68 = 0x44
	NSSet *_relativePathsNotToMigrate;	// 72 = 0x48
	NSDictionary *_relativePathDomainRedirects;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic, getter=isAppDomain) BOOL appDomain;	// G=0x345cb705; 
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x345cb7a9; 
@property(readonly, assign, nonatomic, getter=isUninstalledAppDomain) BOOL installedAppDomain;	// G=0x345cb76d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x345cba25; @synthesize=_name
@property(readonly, assign, nonatomic, getter=isPlaceholderAppDomain) BOOL placeholderAppDomain;	// G=0x345cb739; 
@property(retain, nonatomic) NSDictionary *relativePathAggregateDictionaryGroups;	// G=0x345cb9e5; S=0x345cb9f5; @synthesize=_relativePathAggregateDictionaryGroups
@property(retain, nonatomic) NSDictionary *relativePathDomainRedirects;	// G=0x345cba95; S=0x345cbaa5; @synthesize=_relativePathDomainRedirects
@property(retain, nonatomic) NSSet *relativePathsNotToBackup;	// G=0x345cb965; S=0x345cb975; @synthesize=_relativePathsNotToBackup
@property(retain, nonatomic) NSSet *relativePathsNotToBackupAndRestoreToAppleTVs;	// G=0x345cb8e5; S=0x345cb8f5; @synthesize=_relativePathsNotToBackupAndRestoreToAppleTVs
@property(retain, nonatomic) NSSet *relativePathsNotToBackupToDrive;	// G=0x345cba05; S=0x345cba15; @synthesize=_relativePathsNotToBackupToDrive
@property(retain, nonatomic) NSSet *relativePathsNotToBackupToService;	// G=0x345cba55; S=0x345cba65; @synthesize=_relativePathsNotToBackupToService
@property(retain, nonatomic) NSSet *relativePathsNotToCheckIfModifiedDuringBackup;	// G=0x345cb885; S=0x345cb895; @synthesize=_relativePathsNotToCheckIfModifiedDuringBackup
@property(retain, nonatomic) NSSet *relativePathsNotToMigrate;	// G=0x345cba75; S=0x345cba85; @synthesize=_relativePathsNotToMigrate
@property(retain, nonatomic) NSSet *relativePathsNotToRemoveIfNotRestored;	// G=0x345cb9a5; S=0x345cb9b5; @synthesize=_relativePathsNotToRemoveIfNotRestored
@property(retain, nonatomic) NSSet *relativePathsNotToRestore;	// G=0x345cba35; S=0x345cba45; @synthesize=_relativePathsNotToRestore
@property(retain, nonatomic) NSSet *relativePathsNotToRestoreToIPods;	// G=0x345cb8c5; S=0x345cb8d5; @synthesize=_relativePathsNotToRestoreToIPods
@property(retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRestore;	// G=0x345cb9c5; S=0x345cb9d5; @synthesize=_relativePathsOfSystemFilesToAlwaysRestore
@property(retain, nonatomic) NSSet *relativePathsToBackgroundRestore;	// G=0x345cb925; S=0x345cb935; @synthesize=_relativePathsToBackgroundRestore
@property(readonly, assign, nonatomic) NSSet *relativePathsToBackup;	// G=0x345cb6c9; 
@property(retain, nonatomic) NSSet *relativePathsToBackupAndRestore;	// G=0x345cb985; S=0x345cb995; @synthesize=_relativePathsToBackupAndRestore
@property(retain, nonatomic) NSSet *relativePathsToRemoveOnRestore;	// G=0x345cb945; S=0x345cb955; @synthesize=_relativePathsToRemoveOnRestore
@property(readonly, assign, nonatomic) NSSet *relativePathsToRestore;	// G=0x345cb6d9; 
@property(retain, nonatomic) NSSet *relativePathsToRestoreOnly;	// G=0x345cb905; S=0x345cb915; @synthesize=_relativePathsToRestoreOnly
@property(readonly, assign, nonatomic) NSString *rootPath;	// G=0x345cb7d5; @synthesize=_rootPath
@property(assign, nonatomic) BOOL shouldDigest;	// G=0x345cb8a5; S=0x345cb8b5; @synthesize=_shouldDigest
+ (BOOL)_boolFromValue:(id)value forKey:(id)key;	// 0x345c9bf5
+ (id)_dictionaryOfStringsToStringFromValue:(id)value forKey:(id)key;	// 0x345c9f2d
+ (double)_doubleFromStringValueForKey:(id)key plist:(id)plist;	// 0x345ca141
+ (void)_loadSystemDomains;	// 0x345ca345
+ (id)_relativePathsByAddingSQLiteJournals:(id)journals;	// 0x345ca191
+ (id)_setOfStringsFromValue:(id)value forKey:(id)key;	// 0x345c9d95
+ (id)_stringByRemovingCommentsFromValue:(id)value forKey:(id)key;	// 0x345c9c9d
+ (id)appDomainWithBundleID:(id)bundleID rootPath:(id)path;	// 0x345ca93d
+ (id)appPlaceholderDomainWithBundleID:(id)bundleID rootPath:(id)path;	// 0x345ca9a1
+ (id)bundleIDWithName:(id)name;	// 0x345ca815
+ (id)domainWithName:(id)name rootPath:(id)path;	// 0x345ca8d9
+ (BOOL)isAppName:(id)name;	// 0x345ca7cd
+ (BOOL)isAppPlaceholderName:(id)name;	// 0x345ca7f1
+ (id)nameWithAppBundleID:(id)appBundleID;	// 0x345ca899
+ (id)systemDomains;	// 0x345ca70d
+ (id)systemDomainsByName;	// 0x345ca731
+ (double)systemDomainsMaxSupportedVersion;	// 0x345ca7a5
+ (double)systemDomainsMinSupportedVersion;	// 0x345ca755
+ (double)systemDomainsVersion;	// 0x345ca77d
+ (id)uninstalledAppDomainWithBundleID:(id)bundleID;	// 0x345caa05
- (id)initWithName:(id)name plist:(id)plist;	// 0x345cab6d
- (id)initWithName:(id)name rootPath:(id)path;	// 0x345caa65
// declared property getter: - (id)bundleID;	// 0x345cb7a9
- (int)compare:(id)compare;	// 0x345cb631
- (void)dealloc;	// 0x345cb415
- (id)description;	// 0x345cb6b9
- (unsigned)hash;	// 0x345cb699
// declared property getter: - (BOOL)isAppDomain;	// 0x345cb705
- (BOOL)isEqual:(id)equal;	// 0x345cb5a5
- (BOOL)isEqualToDomain:(id)domain;	// 0x345cb609
// declared property getter: - (BOOL)isPlaceholderAppDomain;	// 0x345cb739
// declared property getter: - (BOOL)isUninstalledAppDomain;	// 0x345cb76d
// declared property getter: - (id)name;	// 0x345cba25
// declared property getter: - (id)relativePathAggregateDictionaryGroups;	// 0x345cb9e5
// declared property getter: - (id)relativePathDomainRedirects;	// 0x345cba95
// declared property getter: - (id)relativePathsNotToBackup;	// 0x345cb965
// declared property getter: - (id)relativePathsNotToBackupAndRestoreToAppleTVs;	// 0x345cb8e5
// declared property getter: - (id)relativePathsNotToBackupToDrive;	// 0x345cba05
// declared property getter: - (id)relativePathsNotToBackupToService;	// 0x345cba55
// declared property getter: - (id)relativePathsNotToCheckIfModifiedDuringBackup;	// 0x345cb885
// declared property getter: - (id)relativePathsNotToMigrate;	// 0x345cba75
// declared property getter: - (id)relativePathsNotToRemoveIfNotRestored;	// 0x345cb9a5
// declared property getter: - (id)relativePathsNotToRestore;	// 0x345cba35
// declared property getter: - (id)relativePathsNotToRestoreToIPods;	// 0x345cb8c5
// declared property getter: - (id)relativePathsOfSystemFilesToAlwaysRestore;	// 0x345cb9c5
// declared property getter: - (id)relativePathsToBackgroundRestore;	// 0x345cb925
// declared property getter: - (id)relativePathsToBackup;	// 0x345cb6c9
// declared property getter: - (id)relativePathsToBackupAndRestore;	// 0x345cb985
// declared property getter: - (id)relativePathsToRemoveOnRestore;	// 0x345cb945
// declared property getter: - (id)relativePathsToRestore;	// 0x345cb6d9
// declared property getter: - (id)relativePathsToRestoreOnly;	// 0x345cb905
// declared property getter: - (id)rootPath;	// 0x345cb7d5
// declared property setter: - (void)setRelativePathAggregateDictionaryGroups:(id)groups;	// 0x345cb9f5
// declared property setter: - (void)setRelativePathDomainRedirects:(id)redirects;	// 0x345cbaa5
// declared property setter: - (void)setRelativePathsNotToBackup:(id)backup;	// 0x345cb975
// declared property setter: - (void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(id)appleTVs;	// 0x345cb8f5
// declared property setter: - (void)setRelativePathsNotToBackupToDrive:(id)drive;	// 0x345cba15
// declared property setter: - (void)setRelativePathsNotToBackupToService:(id)service;	// 0x345cba65
// declared property setter: - (void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)checkIfModifiedDuringBackup;	// 0x345cb895
// declared property setter: - (void)setRelativePathsNotToMigrate:(id)migrate;	// 0x345cba85
// declared property setter: - (void)setRelativePathsNotToRemoveIfNotRestored:(id)removeIfNotRestored;	// 0x345cb9b5
// declared property setter: - (void)setRelativePathsNotToRestore:(id)restore;	// 0x345cba45
// declared property setter: - (void)setRelativePathsNotToRestoreToIPods:(id)ipods;	// 0x345cb8d5
// declared property setter: - (void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)alwaysRestore;	// 0x345cb9d5
// declared property setter: - (void)setRelativePathsToBackgroundRestore:(id)backgroundRestore;	// 0x345cb935
// declared property setter: - (void)setRelativePathsToBackupAndRestore:(id)backupAndRestore;	// 0x345cb995
// declared property setter: - (void)setRelativePathsToRemoveOnRestore:(id)removeOnRestore;	// 0x345cb955
// declared property setter: - (void)setRelativePathsToRestoreOnly:(id)restoreOnly;	// 0x345cb915
// declared property setter: - (void)setShouldDigest:(BOOL)digest;	// 0x345cb8b5
// declared property getter: - (BOOL)shouldDigest;	// 0x345cb8a5
@end

