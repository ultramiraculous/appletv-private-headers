/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXDrawing : NSObject {
}
+ (void)readAbsoluteAnchorNode:(xmlNode *)node state:(id)state;	// 0x37a66e29
+ (EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode *)node;	// 0x37a4bb65
+ (void)readClientDataFromParentNode:(xmlNode *)parentNode state:(id)state;	// 0x37a4c089
+ (void)readDrawableNode:(xmlNode *)node anchor:(id)anchor state:(id)state;	// 0x37a4bc41
+ (void)readFromPart:(id)part state:(id)state;	// 0x37a4b825
+ (void)readOneCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x37a693b5
+ (void)readTwoCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x37a4b985
@end

