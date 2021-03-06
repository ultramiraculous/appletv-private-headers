/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPImage.h"

@class NSData;

@interface MFPMetafileImage : MFPImage {
	NSData *mMetafileData;	// 4 = 0x4
}
- (id)initWithMetafileData:(id)metafileData;	// 0x34aff2a1
- (void)dealloc;	// 0x34aff2f5
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 unit:(int)unit effect:(id)effect;	// 0x34aff341
- (id)phoneImage;	// 0x34aff831
@end

