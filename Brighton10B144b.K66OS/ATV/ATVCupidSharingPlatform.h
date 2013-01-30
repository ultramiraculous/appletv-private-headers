/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSASPlatform.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVCupidSharingPlatform : XXUnknownSuperclass <MSASPlatform> {
}
- (BOOL)MSASIsAllowedToTransferMetadata;	// 0x110a2d
- (BOOL)MSASIsAllowedToUploadAssets;	// 0x110a31
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)downloadAssets;	// 0x110a35
- (id)albumSharingDaemon;	// 0x110669
- (id)baseSharingURLForPersonID:(id)personID;	// 0x1106e9
- (void)logLevel:(int)level personID:(id)anId albumGUID:(id)guid format:(id)format;	// 0x1105f1
- (id)pathAlbumSharingDir;	// 0x1106d5
- (BOOL)personIDUsesProductionPushEnvironment:(id)environment;	// 0x11083d
- (id)personIDsEnabledForAlbumSharing;	// 0x110991
- (Class)pluginClass;	// 0x1106d9
- (id)pushTokenForPersonID:(id)personID;	// 0x110939
- (BOOL)shouldLogAtLevel:(int)level;	// 0x1105ed
@end
