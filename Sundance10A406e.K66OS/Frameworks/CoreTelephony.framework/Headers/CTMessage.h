/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary, NSDate, CTPhoneNumber, NSString, NSMutableDictionary, NSUUID, NSArray;
@protocol NSCopying, CTMessageAddress;

@interface CTMessage : NSObject {
	NSObject<NSCopying, CTMessageAddress> *_sender;	// 4 = 0x4
	NSMutableArray *_recipients;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSDictionary *_rawHeaders;	// 16 = 0x10
	NSDate *_date;	// 20 = 0x14
	unsigned _messageId;	// 24 = 0x18
	int _messageType;	// 28 = 0x1c
	CTPhoneNumber *_serviceCenter;	// 32 = 0x20
	NSString *_subject;	// 36 = 0x24
	NSString *_contentType;	// 40 = 0x28
	NSMutableDictionary *_contentTypeParams;	// 44 = 0x2c
	unsigned _replaceMessage;	// 48 = 0x30
	NSString *_countryCode;	// 52 = 0x34
	NSUUID *_uuid;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *contentType;	// G=0x31170301; S=0x31170315; @synthesize=_contentType
@property(readonly, assign, nonatomic) NSString *countryCode;	// G=0x31170339; @synthesize=_countryCode
@property(readonly, assign) NSDate *date;	// G=0x31170219; @synthesize=_date
@property(readonly, assign) NSArray *items;	// G=0x3117024d; @synthesize=_items
@property(assign, nonatomic) unsigned messageId;	// G=0x3117022d; S=0x3117023d; @synthesize=_messageId
@property(assign, nonatomic) int messageType;	// G=0x31170261; S=0x31170271; @synthesize=_messageType
@property(readonly, assign) NSDictionary *rawHeaders;	// G=0x311702ed; @synthesize=_rawHeaders
@property(readonly, assign) NSArray *recipients;	// G=0x31170205; @synthesize=_recipients
@property(readonly, assign) unsigned replaceMessage;	// G=0x31170325; @synthesize=_replaceMessage
@property(copy, nonatomic) NSObject<NSCopying, CTMessageAddress> *sender;	// G=0x311702c9; S=0x311702dd; @synthesize=_sender
@property(copy, nonatomic) CTPhoneNumber *serviceCenter;	// G=0x31170281; S=0x31170295; @synthesize=_serviceCenter
@property(copy, nonatomic) NSString *subject;	// G=0x311702a5; S=0x311702b9; @synthesize=_subject
@property(retain, nonatomic) NSUUID *uniqueIdentifier;	// G=0x3117034d; S=0x3117035d; @synthesize=_uuid
- (id)init;	// 0x3116f8c1
- (id)initWithDate:(id)date;	// 0x3116fa15
- (void)addContentTypeParameterWithName:(id)name value:(id)value;	// 0x31170035
- (id)addData:(id)data withContentType:(id)contentType;	// 0x3116ff31
- (void)addEmailRecipient:(id)recipient;	// 0x3116fe25
- (id)addPart:(id)part;	// 0x3116ffa5
- (void)addPhoneRecipient:(id)recipient;	// 0x3116fdd5
- (void)addRecipient:(id)recipient;	// 0x3116fbd1
- (id)addText:(id)text;	// 0x3116fea1
- (id)allContentTypeParameterNames;	// 0x31170065
// declared property getter: - (id)contentType;	// 0x31170301
- (id)contentTypeParameterWithName:(id)name;	// 0x31170015
// declared property getter: - (id)countryCode;	// 0x31170339
// declared property getter: - (id)date;	// 0x31170219
- (void)dealloc;	// 0x3116fa65
- (id)description;	// 0x31170085
// declared property getter: - (id)items;	// 0x3117024d
// declared property getter: - (unsigned)messageId;	// 0x3117022d
// declared property getter: - (int)messageType;	// 0x31170261
// declared property getter: - (id)rawHeaders;	// 0x311702ed
// declared property getter: - (id)recipients;	// 0x31170205
- (void)removePartAtIndex:(unsigned)index;	// 0x3116ffd1
- (void)removeRecipient:(id)recipient;	// 0x3116fcbd
- (void)removeRecipientsInArray:(id)array;	// 0x3116fd05
// declared property getter: - (unsigned)replaceMessage;	// 0x31170325
// declared property getter: - (id)sender;	// 0x311702c9
// declared property getter: - (id)serviceCenter;	// 0x31170281
// declared property setter: - (void)setContentType:(id)type;	// 0x31170315
- (void)setCountryCode:(id)code;	// 0x311701c9
// declared property setter: - (void)setMessageId:(unsigned)anId;	// 0x3117023d
// declared property setter: - (void)setMessageType:(int)type;	// 0x31170271
- (void)setRawHeaders:(id)headers;	// 0x3116fb7d
- (void)setRecipient:(id)recipient;	// 0x3116fd29
- (void)setRecipients:(id)recipients;	// 0x3116fd91
- (void)setReplaceMessage:(unsigned)message;	// 0x3116fbc1
// declared property setter: - (void)setSender:(id)sender;	// 0x311702dd
// declared property setter: - (void)setServiceCenter:(id)center;	// 0x31170295
// declared property setter: - (void)setSubject:(id)subject;	// 0x311702b9
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x3117035d
// declared property getter: - (id)subject;	// 0x311702a5
// declared property getter: - (id)uniqueIdentifier;	// 0x3117034d
@end

