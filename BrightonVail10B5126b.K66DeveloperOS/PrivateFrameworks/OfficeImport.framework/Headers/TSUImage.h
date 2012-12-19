/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage;

@interface TSUImage : NSObject {
	CGImageRef mCGImage;	// 4 = 0x4
	CGSize mSize;	// 8 = 0x8
	float mScale;	// 16 = 0x10
	int mOrientation;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x348cc37d; @synthesize=mCGImage
@property(readonly, assign, nonatomic) UIImage *UIImage;	// G=0x34ad7ef1; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x34ad7e3d; @synthesize=mOrientation
@property(readonly, assign, nonatomic) float scale;	// G=0x348cc351; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x348cc2c9; 
+ (id)imageNamed:(id)named;	// 0x34ad7a7d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x34ad7b31
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x34ad7b6d
+ (id)imageWithContentsOfFile:(id)file;	// 0x34ad7ab9
+ (id)imageWithData:(id)data;	// 0x34ad7af5
+ (id)imageWithUIImage:(id)uiimage;	// 0x34ad7e4d
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x34ad7d35
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x348cbfd1
- (id)initWithContentsOfFile:(id)file;	// 0x34ad7bb5
- (id)initWithData:(id)data;	// 0x348cbe3d
- (id)initWithImageSourceRef:(CGImageSourceRef)imageSourceRef;	// 0x348cbf19
- (id)initWithUIImage:(id)uiimage;	// 0x34ad7e89
// declared property getter: - (CGImageRef)CGImage;	// 0x348cc37d
- (id)JPEGRepresentationWithCompressionQuality:(float)compressionQuality;	// 0x34ad7d6d
- (id)PNGRepresentation;	// 0x34ad7d59
// declared property getter: - (id)UIImage;	// 0x34ad7ef1
- (void)dealloc;	// 0x348cd7e9
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 isFlipped:(BOOL)flipped;	// 0x348cc081
// declared property getter: - (int)imageOrientation;	// 0x34ad7e3d
- (BOOL)isEmpty;	// 0x34ad7d81
// declared property getter: - (float)scale;	// 0x348cc351
// declared property getter: - (CGSize)size;	// 0x348cc2c9
@end
