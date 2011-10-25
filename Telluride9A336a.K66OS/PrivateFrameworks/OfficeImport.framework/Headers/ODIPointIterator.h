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
+ (BOOL)addPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x34e380e9
+ (BOOL)isDoneForState:(ODIPointIteratorState *)state;	// 0x34e38205
+ (BOOL)isPoint:(id)point ofType:(int)type;	// 0x34e3816d
+ (id)pointsForSpecification:(id)specification startingPoint:(id)point isLast:(BOOL)last;	// 0x34e37ed5
+ (id)processAttributes:(id)attributes startingPoint:(id)point isLast:(BOOL)last;	// 0x34e37f65
+ (void)processChildAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x34e38245
+ (void)processFollowingSiblingAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x34e382f1
+ (void)processSelfAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x34e38235
@end

