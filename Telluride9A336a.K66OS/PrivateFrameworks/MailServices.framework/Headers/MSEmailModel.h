/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSURL;

@interface MSEmailModel : NSObject <NSCoding> {
@private
	NSString *_subject;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
	NSArray *_to;	// 12 = 0xc
	NSArray *_cc;	// 16 = 0x10
	NSArray *_bcc;	// 20 = 0x14
	NSURL *_reference;	// 24 = 0x18
	int _type;	// 28 = 0x1c
}
@property(copy, nonatomic) NSArray *bcc;	// G=0x34f149e5; S=0x34f149f5; @synthesize=_bcc
@property(retain, nonatomic) NSString *body;	// G=0x34f14a19; S=0x34f14a29; @synthesize=_body
@property(copy, nonatomic) NSArray *cc;	// G=0x34f149b1; S=0x34f149c1; @synthesize=_cc
@property(retain, nonatomic) NSURL *reference;	// G=0x34f14a4d; S=0x34f14a5d; @synthesize=_reference
@property(copy, nonatomic) NSString *subject;	// G=0x34f14949; S=0x34f14959; @synthesize=_subject
@property(copy, nonatomic) NSArray *to;	// G=0x34f1497d; S=0x34f1498d; @synthesize=_to
@property(assign, nonatomic) int type;	// G=0x34f14a81; S=0x34f14a91; @synthesize=_type
- (id)initWithCoder:(id)coder;	// 0x34f146ed
// declared property getter: - (id)bcc;	// 0x34f149e5
// declared property getter: - (id)body;	// 0x34f14a19
// declared property getter: - (id)cc;	// 0x34f149b1
- (void)dealloc;	// 0x34f14899
- (void)encodeWithCoder:(id)coder;	// 0x34f145cd
// declared property getter: - (id)reference;	// 0x34f14a4d
// declared property setter: - (void)setBcc:(id)bcc;	// 0x34f149f5
// declared property setter: - (void)setBody:(id)body;	// 0x34f14a29
// declared property setter: - (void)setCc:(id)cc;	// 0x34f149c1
// declared property setter: - (void)setReference:(id)reference;	// 0x34f14a5d
// declared property setter: - (void)setSubject:(id)subject;	// 0x34f14959
// declared property setter: - (void)setTo:(id)to;	// 0x34f1498d
// declared property setter: - (void)setType:(int)type;	// 0x34f14a91
// declared property getter: - (id)subject;	// 0x34f14949
// declared property getter: - (id)to;	// 0x34f1497d
// declared property getter: - (int)type;	// 0x34f14a81
@end

