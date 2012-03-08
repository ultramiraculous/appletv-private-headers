/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSData.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSData (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x31543741
+ (BOOL)expectsContent;	// 0x31543b9d
+ (BOOL)frontingBasicTypes;	// 0x3154383d
+ (BOOL)notifyOfUnknownTokens;	// 0x31543891
+ (BOOL)parsingLeafNode;	// 0x31543795
+ (BOOL)parsingWithSubItems;	// 0x315437e9
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x31543ba1
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x315438e5
- (int)parsingState;	// 0x31543b99
@end
