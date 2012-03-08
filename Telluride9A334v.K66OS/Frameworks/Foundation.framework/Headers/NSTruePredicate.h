/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"


@interface NSTruePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30633825
+ (id)defaultInstance;	// 0x306178fd
+ (void)initialize;	// 0x30632f6d
- (id)initWithCoder:(id)coder;	// 0x306ceb69
- (BOOL)_isDeallocating;	// 0x306ceae1
- (BOOL)_tryRetain;	// 0x306ceae5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x306cebe1
- (id)autorelease;	// 0x30633835
- (id)copyWithZone:(NSZone *)zone;	// 0x306cebc9
- (void)encodeWithCoder:(id)coder;	// 0x306ceae9
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x306cebdd
- (unsigned)hash;	// 0x306cebcd
- (BOOL)isEqual:(id)equal;	// 0x3061790d
- (id)predicateFormat;	// 0x306cebd1
- (oneway void)release;	// 0x3063391d
- (id)retain;	// 0x30633839
- (unsigned)retainCount;	// 0x306cead9
@end
