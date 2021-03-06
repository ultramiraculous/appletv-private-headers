/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, NSString, SAPersonAttribute, NSArray, NSURL;

@interface SASmsSms : SADomainObject {
}
@property(copy, nonatomic) NSURL *attachment;	// G=0x36604d49; S=0x36604dc5; 
@property(copy, nonatomic) NSDate *dateSent;	// G=0x36604e25; S=0x36604e41; 
@property(copy, nonatomic) NSString *message;	// G=0x36604e91; S=0x36604ead; 
@property(copy, nonatomic) NSArray *msgRecipients;	// G=0x36604efd; S=0x36604f79; 
@property(retain, nonatomic) SAPersonAttribute *msgSender;	// G=0x36604fe1; S=0x36605035; 
@property(copy, nonatomic) NSNumber *outgoing;	// G=0x36605071; S=0x3660508d; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x366050dd; S=0x366050f9; 
@property(copy, nonatomic) NSString *sender;	// G=0x36605149; S=0x36605165; 
@property(copy, nonatomic) NSString *subject;	// G=0x366051b5; S=0x366051d1; 
@property(copy, nonatomic) NSString *timezoneId;	// G=0x36605221; S=0x3660523d; 
+ (id)sms;	// 0x36604cb9
+ (id)smsWithDictionary:(id)dictionary context:(id)context;	// 0x36604cfd
// declared property getter: - (id)attachment;	// 0x36604d49
// declared property getter: - (id)dateSent;	// 0x36604e25
- (id)encodedClassName;	// 0x36604cad
- (id)groupIdentifier;	// 0x36604c9d
// declared property getter: - (id)message;	// 0x36604e91
// declared property getter: - (id)msgRecipients;	// 0x36604efd
// declared property getter: - (id)msgSender;	// 0x36604fe1
// declared property getter: - (id)outgoing;	// 0x36605071
// declared property getter: - (id)recipients;	// 0x366050dd
// declared property getter: - (id)sender;	// 0x36605149
// declared property setter: - (void)setAttachment:(id)attachment;	// 0x36604dc5
// declared property setter: - (void)setDateSent:(id)sent;	// 0x36604e41
// declared property setter: - (void)setMessage:(id)message;	// 0x36604ead
// declared property setter: - (void)setMsgRecipients:(id)recipients;	// 0x36604f79
// declared property setter: - (void)setMsgSender:(id)sender;	// 0x36605035
// declared property setter: - (void)setOutgoing:(id)outgoing;	// 0x3660508d
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x366050f9
// declared property setter: - (void)setSender:(id)sender;	// 0x36605165
// declared property setter: - (void)setSubject:(id)subject;	// 0x366051d1
// declared property setter: - (void)setTimezoneId:(id)anId;	// 0x3660523d
// declared property getter: - (id)subject;	// 0x366051b5
// declared property getter: - (id)timezoneId;	// 0x36605221
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3660528d
@end

