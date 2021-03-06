/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c132c5
+ (id)asParseRules;	// 0x36c134f9
+ (BOOL)frontingBasicTypes;	// 0x36c133c1
+ (BOOL)notifyOfUnknownTokens;	// 0x36c13415
+ (BOOL)parsingLeafNode;	// 0x36c13319
+ (BOOL)parsingWithSubItems;	// 0x36c1336d
- (void)_cleanUpPolicyData:(id)data;	// 0x36c139d9
- (void)_setPolicyData:(id)data;	// 0x36c134b5
- (void)dealloc;	// 0x36c13469
- (id)perDomainDictsForPolicy;	// 0x36c13bf1
@end

