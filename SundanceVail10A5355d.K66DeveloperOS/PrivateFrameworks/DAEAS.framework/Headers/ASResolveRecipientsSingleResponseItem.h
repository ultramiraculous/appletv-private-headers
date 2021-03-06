/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
	NSMutableArray *_recipients;	// 48 = 0x30
}
@property(retain) NSNumber *easStatus;	// G=0x34bb3e25; @synthesize=_easStatus
@property(retain) NSString *emailAddress;	// G=0x34bb3e01; S=0x34bb3e15; @synthesize=_emailAddress
@property(retain) NSMutableArray *recipients;	// G=0x34bb3e49; S=0x34bb3e5d; @synthesize=_recipients
+ (BOOL)acceptsTopLevelLeaves;	// 0x34bb37ad
+ (id)asParseRules;	// 0x34bb39bd
+ (BOOL)frontingBasicTypes;	// 0x34bb38a9
+ (BOOL)notifyOfUnknownTokens;	// 0x34bb38fd
+ (BOOL)parsingLeafNode;	// 0x34bb3801
+ (BOOL)parsingWithSubItems;	// 0x34bb3855
- (void)addRecipient:(id)recipient;	// 0x34bb3951
- (void)dealloc;	// 0x34bb3d89
- (id)description;	// 0x34bb3cf5
// declared property getter: - (id)easStatus;	// 0x34bb3e25
// declared property getter: - (id)emailAddress;	// 0x34bb3e01
// declared property getter: - (id)recipients;	// 0x34bb3e49
- (void)setEASStatus:(id)status;	// 0x34bb3e39
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x34bb3e15
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x34bb3e5d
@end

