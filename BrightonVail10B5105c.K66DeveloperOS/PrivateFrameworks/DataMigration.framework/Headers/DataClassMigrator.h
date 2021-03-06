/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface DataClassMigrator : NSObject {
	NSDictionary *_context;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *context;	// G=0x30644f69; S=0x30644f79; @synthesize=_context
@property(readonly, assign, nonatomic) BOOL didMigrateBackupFromDifferentDevice;	// G=0x30644e51; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromBackup;	// G=0x30644e11; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromCloudBackup;	// G=0x30644e91; 
@property(readonly, assign, nonatomic) BOOL shouldPreserveSettingsAfterRestore;	// G=0x30644ed1; 
@property(readonly, assign, nonatomic) BOOL wasPasscodeSetInBackup;	// G=0x30644f11; 
// declared property getter: - (id)context;	// 0x30644f69
- (id)dataClassName;	// 0x30644f51
- (void)dealloc;	// 0x30644dc5
// declared property getter: - (BOOL)didMigrateBackupFromDifferentDevice;	// 0x30644e51
// declared property getter: - (BOOL)didRestoreFromBackup;	// 0x30644e11
// declared property getter: - (BOOL)didRestoreFromCloudBackup;	// 0x30644e91
- (float)estimatedDuration;	// 0x30644f59
- (float)migrationProgress;	// 0x30644f61
- (BOOL)performMigration;	// 0x30644f55
// declared property setter: - (void)setContext:(id)context;	// 0x30644f79
// declared property getter: - (BOOL)shouldPreserveSettingsAfterRestore;	// 0x30644ed1
// declared property getter: - (BOOL)wasPasscodeSetInBackup;	// 0x30644f11
@end

