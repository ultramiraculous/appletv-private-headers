/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASEmptyNode : ASItem <ASParsingFrontingBasicType> {
	Class _expectedClassType;	// 40 = 0x28
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x36ee6f8d
+ (BOOL)frontingBasicTypes;	// 0x36ee7089
+ (BOOL)notifyOfUnknownTokens;	// 0x36ee70dd
+ (BOOL)parsingLeafNode;	// 0x36ee6fe1
+ (BOOL)parsingWithSubItems;	// 0x36ee7035
- (id)initWithExpectedClassType:(Class)expectedClassType;	// 0x36ee7131
- (id)commonValue;	// 0x36ee71e1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36ee7171
- (int)parsingState;	// 0x36ee71dd
@end

