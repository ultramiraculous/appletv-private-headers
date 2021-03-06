/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODICycle.h"


__attribute__((visibility("hidden")))
@interface ODICycle7 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x34599e09
+ (void)addShapeForTransition:(id)transition relativeBounds:(CGRect)bounds rotation:(float)rotation state:(id)state;	// 0x3459aed9
+ (BOOL)map1NodeWithState:(id)state;	// 0x34599d4d
+ (BOOL)map2NodeWithState:(id)state;	// 0x3459aacd
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x3459a3f1
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x3459a391
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x3459ad6d
+ (CGSize)nodeSizeWithState:(id)state;	// 0x3459a8cd
@end

