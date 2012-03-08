/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASBool : ASItem <ASParsingFrontingBasicType> {
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a40141
+ (BOOL)expectsContent;	// 0x30a40375
+ (BOOL)frontingBasicTypes;	// 0x30a4023d
+ (BOOL)notifyOfUnknownTokens;	// 0x30a40291
+ (BOOL)parsingLeafNode;	// 0x30a40195
+ (BOOL)parsingWithSubItems;	// 0x30a401e9
- (id)commonValue;	// 0x30a402e5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30a40305
- (int)parsingState;	// 0x30a40371
@end
