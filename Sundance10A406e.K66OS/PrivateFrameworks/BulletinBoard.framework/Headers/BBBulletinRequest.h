/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBBulletin.h"
#import "BulletinBoard-Structs.h"

@class NSString, BBAction, NSArray, NSSet, NSDate, NSTimeZone, BBSound, BBContent;

@interface BBBulletinRequest : BBBulletin {
	unsigned _expirationEvents;	// 140 = 0x8c
}
@property(assign, nonatomic) int accessoryStyle;	// @dynamic
@property(copy, nonatomic) BBAction *acknowledgeAction;	// @dynamic
@property(assign, nonatomic) int addressBookRecordID;	// @dynamic
@property(copy, nonatomic) NSSet *alertSuppressionContexts;	// @dynamic
@property(copy, nonatomic) BBAction *alternateAction;	// @dynamic
@property(copy, nonatomic) NSString *bulletinID;	// @dynamic
@property(copy, nonatomic) NSArray *buttons;	// @dynamic
@property(assign, nonatomic) BOOL clearable;	// @dynamic
@property(retain, nonatomic) NSDate *date;	// @dynamic
@property(assign, nonatomic) int dateFormatStyle;	// @dynamic
@property(assign, nonatomic) BOOL dateIsAllDay;	// @dynamic
@property(copy, nonatomic) BBAction *defaultAction;	// @dynamic
@property(retain, nonatomic) NSDate *endDate;	// @dynamic
@property(retain, nonatomic) NSDate *expirationDate;	// @dynamic
@property(assign, nonatomic) unsigned expirationEvents;	// G=0x32c2db85; S=0x32c2db95; @synthesize=_expirationEvents
@property(copy, nonatomic) BBAction *expireAction;	// @dynamic
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @dynamic
@property(copy, nonatomic) NSString *message;	// @dynamic
@property(retain, nonatomic) BBContent *modalAlertContent;	// @dynamic
@property(assign, nonatomic) int primaryAttachmentType;	// S=0x32c2d73d; @dynamic
@property(copy, nonatomic) NSString *publisherBulletinID;	// @dynamic
@property(assign, nonatomic) unsigned realertCount;	// G=0x32c2d935; S=0x32c2d945; 
@property(retain, nonatomic) NSDate *recencyDate;	// @dynamic
@property(copy, nonatomic) NSString *recordID;	// @dynamic
@property(copy, nonatomic) NSString *section;	// @dynamic
@property(copy, nonatomic) NSString *sectionID;	// @dynamic
@property(assign, nonatomic) int sectionSubtype;	// @dynamic
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// G=0x32c2db21; S=0x32c2dacd; 
@property(retain, nonatomic) BBSound *sound;	// @dynamic
@property(copy, nonatomic) NSSet *subsectionIDs;	// @dynamic
@property(copy, nonatomic) NSString *subtitle;	// @dynamic
@property(assign, nonatomic) BOOL tentative;	// G=0x32c2db6d; S=0x32c2db3d; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
- (void)addAlertSuppressionAppID:(id)anId;	// 0x32c2d955
- (void)addAttachmentOfType:(int)type;	// 0x32c2d76d
- (void)addButton:(id)button;	// 0x32c2d79d
// declared property getter: - (unsigned)expirationEvents;	// 0x32c2db85
- (void)generateBulletinID;	// 0x32c2dac9
- (void)generateNewBulletinID;	// 0x32c2dfed
- (BOOL)hasContentModificationsRelativeTo:(id)to;	// 0x32c2dba5
- (void)publish;	// 0x32c2d8fd
- (void)publish:(BOOL)publish;	// 0x32c2d8e9
- (id)publisherMatchID;	// 0x32c2dfb9
// declared property getter: - (unsigned)realertCount;	// 0x32c2d935
- (void)setContextValue:(id)value forKey:(id)key;	// 0x32c2d66d
// declared property setter: - (void)setExpirationEvents:(unsigned)events;	// 0x32c2db95
// declared property setter: - (void)setPrimaryAttachmentType:(int)type;	// 0x32c2d73d
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x32c2d945
// declared property setter: - (void)setShowsUnreadIndicator:(BOOL)indicator;	// 0x32c2dacd
// declared property setter: - (void)setTentative:(BOOL)tentative;	// 0x32c2db3d
- (void)setUnlockActionLabel:(id)label;	// 0x32c2d925
// declared property getter: - (BOOL)showsUnreadIndicator;	// 0x32c2db21
// declared property getter: - (BOOL)tentative;	// 0x32c2db6d
- (void)withdraw;	// 0x32c2d911
@end

