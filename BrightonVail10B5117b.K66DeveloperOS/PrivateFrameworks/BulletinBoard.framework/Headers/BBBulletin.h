/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableArray, NSData, BBAction, BBSound, BBAttachments, NSString, NSArray, NSSet, NSDate, BBContent, NSTimeZone, NSMutableDictionary, BBObserver;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	NSSet *_subsectionIDs;	// 8 = 0x8
	NSString *_publisherRecordID;	// 12 = 0xc
	NSString *_publisherBulletinID;	// 16 = 0x10
	int _addressBookRecordID;	// 20 = 0x14
	int _sectionSubtype;	// 24 = 0x18
	BBContent *_content;	// 28 = 0x1c
	BBContent *_modalAlertContent;	// 32 = 0x20
	NSDate *_date;	// 36 = 0x24
	NSDate *_endDate;	// 40 = 0x28
	NSDate *_recencyDate;	// 44 = 0x2c
	int _dateFormatStyle;	// 48 = 0x30
	BOOL _dateIsAllDay;	// 52 = 0x34
	NSTimeZone *_timeZone;	// 56 = 0x38
	int _accessoryStyle;	// 60 = 0x3c
	BOOL _clearable;	// 64 = 0x40
	BBSound *_sound;	// 68 = 0x44
	BBAttachments *_attachments;	// 72 = 0x48
	NSString *_unlockActionLabelOverride;	// 76 = 0x4c
	NSMutableDictionary *_actions;	// 80 = 0x50
	NSArray *_buttons;	// 84 = 0x54
	BOOL _expiresOnPublisherDeath;	// 88 = 0x58
	NSDictionary *_context;	// 92 = 0x5c
	NSDate *_expirationDate;	// 96 = 0x60
	unsigned _expirationEvents;	// 100 = 0x64
	NSSet *_alertSuppressionContexts;	// 104 = 0x68
	NSString *_bulletinID;	// 108 = 0x6c
	NSDate *_lastInterruptDate;	// 112 = 0x70
	BOOL _showsMessagePreview;	// 116 = 0x74
	NSString *_bulletinVersionID;	// 120 = 0x78
	NSMutableArray *_lifeAssertions;	// 124 = 0x7c
	BBObserver *_observer;	// 128 = 0x80
	unsigned realertCount_deprecated;	// 132 = 0x84
	NSSet *alertSuppressionAppIDs_deprecated;	// 136 = 0x88
}
@property(assign, nonatomic) int accessoryStyle;	// G=0x3370dfb9; S=0x3370dfc9; @synthesize=_accessoryStyle
@property(copy, nonatomic) BBAction *acknowledgeAction;	// G=0x3370c329; S=0x3370c351; 
@property(retain, nonatomic) NSMutableDictionary *actions;	// G=0x3370e04d; S=0x3370e05d; @synthesize=_actions
@property(assign, nonatomic) int addressBookRecordID;	// G=0x3370de89; S=0x3370de99; @synthesize=_addressBookRecordID
@property(readonly, assign, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x33727d91; 
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;	// G=0x3370e1fd; S=0x3370e211; @synthesize
@property(copy, nonatomic) NSSet *alertSuppressionContexts;	// G=0x3370e101; S=0x3370bf81; @synthesize=_alertSuppressionContexts
@property(copy, nonatomic) BBAction *alternateAction;	// G=0x3370c2a9; S=0x3370c2d1; 
@property(retain, nonatomic) BBAttachments *attachments;	// G=0x3370c1c1; S=0x3370e019; @synthesize=_attachments
@property(readonly, assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x337280c5; 
@property(copy, nonatomic) NSString *bulletinID;	// G=0x3370e115; S=0x3370e129; @synthesize=_bulletinID
@property(copy, nonatomic) NSString *bulletinVersionID;	// G=0x3370e179; S=0x3370e18d; @synthesize=_bulletinVersionID
@property(copy, nonatomic) NSArray *buttons;	// G=0x3370e06d; S=0x3370c469; @synthesize=_buttons
@property(assign, nonatomic) BOOL clearable;	// G=0x3370dfd9; S=0x3370dfe9; @synthesize=_clearable
@property(readonly, assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x33727e25; 
@property(retain, nonatomic) BBContent *content;	// G=0x3370bf31; S=0x3370dec9; @synthesize=_content
@property(retain, nonatomic) NSDictionary *context;	// G=0x3370e0a1; S=0x3370e0b1; @synthesize=_context
@property(retain, nonatomic) NSDate *date;	// G=0x3370def9; S=0x3370df09; @synthesize=_date
@property(assign, nonatomic) int dateFormatStyle;	// G=0x3370df59; S=0x3370df69; @synthesize=_dateFormatStyle
@property(assign, nonatomic) BOOL dateIsAllDay;	// G=0x3370df79; S=0x3370df89; @synthesize=_dateIsAllDay
@property(copy, nonatomic) BBAction *defaultAction;	// G=0x3370c229; S=0x3370c251; 
@property(retain, nonatomic) NSDate *endDate;	// G=0x3370df19; S=0x3370df29; @synthesize=_endDate
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x3370e0c1; S=0x3370e0d1; @synthesize=_expirationDate
@property(assign, nonatomic) unsigned expirationEvents;	// G=0x3370e0e1; S=0x3370e0f1; @synthesize=_expirationEvents
@property(copy, nonatomic) BBAction *expireAction;	// G=0x3370c3a9; S=0x3370c3d1; 
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// G=0x3370e081; S=0x3370e091; @synthesize=_expiresOnPublisherDeath
@property(readonly, assign, nonatomic) NSString *fullUnlockActionLabel;	// G=0x33727c81; 
@property(readonly, assign, nonatomic) int iPodOutAlertType;	// G=0x33728239; 
@property(readonly, assign, nonatomic) BOOL inertWhenLocked;	// G=0x33727fcd; 
@property(retain, nonatomic) NSDate *lastInterruptDate;	// G=0x3370e139; S=0x3370e149; @synthesize=_lastInterruptDate
@property(retain, nonatomic) NSMutableArray *lifeAssertions;	// G=0x3370e19d; S=0x3370e1ad; @synthesize=_lifeAssertions
@property(copy, nonatomic) NSString *message;	// G=0x3370be65; S=0x3370bef5; 
@property(readonly, assign, nonatomic) unsigned messageNumberOfLines;	// G=0x33727a05; 
@property(readonly, assign, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x33727c05; 
@property(retain, nonatomic) BBContent *modalAlertContent;	// G=0x3370ded9; S=0x3370dee9; @synthesize=_modalAlertContent
@property(retain, nonatomic) BBObserver *observer;	// G=0x3370e1bd; S=0x3370e1cd; @synthesize=_observer
@property(readonly, assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x33727aad; 
@property(readonly, assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x33728049; 
@property(readonly, assign, nonatomic) int primaryAttachmentType;	// G=0x3370c145; 
@property(copy, nonatomic) NSString *publisherBulletinID;	// G=0x3370de65; S=0x3370de79; @synthesize=_publisherBulletinID
@property(readonly, assign, nonatomic) unsigned realertCount;	// G=0x33727f39; 
@property(assign, nonatomic) unsigned realertCount_deprecated;	// G=0x3370e1dd; S=0x3370e1ed; @synthesize
@property(retain, nonatomic) NSDate *recencyDate;	// G=0x3370df39; S=0x3370df49; @synthesize=_recencyDate
@property(copy, nonatomic) NSString *recordID;	// G=0x3370de41; S=0x3370de55; @synthesize=_publisherRecordID
@property(copy, nonatomic) NSString *section;	// G=0x3370be8d; S=0x3370bf21; 
@property(readonly, assign, nonatomic) NSString *sectionDisplayName;	// G=0x337278b5; 
@property(readonly, assign, nonatomic) BOOL sectionDisplaysCriticalBulletins;	// G=0x3372795d; 
@property(copy, nonatomic) NSString *sectionID;	// G=0x3370ddf9; S=0x3370de0d; @synthesize=_sectionID
@property(readonly, assign, nonatomic) NSData *sectionIconData;	// G=0x33727909; 
@property(assign, nonatomic) int sectionSubtype;	// G=0x3370dea9; S=0x3370deb9; @synthesize=_sectionSubtype
@property(readonly, assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x33727b01; 
@property(assign, nonatomic) BOOL showsMessagePreview;	// G=0x3370e159; S=0x3370e169; @synthesize=_showsMessagePreview
@property(readonly, assign, nonatomic) BOOL showsSubtitle;	// G=0x337279b1; 
@property(retain, nonatomic) BBSound *sound;	// G=0x3370dff9; S=0x3370e009; @synthesize=_sound
@property(copy, nonatomic) NSSet *subsectionIDs;	// G=0x3370de1d; S=0x3370de31; @synthesize=_subsectionIDs
@property(copy, nonatomic) NSString *subtitle;	// G=0x3370be3d; S=0x3370bec9; 
@property(readonly, assign, nonatomic) unsigned subtypePriority;	// G=0x337281bd; 
@property(readonly, assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x33727ea1; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x3370df99; S=0x3370dfa9; @synthesize=_timeZone
@property(copy, nonatomic) NSString *title;	// G=0x3370be15; S=0x3370be9d; 
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x33727b55; 
@property(readonly, assign, nonatomic) NSString *unlockActionLabel;	// G=0x33727cfd; 
@property(copy, nonatomic) NSString *unlockActionLabelOverride;	// G=0x3370e029; S=0x3370e03d; @synthesize=_unlockActionLabelOverride
@property(readonly, assign, nonatomic) BOOL usesVariableLayout;	// G=0x33727a59; 
@property(readonly, assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x33728141; 
+ (void)addBulletinToCache:(id)cache;	// 0x3370b899
+ (id)bulletinWithBulletin:(id)bulletin;	// 0x3370b835
+ (id)copyCachedBulletinWithBulletinID:(id)bulletinID;	// 0x3370ba89
+ (void)removeBulletinFromCache:(id)cache;	// 0x3370b97d
- (id)init;	// 0x3370bb05
- (id)initWithCoder:(id)coder;	// 0x3370d0bd
- (id)_actionKeyForButtonIndex:(unsigned)buttonIndex;	// 0x3370c429
- (void)_fillOutCopy:(id)copy withZone:(NSZone *)zone;	// 0x3370ca09
- (id)_responseForActionKey:(id)actionKey;	// 0x3370c64d
// declared property getter: - (int)accessoryStyle;	// 0x3370dfb9
// declared property getter: - (id)acknowledgeAction;	// 0x3370c329
// declared property getter: - (id)actions;	// 0x3370e04d
- (void)addLifeAssertion:(id)assertion;	// 0x3370cff9
// declared property getter: - (int)addressBookRecordID;	// 0x3370de89
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x33727d91
// declared property getter: - (id)alertSuppressionAppIDs_deprecated;	// 0x3370e1fd
// declared property getter: - (id)alertSuppressionContexts;	// 0x3370e101
// declared property getter: - (id)alternateAction;	// 0x3370c2a9
// declared property getter: - (id)attachments;	// 0x3370c1c1
- (id)attachmentsCreatingIfNecessary:(BOOL)necessary;	// 0x3370c1d5
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x337280c5
// declared property getter: - (id)bulletinID;	// 0x3370e115
// declared property getter: - (id)bulletinVersionID;	// 0x3370e179
// declared property getter: - (id)buttons;	// 0x3370e06d
// declared property getter: - (BOOL)clearable;	// 0x3370dfd9
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x33727e25
- (id)composedAttachmentImage;	// 0x3372a23d
- (id)composedAttachmentImageForKey:(id)key;	// 0x3372a28d
- (id)composedAttachmentImageForKey:(id)key withObserver:(id)observer;	// 0x3372a1c5
- (CGSize)composedAttachmentImageSize;	// 0x3372a25d
- (CGSize)composedAttachmentImageSizeForKey:(id)key;	// 0x3372a2c1
- (CGSize)composedAttachmentImageSizeForKey:(id)key withObserver:(id)observer;	// 0x3372a1f9
- (CGSize)composedAttachmentImageSizeWithObserver:(id)observer;	// 0x3372a18d
- (id)composedAttachmentImageWithObserver:(id)observer;	// 0x3372a16d
// declared property getter: - (id)content;	// 0x3370bf31
// declared property getter: - (id)context;	// 0x3370e0a1
- (id)copyWithZone:(NSZone *)zone;	// 0x3370d065
// declared property getter: - (id)date;	// 0x3370def9
// declared property getter: - (int)dateFormatStyle;	// 0x3370df59
// declared property getter: - (BOOL)dateIsAllDay;	// 0x3370df79
- (void)dealloc;	// 0x3370bb99
// declared property getter: - (id)defaultAction;	// 0x3370c229
- (void)deliverResponse:(id)response;	// 0x3370c919
- (id)description;	// 0x3370dc8d
- (void)encodeWithCoder:(id)coder;	// 0x3370d7b5
// declared property getter: - (id)endDate;	// 0x3370df19
// declared property getter: - (id)expirationDate;	// 0x3370e0c1
// declared property getter: - (unsigned)expirationEvents;	// 0x3370e0e1
// declared property getter: - (id)expireAction;	// 0x3370c3a9
// declared property getter: - (BOOL)expiresOnPublisherDeath;	// 0x3370e081
// declared property getter: - (id)fullUnlockActionLabel;	// 0x33727c81
// declared property getter: - (int)iPodOutAlertType;	// 0x33728239
// declared property getter: - (BOOL)inertWhenLocked;	// 0x33727fcd
// declared property getter: - (id)lastInterruptDate;	// 0x3370e139
// declared property getter: - (id)lifeAssertions;	// 0x3370e19d
// declared property getter: - (id)message;	// 0x3370be65
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x33727a05
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x33727c05
// declared property getter: - (id)modalAlertContent;	// 0x3370ded9
- (unsigned)numberOfAdditionalAttachments;	// 0x3370c16d
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x3370c195
// declared property getter: - (id)observer;	// 0x3370e1bd
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x33727aad
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x33728049
// declared property getter: - (int)primaryAttachmentType;	// 0x3370c145
// declared property getter: - (id)publisherBulletinID;	// 0x3370de65
// declared property getter: - (unsigned)realertCount;	// 0x33727f39
// declared property getter: - (unsigned)realertCount_deprecated;	// 0x3370e1dd
// declared property getter: - (id)recencyDate;	// 0x3370df39
// declared property getter: - (id)recordID;	// 0x3370de41
- (id)responseForAcknowledgeAction;	// 0x3370c781
- (id)responseForButtonActionAtIndex:(unsigned)index;	// 0x3370c79d
- (id)responseForDefaultAction;	// 0x3370c765
- (id)responseForExpireAction;	// 0x3370c7cd
- (id)responseSendBlock;	// 0x3370c88d
// declared property getter: - (id)section;	// 0x3370be8d
// declared property getter: - (id)sectionDisplayName;	// 0x337278b5
// declared property getter: - (BOOL)sectionDisplaysCriticalBulletins;	// 0x3372795d
// declared property getter: - (id)sectionID;	// 0x3370ddf9
// declared property getter: - (id)sectionIconData;	// 0x33727909
// declared property getter: - (int)sectionSubtype;	// 0x3370dea9
// declared property setter: - (void)setAccessoryStyle:(int)style;	// 0x3370dfc9
// declared property setter: - (void)setAcknowledgeAction:(id)action;	// 0x3370c351
// declared property setter: - (void)setActions:(id)actions;	// 0x3370e05d
// declared property setter: - (void)setAddressBookRecordID:(int)anId;	// 0x3370de99
// declared property setter: - (void)setAlertSuppressionAppIDs_deprecated:(id)deprecated;	// 0x3370e211
// declared property setter: - (void)setAlertSuppressionContexts:(id)contexts;	// 0x3370bf81
// declared property setter: - (void)setAlternateAction:(id)action;	// 0x3370c2d1
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x3370e019
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x3370e129
// declared property setter: - (void)setBulletinVersionID:(id)anId;	// 0x3370e18d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x3370c469
// declared property setter: - (void)setClearable:(BOOL)clearable;	// 0x3370dfe9
// declared property setter: - (void)setContent:(id)content;	// 0x3370dec9
// declared property setter: - (void)setContext:(id)context;	// 0x3370e0b1
// declared property setter: - (void)setDate:(id)date;	// 0x3370df09
// declared property setter: - (void)setDateFormatStyle:(int)style;	// 0x3370df69
// declared property setter: - (void)setDateIsAllDay:(BOOL)day;	// 0x3370df89
// declared property setter: - (void)setDefaultAction:(id)action;	// 0x3370c251
// declared property setter: - (void)setEndDate:(id)date;	// 0x3370df29
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x3370e0d1
// declared property setter: - (void)setExpirationEvents:(unsigned)events;	// 0x3370e0f1
// declared property setter: - (void)setExpireAction:(id)action;	// 0x3370c3d1
// declared property setter: - (void)setExpiresOnPublisherDeath:(BOOL)death;	// 0x3370e091
// declared property setter: - (void)setLastInterruptDate:(id)date;	// 0x3370e149
// declared property setter: - (void)setLifeAssertions:(id)assertions;	// 0x3370e1ad
// declared property setter: - (void)setMessage:(id)message;	// 0x3370bef5
// declared property setter: - (void)setModalAlertContent:(id)content;	// 0x3370dee9
// declared property setter: - (void)setObserver:(id)observer;	// 0x3370e1cd
// declared property setter: - (void)setPublisherBulletinID:(id)anId;	// 0x3370de79
// declared property setter: - (void)setRealertCount_deprecated:(unsigned)deprecated;	// 0x3370e1ed
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x3370df49
// declared property setter: - (void)setRecordID:(id)anId;	// 0x3370de55
// declared property setter: - (void)setSection:(id)section;	// 0x3370bf21
// declared property setter: - (void)setSectionID:(id)anId;	// 0x3370de0d
// declared property setter: - (void)setSectionSubtype:(int)subtype;	// 0x3370deb9
// declared property setter: - (void)setShowsMessagePreview:(BOOL)preview;	// 0x3370e169
// declared property setter: - (void)setSound:(id)sound;	// 0x3370e009
// declared property setter: - (void)setSubsectionIDs:(id)ids;	// 0x3370de31
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x3370bec9
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3370dfa9
// declared property setter: - (void)setTitle:(id)title;	// 0x3370be9d
// declared property setter: - (void)setUnlockActionLabelOverride:(id)override;	// 0x3370e03d
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x33727b01
// declared property getter: - (BOOL)showsMessagePreview;	// 0x3370e159
// declared property getter: - (BOOL)showsSubtitle;	// 0x337279b1
// declared property getter: - (id)sound;	// 0x3370dff9
// declared property getter: - (id)subsectionIDs;	// 0x3370de1d
// declared property getter: - (id)subtitle;	// 0x3370be3d
// declared property getter: - (unsigned)subtypePriority;	// 0x337281bd
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x33727ea1
// declared property getter: - (id)timeZone;	// 0x3370df99
// declared property getter: - (id)title;	// 0x3370be15
// declared property getter: - (id)topic;	// 0x33727b55
// declared property getter: - (id)unlockActionLabel;	// 0x33727cfd
// declared property getter: - (id)unlockActionLabelOverride;	// 0x3370e029
// declared property getter: - (BOOL)usesVariableLayout;	// 0x33727a59
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x33728141
@end
