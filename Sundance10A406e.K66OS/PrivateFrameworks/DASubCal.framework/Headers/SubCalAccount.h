/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DAAccount.h> // Unknown library

@class DATaskManager, NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {
	DATaskManager *_taskManager;	// 60 = 0x3c
	NSData *_tmpICSData;	// 64 = 0x40
}
@property(retain, nonatomic) NSDictionary *externalRepresentation;	// G=0x3063eb11; S=0x3063eb2d; 
@property(retain) id host;	// G=0x3063e879; S=0x3063e895; converted property
@property(assign) int port;	// G=0x3063eb49; S=0x3063eb65; converted property
@property(assign) BOOL shouldRemoveAlarms;	// G=0x3063ebbd; S=0x3063ebdd; 
@property(assign) int subCalAccountVersion;	// G=0x3063e769; S=0x3063e79d; 
@property(readonly, assign, nonatomic) NSURL *subscriptionURL;	// G=0x3063da8d; 
@property(retain, nonatomic) NSString *syncId;	// G=0x3063ead9; S=0x3063eaf5; 
@property(readonly, retain) DATaskManager *taskManager;	// G=0x3063db09; converted property
@property(retain) NSData *tmpICSData;	// G=0x3063de61; S=0x3063dddd; converted property
@property(assign) BOOL useSSL;	// G=0x3063eb81; S=0x3063eba1; converted property
@property(retain) id username;	// G=0x3063e7e1; S=0x3063e7fd; converted property
+ (Class)accountClass;	// 0x3063d8ed
+ (Class)clientClass;	// 0x3063d909
+ (id)defaultProperties;	// 0x3063d925
+ (id)supportedDataclasses;	// 0x3063da61
- (void)_checkValidityWithConsumer:(id)consumer quickValidate:(BOOL)validate;	// 0x3063db59
- (id)_oldURLsForKeychain;	// 0x3063dfe9
- (id)_tmpICSCalendarPath;	// 0x3063dd9d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3063e131
- (BOOL)accountNeedsUpgrade;	// 0x3063e66d
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3063dca9
- (void)clearTmpICSData;	// 0x3063df19
- (void)dealloc;	// 0x3063d879
// declared property getter: - (id)externalRepresentation;	// 0x3063eb11
- (void)handleTrustChallenge:(id)challenge forTask:(id)task;	// 0x3063ef09
- (BOOL)hasSubscribedCalendarAtURL:(id)url;	// 0x3063eedd
// converted property getter: - (id)host;	// 0x3063e879
- (BOOL)isEqualToAccount:(id)account;	// 0x3063ec49
- (id)localizedIdenticalAccountFailureMessage;	// 0x3063edb5
- (id)localizedInvalidPasswordMessage;	// 0x3063ee2d
// converted property getter: - (int)port;	// 0x3063eb49
- (void)quickValidate:(id)validate;	// 0x3063dcbd
- (void)refreshAllCalendars;	// 0x3063ec45
- (void)saveTmpICSData;	// 0x3063de21
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x3063eb2d
// converted property setter: - (void)setHost:(id)host;	// 0x3063e895
// converted property setter: - (void)setPort:(int)port;	// 0x3063eb65
// declared property setter: - (void)setShouldRemoveAlarms:(BOOL)removeAlarms;	// 0x3063ebdd
// declared property setter: - (void)setSubCalAccountVersion:(int)version;	// 0x3063e79d
// declared property setter: - (void)setSyncId:(id)anId;	// 0x3063eaf5
// converted property setter: - (void)setTmpICSData:(id)data;	// 0x3063dddd
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3063eba1
// converted property setter: - (void)setUsername:(id)username;	// 0x3063e7fd
// declared property getter: - (BOOL)shouldRemoveAlarms;	// 0x3063ebbd
// declared property getter: - (int)subCalAccountVersion;	// 0x3063e769
- (void)subCalValidationTask:(id)task finishedWithError:(id)error calendarName:(id)name calendarData:(id)data;	// 0x3063dcd1
// declared property getter: - (id)subscriptionURL;	// 0x3063da8d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3063da81
// declared property getter: - (id)syncId;	// 0x3063ead9
// converted property getter: - (id)taskManager;	// 0x3063db09
// converted property getter: - (id)tmpICSData;	// 0x3063de61
- (BOOL)upgradeAccount;	// 0x3063e5e5
// converted property getter: - (BOOL)useSSL;	// 0x3063eb81
// converted property getter: - (id)username;	// 0x3063e7e1
@end

