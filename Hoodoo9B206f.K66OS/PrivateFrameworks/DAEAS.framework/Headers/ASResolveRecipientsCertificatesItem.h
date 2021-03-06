/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x32203329; S=0x3220333d; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x322033d1; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x32203399; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x32203361; S=0x32203375; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x32202c9d
+ (BOOL)frontingBasicTypes;	// 0x32202d99
+ (BOOL)notifyOfUnknownTokens;	// 0x32202ded
+ (BOOL)parsingLeafNode;	// 0x32202cf1
+ (BOOL)parsingWithSubItems;	// 0x32202d45
- (void)addCertificateString:(id)string;	// 0x32202e41
- (id)asParseRules;	// 0x32202ea5
// declared property getter: - (id)certCount;	// 0x32203329
// declared property getter: - (id)certificates;	// 0x322033d1
- (void)dealloc;	// 0x322032a1
- (id)description;	// 0x32203115
// declared property getter: - (id)easStatus;	// 0x32203399
// declared property getter: - (id)recipientCount;	// 0x32203361
// declared property setter: - (void)setCertCount:(id)count;	// 0x3220333d
- (void)setEASStatus:(id)status;	// 0x322033ad
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x32203375
@end

