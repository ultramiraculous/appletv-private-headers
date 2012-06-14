/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBGraphic : NSObject {
}
+ (int)objectTypeForShape:(id)shape;	// 0x3133e84d
+ (void)readChart:(id)chart chartIndex:(int)index state:(id)state;	// 0x31243525
+ (id)readGraphicWithDictionary:(id)dictionary state:(id)state;	// 0x311d66e5
+ (void)readGraphicsInChart:(id)chart state:(id)state;	// 0x3124652d
+ (void)readGraphicsWithState:(id)state;	// 0x311d65c5
+ (void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x312f4889
+ (id)readMainChartWithState:(id)state;	// 0x312b6065
+ (void)readNotesWithDictionary:(id)dictionary state:(id)state;	// 0x311d77c5
+ (void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x31297cc9
@end
