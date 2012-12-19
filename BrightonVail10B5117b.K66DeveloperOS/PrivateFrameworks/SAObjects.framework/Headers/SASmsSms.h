/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SAPersonAttribute, NSArray, NSDate, NSURL, NSNumber;

@interface SASmsSms : SADomainObject {
}
@property(copy, nonatomic) NSURL *attachment;	// G=0x3559cb59; S=0x3559cbd5; 
@property(copy, nonatomic) NSDate *dateSent;	// G=0x3559cc35; S=0x3559cc51; 
@property(copy, nonatomic) NSString *message;	// G=0x3559cca1; S=0x3559ccbd; 
@property(copy, nonatomic) NSArray *msgRecipients;	// G=0x3559cd0d; S=0x3559cd89; 
@property(retain, nonatomic) SAPersonAttribute *msgSender;	// G=0x3559cdf1; S=0x3559ce45; 
@property(copy, nonatomic) NSNumber *outgoing;	// G=0x3559ce81; S=0x3559ce9d; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x3559ceed; S=0x3559cf09; 
@property(copy, nonatomic) NSString *sender;	// G=0x3559cf59; S=0x3559cf75; 
@property(copy, nonatomic) NSString *subject;	// G=0x3559cfc5; S=0x3559cfe1; 
@property(copy, nonatomic) NSString *timezoneId;	// G=0x3559d031; S=0x3559d04d; 
+ (id)sms;	// 0x3559cac9
+ (id)smsWithDictionary:(id)dictionary context:(id)context;	// 0x3559cb0d
// declared property getter: - (id)attachment;	// 0x3559cb59
// declared property getter: - (id)dateSent;	// 0x3559cc35
- (id)encodedClassName;	// 0x3559cabd
- (id)groupIdentifier;	// 0x3559caad
// declared property getter: - (id)message;	// 0x3559cca1
// declared property getter: - (id)msgRecipients;	// 0x3559cd0d
// declared property getter: - (id)msgSender;	// 0x3559cdf1
// declared property getter: - (id)outgoing;	// 0x3559ce81
// declared property getter: - (id)recipients;	// 0x3559ceed
// declared property getter: - (id)sender;	// 0x3559cf59
// declared property setter: - (void)setAttachment:(id)attachment;	// 0x3559cbd5
// declared property setter: - (void)setDateSent:(id)sent;	// 0x3559cc51
// declared property setter: - (void)setMessage:(id)message;	// 0x3559ccbd
// declared property setter: - (void)setMsgRecipients:(id)recipients;	// 0x3559cd89
// declared property setter: - (void)setMsgSender:(id)sender;	// 0x3559ce45
// declared property setter: - (void)setOutgoing:(id)outgoing;	// 0x3559ce9d
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x3559cf09
// declared property setter: - (void)setSender:(id)sender;	// 0x3559cf75
// declared property setter: - (void)setSubject:(id)subject;	// 0x3559cfe1
// declared property setter: - (void)setTimezoneId:(id)anId;	// 0x3559d04d
// declared property getter: - (id)subject;	// 0x3559cfc5
// declared property getter: - (id)timezoneId;	// 0x3559d031
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3559d09d
@end
