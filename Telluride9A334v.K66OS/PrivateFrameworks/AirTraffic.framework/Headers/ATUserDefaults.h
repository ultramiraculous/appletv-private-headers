/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {
	NSMutableDictionary *_defaults;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *diskUsageInfo;	// G=0x32275b39; S=0x32275add; 
@property(assign, nonatomic) BOOL hasCompletedDataMigration;	// G=0x32274f09; S=0x32275a79; 
+ (id)readOnlyDefaults;	// 0x32275ce9
- (id)init;	// 0x32275b61
- (void)_updateDefaults;	// 0x32274fad
- (id)allHosts;	// 0x32275a51
- (void)dealloc;	// 0x32275c9d
// declared property getter: - (id)diskUsageInfo;	// 0x32275b39
// declared property getter: - (BOOL)hasCompletedDataMigration;	// 0x32274f09
- (id)hostInfoForIdentifier:(id)identifier;	// 0x32275a15
- (void)removeHost:(id)host;	// 0x322759bd
// declared property setter: - (void)setDiskUsageInfo:(id)info;	// 0x32275add
// declared property setter: - (void)setHasCompletedDataMigration:(BOOL)migration;	// 0x32275a79
- (void)updateHostInfo:(id)info;	// 0x32275341
- (void)updateLastSyncWithHostLibrary:(id)hostLibrary;	// 0x322758d5
- (void)upgradeDefaults;	// 0x32275075
@end

