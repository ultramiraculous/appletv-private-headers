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
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x34f2637d; @synthesize=mCGImage
@property(readonly, assign, nonatomic) UIImage *UIImage;	// G=0x35131ef1; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x35131e3d; @synthesize=mOrientation
@property(readonly, assign, nonatomic) float scale;	// G=0x34f26351; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x34f262c9; 
+ (id)imageNamed:(id)named;	// 0x35131a7d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x35131b31
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x35131b6d
+ (id)imageWithContentsOfFile:(id)file;	// 0x35131ab9
+ (id)imageWithData:(id)data;	// 0x35131af5
+ (id)imageWithUIImage:(id)uiimage;	// 0x35131e4d
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x35131d35
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x34f25fd1
- (id)initWithContentsOfFile:(id)file;	// 0x35131bb5
- (id)initWithData:(id)data;	// 0x34f25e3d
- (id)initWithImageSourceRef:(CGImageSourceRef)imageSourceRef;	// 0x34f25f19
- (id)initWithUIImage:(id)uiimage;	// 0x35131e89
// declared property getter: - (CGImageRef)CGImage;	// 0x34f2637d
- (id)JPEGRepresentationWithCompressionQuality:(float)compressionQuality;	// 0x35131d6d
- (id)PNGRepresentation;	// 0x35131d59
// declared property getter: - (id)UIImage;	// 0x35131ef1
- (void)dealloc;	// 0x34f277e9
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 isFlipped:(BOOL)flipped;	// 0x34f26081
// declared property getter: - (int)imageOrientation;	// 0x35131e3d
- (BOOL)isEmpty;	// 0x35131d81
// declared property getter: - (float)scale;	// 0x34f26351
// declared property getter: - (CGSize)size;	// 0x34f262c9
@end

