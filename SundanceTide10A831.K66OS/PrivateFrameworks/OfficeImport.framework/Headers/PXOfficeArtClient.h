/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXClient.h"
#import "OfficeImport-Structs.h"

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient {
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x36b02525
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x36b0236d
- (id)initWithState:(id)state;	// 0x36afde55
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x36b2f351
- (id)presentationState;	// 0x36c51255
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x36b26749
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x36b055d9
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x36b02159
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x36b026cd
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x36b2572d
@end

