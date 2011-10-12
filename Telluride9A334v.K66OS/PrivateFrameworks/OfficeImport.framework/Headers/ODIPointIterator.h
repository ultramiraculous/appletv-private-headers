/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODIPointIterator : NSObject {
}
+ (BOOL)addPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3579b0e9
+ (BOOL)isDoneForState:(ODIPointIteratorState *)state;	// 0x3579b205
+ (BOOL)isPoint:(id)point ofType:(int)type;	// 0x3579b16d
+ (id)pointsForSpecification:(id)specification startingPoint:(id)point isLast:(BOOL)last;	// 0x3579aed5
+ (id)processAttributes:(id)attributes startingPoint:(id)point isLast:(BOOL)last;	// 0x3579af65
+ (void)processChildAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3579b245
+ (void)processFollowingSiblingAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3579b2f1
+ (void)processSelfAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3579b235
@end

