/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBColorScheme : NSObject {
}
+ (void)addColorWithIndex:(int)index fromScheme:(PptColorSchemeAtom *)scheme atIndex:(int)index3 inScheme:(id)scheme4;	// 0x3481f825
+ (void)addColorWithIndex:(int)index fromScheme:(PptColorSchemeAtom *)scheme colorTransform:(/*function-pointer*/ void *)transform atIndex:(int)index4 inScheme:(id)scheme5;	// 0x3481f859
+ (void)readFromColorScheme:(PptColorSchemeAtom *)colorScheme toColorScheme:(id)colorScheme2 colorMap:(id)map state:(id)state;	// 0x3481f539
+ (void)writeFromSlideBase:(id)slideBase toSlideContainer:(id)slideContainer state:(id)state;	// 0x34a714c9
@end

