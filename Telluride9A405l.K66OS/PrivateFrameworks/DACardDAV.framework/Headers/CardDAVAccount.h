/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import <DAAccount.h> // Unknown library
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 68 = 0x44
	DACoreDAVLogger *_curLogger;	// 72 = 0x48
}
@property(assign) int cardDAVAccountVersion;	// G=0x332c277d; S=0x332c2799; 
@property(retain) id host;	// G=0x332c25e5; S=0x332c2601; converted property
@property(assign) int port;	// G=0x332c267d; S=0x332c2699; converted property
@property(retain) id principalURL;	// G=0x332c23cd; S=0x332c2341; converted property
@property(retain) id scheme;	// G=0x332c26b5; S=0x332c26d1; converted property
@property(retain) id serverComplianceClasses;	// G=0x332c2ad9; S=0x332c2add; converted property
@property(retain) id serverRoot;	// G=0x332c2775; S=0x332c2779; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x332c1d89; converted property
@property(assign) BOOL useSSL;	// G=0x332c26ed; S=0x332c270d; converted property
@property(retain) id username;	// G=0x332c254d; S=0x332c2569; converted property
+ (Class)accountClass;	// 0x332c18e1
+ (id)addressBookConstraintsPlistPath;	// 0x332c2ad1
+ (Class)clientClass;	// 0x332c18fd
+ (id)defaultProperties;	// 0x332c15bd
+ (id)supportedDataclasses;	// 0x332c1919
- (id)init;	// 0x332c1721
- (id)initWithProperties:(id)properties;	// 0x332c1761
- (void)_massageAddedOrModifiedVCard:(id)card;	// 0x332c2ad5
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x332c1e45
- (id)_oldURLsForKeychain;	// 0x332c1e51
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x332c1f79
- (BOOL)accountNeedsUpgrade;	// 0x332c224d
// declared property getter: - (int)cardDAVAccountVersion;	// 0x332c277d
- (void)checkValidityWithConsumer:(id)consumer;	// 0x332c1995
- (id)copyImageContentsAtURL:(id)url outError:(id *)error;	// 0x332c24c1
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x332c2c0d
- (int)coreDAVLogLevel;	// 0x332c2bed
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x332c2c5d
- (int)coreDAVOutputLevel;	// 0x332c2c05
- (void)coreDAVTransmittedDataFinished;	// 0x332c2c7d
- (void)dealloc;	// 0x332c1835
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x332c1c05
- (BOOL)handleCertificateError:(id)error;	// 0x332c2be9
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x332c2bb9
// converted property getter: - (id)host;	// 0x332c25e5
- (BOOL)isEqualToAccount:(id)account;	// 0x332c27b5
- (id)localizedIdenticalAccountFailureMessage;	// 0x332c29a9
- (id)localizedInvalidPasswordMessage;	// 0x332c2a21
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x332c2415
// converted property getter: - (int)port;	// 0x332c267d
// converted property getter: - (id)principalURL;	// 0x332c23cd
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x332c2b25
// converted property getter: - (id)scheme;	// 0x332c26b5
// converted property getter: - (id)serverComplianceClasses;	// 0x332c2ad9
// converted property getter: - (id)serverRoot;	// 0x332c2775
// declared property setter: - (void)setCardDAVAccountVersion:(int)version;	// 0x332c2799
// converted property setter: - (void)setHost:(id)host;	// 0x332c2601
// converted property setter: - (void)setPort:(int)port;	// 0x332c2699
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x332c2341
// converted property setter: - (void)setScheme:(id)scheme;	// 0x332c26d1
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x332c2add
// converted property setter: - (void)setServerRoot:(id)root;	// 0x332c2779
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x332c1bc1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x332c270d
// converted property setter: - (void)setUsername:(id)username;	// 0x332c2569
- (BOOL)shouldLogTransmittedData;	// 0x332c2c51
- (id)spinnerIdentifiers;	// 0x332c2ae5
- (id)stateString;	// 0x332c1ddd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x332c1939
// converted property getter: - (id)taskManager;	// 0x332c1d89
- (BOOL)upgradeAccount;	// 0x332c21c5
// converted property getter: - (BOOL)useSSL;	// 0x332c26ed
- (id)userAgentHeader;	// 0x332c2ae1
// converted property getter: - (id)username;	// 0x332c254d
- (id)wellKnownPathsToCheck;	// 0x332c1949
@end

