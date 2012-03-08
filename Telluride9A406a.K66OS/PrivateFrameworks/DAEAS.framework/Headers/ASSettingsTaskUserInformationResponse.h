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
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x343e4765; S=0x343e4775; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x343e4731; S=0x343e4741; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x343e4289
+ (BOOL)frontingBasicTypes;	// 0x343e4385
+ (BOOL)notifyOfUnknownTokens;	// 0x343e43d9
+ (BOOL)parsingLeafNode;	// 0x343e42dd
+ (BOOL)parsingWithSubItems;	// 0x343e4331
- (id)asParseRules;	// 0x343e4511
- (void)dealloc;	// 0x343e442d
- (id)description;	// 0x343e448d
// declared property getter: - (id)getResponse;	// 0x343e4765
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x343e4685
// declared property setter: - (void)setGetResponse:(id)response;	// 0x343e4775
// declared property setter: - (void)setStatus:(id)status;	// 0x343e4741
// declared property getter: - (id)status;	// 0x343e4731
@end
