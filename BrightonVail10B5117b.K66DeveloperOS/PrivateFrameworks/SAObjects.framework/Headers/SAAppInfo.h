/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSDictionary, NSArray;

@interface SAAppInfo : SADomainObject {
}
@property(copy, nonatomic) NSString *appId;	// G=0x355c7c71; S=0x355c7c8d; 
@property(copy, nonatomic) NSString *appName;	// G=0x355c7cdd; S=0x355c7cf9; 
@property(copy, nonatomic) NSDictionary *appNameMap;	// G=0x355c7d49; S=0x355c7d65; 
@property(copy, nonatomic) NSString *appVersion;	// G=0x355c7db5; S=0x355c7dd1; 
@property(copy, nonatomic) NSString *displayAppName;	// G=0x355c7e21; S=0x355c7e3d; 
@property(copy, nonatomic) NSDictionary *displayAppNameMap;	// G=0x355c7e8d; S=0x355c7ea9; 
@property(copy, nonatomic) NSString *providerName;	// G=0x355c7ef9; S=0x355c7f15; 
@property(copy, nonatomic) NSString *spotlightName;	// G=0x355c7f65; S=0x355c7f81; 
@property(copy, nonatomic) NSDictionary *spotlightNameMap;	// G=0x355c7fd1; S=0x355c7fed; 
@property(copy, nonatomic) NSArray *supportedCommands;	// G=0x355c803d; S=0x355c80b9; 
@property(copy, nonatomic) NSArray *supportedSchemes;	// G=0x355c8121; S=0x355c813d; 
+ (id)appInfo;	// 0x355c7be1
+ (id)appInfoWithDictionary:(id)dictionary context:(id)context;	// 0x355c7c25
// declared property getter: - (id)appId;	// 0x355c7c71
// declared property getter: - (id)appName;	// 0x355c7cdd
// declared property getter: - (id)appNameMap;	// 0x355c7d49
// declared property getter: - (id)appVersion;	// 0x355c7db5
// declared property getter: - (id)displayAppName;	// 0x355c7e21
// declared property getter: - (id)displayAppNameMap;	// 0x355c7e8d
- (id)encodedClassName;	// 0x355c7bd5
- (id)groupIdentifier;	// 0x355c7bc5
// declared property getter: - (id)providerName;	// 0x355c7ef9
// declared property setter: - (void)setAppId:(id)anId;	// 0x355c7c8d
// declared property setter: - (void)setAppName:(id)name;	// 0x355c7cf9
// declared property setter: - (void)setAppNameMap:(id)map;	// 0x355c7d65
// declared property setter: - (void)setAppVersion:(id)version;	// 0x355c7dd1
// declared property setter: - (void)setDisplayAppName:(id)name;	// 0x355c7e3d
// declared property setter: - (void)setDisplayAppNameMap:(id)map;	// 0x355c7ea9
// declared property setter: - (void)setProviderName:(id)name;	// 0x355c7f15
// declared property setter: - (void)setSpotlightName:(id)name;	// 0x355c7f81
// declared property setter: - (void)setSpotlightNameMap:(id)map;	// 0x355c7fed
// declared property setter: - (void)setSupportedCommands:(id)commands;	// 0x355c80b9
// declared property setter: - (void)setSupportedSchemes:(id)schemes;	// 0x355c813d
// declared property getter: - (id)spotlightName;	// 0x355c7f65
// declared property getter: - (id)spotlightNameMap;	// 0x355c7fd1
// declared property getter: - (id)supportedCommands;	// 0x355c803d
// declared property getter: - (id)supportedSchemes;	// 0x355c8121
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355c818d
@end

