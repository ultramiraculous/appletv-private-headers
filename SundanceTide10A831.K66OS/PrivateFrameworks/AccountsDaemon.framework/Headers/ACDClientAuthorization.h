/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class NSSet, ACDClient, NSDictionary;

@interface ACDClientAuthorization : NSObject {
	BOOL _isGranted;	// 4 = 0x4
	NSSet *_grantedPermissions;	// 8 = 0x8
	ACDClient *_client;	// 12 = 0xc
	NSDictionary *_options;	// 16 = 0x10
}
@property(retain, nonatomic) ACDClient *client;	// G=0x314ecd41; S=0x314ecd51; @synthesize=_client
@property(retain, nonatomic) NSSet *grantedPermissions;	// G=0x314ecd09; S=0x314ecd19; @synthesize=_grantedPermissions
@property(assign, nonatomic) BOOL isGranted;	// G=0x314ecce9; S=0x314eccf9; @synthesize=_isGranted
@property(retain, nonatomic) NSDictionary *options;	// G=0x314ecd79; S=0x314ecd89; @synthesize=_options
- (id)initForClient:(id)client;	// 0x314ecc81
- (void).cxx_destruct;	// 0x314ecdb1
// declared property getter: - (id)client;	// 0x314ecd41
// declared property getter: - (id)grantedPermissions;	// 0x314ecd09
// declared property getter: - (BOOL)isGranted;	// 0x314ecce9
// declared property getter: - (id)options;	// 0x314ecd79
// declared property setter: - (void)setClient:(id)client;	// 0x314ecd51
// declared property setter: - (void)setGrantedPermissions:(id)permissions;	// 0x314ecd19
// declared property setter: - (void)setIsGranted:(BOOL)granted;	// 0x314eccf9
// declared property setter: - (void)setOptions:(id)options;	// 0x314ecd89
@end
