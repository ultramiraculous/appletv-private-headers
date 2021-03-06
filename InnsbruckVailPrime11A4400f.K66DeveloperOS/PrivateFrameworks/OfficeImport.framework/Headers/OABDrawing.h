/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>


@interface OABDrawing : NSObject {
}
+ (unsigned long)addShapeIdForObject:(id)object;	// 0x318e1455
+ (void)applyRulesFromSolverContainer:(id)solverContainer state:(id)state;	// 0x317cd379
+ (id)createDrawingWithState:(id)state;	// 0x318e14fd
+ (void)finalizeWritingOfDrawing:(id)drawing state:(id)state;	// 0x318e19f1
+ (id)readBackgroundPropertiesFromDrawing:(id)drawing state:(id)state;	// 0x316dc269
+ (id)readDrawablesFromDrawing:(id)drawing state:(id)state;	// 0x316d1d19
+ (void)writeBackground:(id)background toDrawing:(id)drawing state:(id)state;	// 0x318e1b09
+ (void)writeConnectionsWithDrawing:(id)drawing state:(id)state;	// 0x318e1749
+ (id)writeDrawables:(id)drawables background:(id)background state:(id)state;	// 0x318e1c6d
@end

