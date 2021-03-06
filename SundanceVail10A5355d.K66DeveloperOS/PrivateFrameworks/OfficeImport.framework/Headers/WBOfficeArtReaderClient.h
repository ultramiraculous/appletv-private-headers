/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (bool)allowOverlap:(EshContentProperties *)overlap;	// 0x31caa281
+ (bool)behindText:(EshContentProperties *)text;	// 0x31caa2c9
+ (BOOL)escherIsFullySupported;	// 0x31caa48d
+ (int)horizontalPosition:(EshContentProperties *)position;	// 0x31caa025
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x31d1215d
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x31ca9c1d
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x31e0e29d
+ (void)readFrom:(EshContentProperties *)from to:(id)to;	// 0x31ca9e81
+ (int)relativeHorizontalPosition:(EshContentProperties *)position;	// 0x31caa061
+ (int)relativeVerticalPosition:(EshContentProperties *)position;	// 0x31caa0d9
+ (BOOL)tablesAreAllowed;	// 0x31d12159
+ (int)verticalPosition:(EshContentProperties *)position;	// 0x31caa09d
+ (double)wrapDistanceBottom:(EshContentProperties *)bottom;	// 0x31caa229
+ (double)wrapDistanceLeft:(EshContentProperties *)left;	// 0x31caa115
+ (double)wrapDistanceRight:(EshContentProperties *)right;	// 0x31caa1c9
+ (double)wrapDistanceTop:(EshContentProperties *)top;	// 0x31caa171
@end

