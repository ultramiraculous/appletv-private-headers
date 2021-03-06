/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPImage.h"

@class NSData, TSUImage;

@interface MFPBitmapImage : MFPImage {
	NSData *mBitmapData;	// 4 = 0x4
	TSUImage *mPhoneBitmapImage;	// 8 = 0x8
	CGSize mPixelSize;	// 12 = 0xc
	CGSize mPointSize;	// 20 = 0x14
}
- (id)initWithBitmapData:(id)bitmapData;	// 0x34afdff9
- (id).cxx_construct;	// 0x34afe29d
- (void)dealloc;	// 0x34afe11d
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 unit:(int)unit effect:(id)effect;	// 0x34afe169
- (id)phoneImage;	// 0x34afe25d
- (CGSize)pixelSize;	// 0x34afe26d
- (CGSize)pointSize;	// 0x34afe285
@end

