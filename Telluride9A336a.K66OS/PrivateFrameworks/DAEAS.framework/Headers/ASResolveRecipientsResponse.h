/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {
	NSMutableArray *_responses;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
}
@property(retain) NSNumber *easStatus;	// G=0x315a7435; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x315a746d; S=0x315a7481; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x315a6fdd
+ (BOOL)frontingBasicTypes;	// 0x315a70d9
+ (BOOL)notifyOfUnknownTokens;	// 0x315a712d
+ (BOOL)parsingLeafNode;	// 0x315a7031
+ (BOOL)parsingWithSubItems;	// 0x315a7085
- (void)addResponse:(id)response;	// 0x315a7181
- (id)asParseRules;	// 0x315a71e5
- (void)dealloc;	// 0x315a73d5
- (id)description;	// 0x315a735d
// declared property getter: - (id)easStatus;	// 0x315a7435
// declared property getter: - (id)responses;	// 0x315a746d
- (void)setEASStatus:(id)status;	// 0x315a7449
// declared property setter: - (void)setResponses:(id)responses;	// 0x315a7481
@end

