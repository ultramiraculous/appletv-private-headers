/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary;

@interface MUMathematicalExpression : NSObject {
	FunctionInterpreter *mInterpreter;	// 4 = 0x4
	NSMutableDictionary *mIndicesForVariables;	// 8 = 0x8
}
+ (double)evaluateString:(id)string;	// 0x3335cd81
- (id)init;	// 0x3335cc2d
- (id)initWithString:(id)string error:(id *)error;	// 0x3335d235
- (void)cleanup;	// 0x3335cc45
- (void)dealloc;	// 0x3335cd41
- (double)evaluate;	// 0x3335cfc5
- (void)finalize;	// 0x3335d1f5
- (void)resetAllVariables;	// 0x3335cbcd
- (void)setValue:(double)value forVariable:(id)variable;	// 0x3335cc81
- (void)setVariableValues:(id)values;	// 0x3335d0ad
- (double)valueForVariable:(id)variable;	// 0x3335cce1
@end

