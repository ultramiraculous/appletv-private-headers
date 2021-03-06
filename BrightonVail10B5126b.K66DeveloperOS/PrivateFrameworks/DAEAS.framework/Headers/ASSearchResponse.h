/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {
	NSArray *_stores;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	int _expectedResultType;	// 48 = 0x30
}
@property(assign) int expectedResultType;	// G=0x339d47a1; S=0x339d47b5; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x339d477d; S=0x339d4791; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x339d4759; S=0x339d476d; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d4281
+ (id)asParseRules;	// 0x339d44f1
+ (BOOL)frontingBasicTypes;	// 0x339d437d
+ (BOOL)notifyOfUnknownTokens;	// 0x339d43d1
+ (BOOL)parsingLeafNode;	// 0x339d42d5
+ (BOOL)parsingWithSubItems;	// 0x339d4329
- (void)dealloc;	// 0x339d4425
- (id)description;	// 0x339d4489
// declared property getter: - (int)expectedResultType;	// 0x339d47a1
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x339d47b5
// declared property setter: - (void)setStatus:(id)status;	// 0x339d4791
// declared property setter: - (void)setStores:(id)stores;	// 0x339d476d
// declared property getter: - (id)status;	// 0x339d477d
// declared property getter: - (id)stores;	// 0x339d4759
@end

