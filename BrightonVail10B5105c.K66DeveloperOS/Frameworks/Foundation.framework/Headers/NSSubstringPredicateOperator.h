/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"


@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
	unsigned _position;	// 16 = 0x10
}
@property(readonly, assign) unsigned position;	// G=0x3615a7e9; converted property
- (id)initWithCoder:(id)coder;	// 0x3615a739
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant position:(unsigned)position;	// 0x360bf8c1
- (void)encodeWithCoder:(id)coder;	// 0x3615a691
- (BOOL)isEqual:(id)equal;	// 0x3615a7f9
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x360bf99d
// converted property getter: - (unsigned)position;	// 0x3615a7e9
- (SEL)selector;	// 0x3615a681
- (id)symbol;	// 0x3615a8d5
@end
