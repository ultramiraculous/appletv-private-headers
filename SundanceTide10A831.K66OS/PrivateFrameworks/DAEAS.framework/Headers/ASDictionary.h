/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASParsingWithSubItems.h"
#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
	NSMutableDictionary *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
	NSMutableDictionary *_placeHolder;	// 48 = 0x30
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e477a9
+ (BOOL)frontingBasicTypes;	// 0x36e478a5
+ (BOOL)notifyOfUnknownTokens;	// 0x36e478f9
+ (BOOL)parsingLeafNode;	// 0x36e477fd
+ (BOOL)parsingWithSubItems;	// 0x36e47851
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x36e4794d
- (void)_setItems:(id)items;	// 0x36e47ab9
- (void)applyPlaceHolder;	// 0x36e47afd
- (id)asParseRules;	// 0x36e47aa9
- (void)clearPlaceHolder;	// 0x36e47b1d
- (id)commonValue;	// 0x36e47b71
- (void)dealloc;	// 0x36e479d5
- (id)description;	// 0x36e47a4d
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x36e47b49
@end

