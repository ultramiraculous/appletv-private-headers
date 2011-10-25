/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODICycle.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODICycle7 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x34e31049
+ (void)addShapeForTransition:(id)transition relativeBounds:(CGRect)bounds rotation:(float)rotation state:(id)state;	// 0x34e30f55
+ (BOOL)map1NodeWithState:(id)state;	// 0x34e30d51
+ (BOOL)map2NodeWithState:(id)state;	// 0x34e30ba9
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x34e310d5
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x34e30ff1
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x34e30ded
+ (CGSize)nodeSizeWithState:(id)state;	// 0x34e310f5
@end

