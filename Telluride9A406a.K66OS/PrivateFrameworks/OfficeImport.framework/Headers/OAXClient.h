/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OAXClient.h"


@protocol OAXClient
+ (BOOL)sourceDrawableIsTopLevel:(xmlNode *)level;
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;
- (void)readClientDataFromGraphicDataNode:(xmlNode *)graphicDataNode toDiagram:(id)diagram state:(id)state;
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;
- (void)readClientDataFromGroupNode:(xmlNode *)groupNode toGroup:(id)group state:(id)state;
- (void)readClientDataFromNode:(xmlNode *)node toDrawable:(id)drawable state:(id)state;
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;
- (id)readOle:(xmlNode *)ole state:(id)state;
@end

__attribute__((visibility("hidden")))
@interface OAXClient : NSObject <OAXClient> {
}
+ (BOOL)sourceDrawableIsTopLevel:(xmlNode *)level;	// 0x32ac6b09
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x32a057d1
- (void)readClientDataFromGraphicDataNode:(xmlNode *)graphicDataNode toDiagram:(id)diagram state:(id)state;	// 0x329e75d9
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x32a1811d
- (void)readClientDataFromGroupNode:(xmlNode *)groupNode toGroup:(id)group state:(id)state;	// 0x329d81b9
- (void)readClientDataFromNode:(xmlNode *)node toDrawable:(id)drawable state:(id)state;	// 0x329d81c9
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x329b2bf5
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x32a0559d
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x32ac6b01
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x32ac6b05
@end

