/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+ (id)andPredicateOperator;	// 0x360ab0f5
+ (id)notPredicateOperator;	// 0x361588bd
+ (id)orPredicateOperator;	// 0x360aba9d
- (id)initWithCoder:(id)coder;	// 0x36158985
- (id)copyWithZone:(NSZone *)zone;	// 0x36158a05
- (void)encodeWithCoder:(id)coder;	// 0x36158905
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x36158aad
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x360ac6cd
- (id)predicateFormat;	// 0x36158a15
- (id)symbol;	// 0x36158a25
@end

