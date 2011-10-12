/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	unsigned _sectionType;	// 8 = 0x8
	BOOL _showsInNotificationCenter;	// 12 = 0xc
	unsigned _pushSettings;	// 16 = 0x10
	unsigned _alertType;	// 20 = 0x14
	unsigned _notificationCenterLimit;	// 24 = 0x18
	BOOL _showsInLockScreen;	// 28 = 0x1c
	NSString *_pathToWeeAppPluginBundle;	// 32 = 0x20
}
@property(assign, nonatomic) unsigned alertType;	// G=0x30b36615; S=0x30b36625; @synthesize=_alertType
@property(assign, nonatomic) unsigned bulletinCount;	// G=0x30b360b1; S=0x30b360a1; 
@property(assign, nonatomic) BOOL enabled;	// G=0x30b36089; S=0x30b36079; 
@property(assign, nonatomic) unsigned notificationCenterLimit;	// G=0x30b365d5; S=0x30b365e5; @synthesize=_notificationCenterLimit
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle;	// G=0x30b36635; S=0x30b36645; @synthesize=_pathToWeeAppPluginBundle
@property(assign, nonatomic) unsigned pushSettings;	// G=0x30b365f5; S=0x30b36605; @synthesize=_pushSettings
@property(copy, nonatomic) NSString *sectionID;	// G=0x30b36541; S=0x30b36551; @synthesize=_sectionID
@property(assign, nonatomic) unsigned sectionType;	// G=0x30b36575; S=0x30b36585; @synthesize=_sectionType
@property(assign, nonatomic) BOOL showsInLockScreen;	// G=0x30b365b5; S=0x30b365c5; @synthesize=_showsInLockScreen
@property(assign, nonatomic) BOOL showsInNotificationCenter;	// G=0x30b36595; S=0x30b365a5; @synthesize=_showsInNotificationCenter
+ (id)defaultSectionInfoForType:(unsigned)type;	// 0x30b35d21
- (id)initWithCoder:(id)coder;	// 0x30b36235
- (id)_pushSettingsDescription;	// 0x30b35e45
// declared property getter: - (unsigned)alertType;	// 0x30b36615
// declared property getter: - (unsigned)bulletinCount;	// 0x30b360b1
- (id)copyWithZone:(NSZone *)zone;	// 0x30b360c1
- (void)dealloc;	// 0x30b35de5
- (id)description;	// 0x30b35f1d
- (id)effectiveSectionInfo;	// 0x30b36669
// declared property getter: - (BOOL)enabled;	// 0x30b36089
- (void)encodeWithCoder:(id)coder;	// 0x30b363d1
// declared property getter: - (unsigned)notificationCenterLimit;	// 0x30b365d5
// declared property getter: - (id)pathToWeeAppPluginBundle;	// 0x30b36635
// declared property getter: - (unsigned)pushSettings;	// 0x30b365f5
// declared property getter: - (id)sectionID;	// 0x30b36541
// declared property getter: - (unsigned)sectionType;	// 0x30b36575
// declared property setter: - (void)setAlertType:(unsigned)type;	// 0x30b36625
// declared property setter: - (void)setBulletinCount:(unsigned)count;	// 0x30b360a1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30b36079
// declared property setter: - (void)setNotificationCenterLimit:(unsigned)limit;	// 0x30b365e5
// declared property setter: - (void)setPathToWeeAppPluginBundle:(id)weeAppPluginBundle;	// 0x30b36645
// declared property setter: - (void)setPushSettings:(unsigned)settings;	// 0x30b36605
// declared property setter: - (void)setSectionID:(id)anId;	// 0x30b36551
// declared property setter: - (void)setSectionType:(unsigned)type;	// 0x30b36585
// declared property setter: - (void)setShowsInLockScreen:(BOOL)lockScreen;	// 0x30b365c5
// declared property setter: - (void)setShowsInNotificationCenter:(BOOL)notificationCenter;	// 0x30b365a5
// declared property getter: - (BOOL)showsInLockScreen;	// 0x30b365b5
// declared property getter: - (BOOL)showsInNotificationCenter;	// 0x30b36595
@end

