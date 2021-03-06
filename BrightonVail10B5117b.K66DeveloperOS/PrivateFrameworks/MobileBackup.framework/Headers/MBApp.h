/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface MBApp : NSObject <NSCopying> {
	NSMutableDictionary *_plist;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x347a8f91; 
@property(readonly, assign, nonatomic) NSString *bundleVersion;	// G=0x347a8fbd; 
@property(retain, nonatomic) NSString *containerDir;	// G=0x347a8fe9; S=0x347a9011; 
@property(retain, nonatomic) NSDate *datePlacedInSafeHarbor;	// G=0x347a90f1; S=0x347a9119; 
@property(readonly, assign, nonatomic) NSDictionary *infoPlist;	// G=0x347a9d01; @synthesize=_plist
@property(readonly, assign, nonatomic) BOOL isPlaceholder;	// G=0x347a916d; 
@property(readonly, assign, nonatomic) BOOL isSystemApp;	// G=0x347a91a1; 
@property(readonly, assign, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;	// G=0x347a9141; 
@property(readonly, assign, nonatomic) NSString *safeHarborDir;	// G=0x347a9039; 
+ (id)appWithBundleID:(id)bundleID;	// 0x347a8cb5
+ (id)appWithPropertyList:(id)propertyList;	// 0x347a8d05
+ (id)safeHarborWithPath:(id)path;	// 0x347a8d4d
- (id)initWithPropertyList:(id)propertyList;	// 0x347a8dd1
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)cache;	// 0x347a944d
// declared property getter: - (id)bundleID;	// 0x347a8f91
// declared property getter: - (id)bundleVersion;	// 0x347a8fbd
// declared property getter: - (id)containerDir;	// 0x347a8fe9
- (id)copyWithZone:(NSZone *)zone;	// 0x347a8e25
// declared property getter: - (id)datePlacedInSafeHarbor;	// 0x347a90f1
- (void)dealloc;	// 0x347a8e8d
- (id)domain;	// 0x347a9341
- (unsigned)hash;	// 0x347a8f69
// declared property getter: - (id)infoPlist;	// 0x347a9d01
- (BOOL)isEqual:(id)equal;	// 0x347a8ed9
- (BOOL)isEqualToApp:(id)app;	// 0x347a8f31
// declared property getter: - (BOOL)isPlaceholder;	// 0x347a916d
// declared property getter: - (BOOL)isSafeHarbor;	// 0x347a9141
// declared property getter: - (BOOL)isSystemApp;	// 0x347a91a1
- (id)placeholderDomainWithCache:(id)cache;	// 0x347a9c65
- (id)propertyListForBackupProperties;	// 0x347a9215
- (id)propertyListForSafeHarborInfo;	// 0x347a915d
// declared property getter: - (id)safeHarborDir;	// 0x347a9039
// declared property setter: - (void)setContainerDir:(id)dir;	// 0x347a9011
// declared property setter: - (void)setDatePlacedInSafeHarbor:(id)safeHarbor;	// 0x347a9119
@end

