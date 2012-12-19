/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSStringPredicateOperator.h"


__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
	int _contextLock;	// 16 = 0x10
	XXStruct_WqRe1B *_regexContext;	// 20 = 0x14
}
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x31a3593d
- (void)_clearContext;	// 0x31a35985
- (BOOL)_shouldEscapeForLike;	// 0x31a35abd
- (void)dealloc;	// 0x31a359c1
- (void)finalize;	// 0x31a35a1d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31a35ac1
- (SEL)selector;	// 0x31a35aad
- (id)symbol;	// 0x31a35a79
@end
