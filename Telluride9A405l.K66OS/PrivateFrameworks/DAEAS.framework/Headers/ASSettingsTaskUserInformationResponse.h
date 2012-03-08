/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, ASSettingsTaskUserInformationGetResponse;

@interface ASSettingsTaskUserInformationResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationGetResponse *_getResponse;	// 44 = 0x2c
}
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x341c4765; S=0x341c4775; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x341c4731; S=0x341c4741; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x341c4289
+ (BOOL)frontingBasicTypes;	// 0x341c4385
+ (BOOL)notifyOfUnknownTokens;	// 0x341c43d9
+ (BOOL)parsingLeafNode;	// 0x341c42dd
+ (BOOL)parsingWithSubItems;	// 0x341c4331
- (id)asParseRules;	// 0x341c4511
- (void)dealloc;	// 0x341c442d
- (id)description;	// 0x341c448d
// declared property getter: - (id)getResponse;	// 0x341c4765
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x341c4685
// declared property setter: - (void)setGetResponse:(id)response;	// 0x341c4775
// declared property setter: - (void)setStatus:(id)status;	// 0x341c4741
// declared property getter: - (id)status;	// 0x341c4731
@end
