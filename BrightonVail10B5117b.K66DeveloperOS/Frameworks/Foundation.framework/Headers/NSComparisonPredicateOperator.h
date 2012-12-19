/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSComparisonPredicateOperator : NSPredicateOperator {
	unsigned _variant;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(readonly, assign) unsigned options;	// G=0x31987b95; converted property
@property(readonly, assign) unsigned variant;	// G=0x31a3462d; converted property
- (id)initWithCoder:(id)coder;	// 0x31a343c1
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x31987821
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant options:(unsigned)options;	// 0x319877ed
- (id)copyWithZone:(NSZone *)zone;	// 0x31a34495
- (void)encodeWithCoder:(id)coder;	// 0x31a342f5
- (BOOL)isEqual:(id)equal;	// 0x31a3463d
// converted property getter: - (unsigned)options;	// 0x31987b95
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31a34719
- (id)predicateFormat;	// 0x31a34515
// converted property getter: - (unsigned)variant;	// 0x31a3462d
@end
