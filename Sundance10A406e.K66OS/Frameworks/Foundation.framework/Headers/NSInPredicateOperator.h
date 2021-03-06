/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x355e9551; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x355e9219; converted property
- (id)initWithCoder:(id)coder;	// 0x355e9335
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x3553b759
- (void)_setOptions:(unsigned)options;	// 0x3553b7a1
- (id)copyWithZone:(NSZone *)zone;	// 0x355e9619
- (void)dealloc;	// 0x3553df1d
- (void)encodeWithCoder:(id)coder;	// 0x355e92d9
// converted property getter: - (unsigned)flags;	// 0x355e9551
- (BOOL)isEqual:(id)equal;	// 0x355e9561
- (unsigned)options;	// 0x355e98e5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x355e9685
// converted property getter: - (id)stringVersion;	// 0x355e9219
- (id)symbol;	// 0x355e9399
@end

