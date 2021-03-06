/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"


@interface CIImage : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
}
+ (id)emptyImage;	// 0x33c844dd
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x33c834c1
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x33c83459
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x33c829a9
+ (id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x33c829c9
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x33c83ed5
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x33c83ef5
+ (id)imageWithColor:(id)color;	// 0x33c84029
+ (id)imageWithContentsOfFile:(id)file;	// 0x33c84951
+ (id)imageWithContentsOfFile:(id)file options:(id)options;	// 0x33c84971
+ (id)imageWithContentsOfURL:(id)url;	// 0x33c84889
+ (id)imageWithContentsOfURL:(id)url options:(id)options;	// 0x33c8489d
+ (id)imageWithData:(id)data;	// 0x33c846cd
+ (id)imageWithData:(id)data options:(id)options;	// 0x33c84719
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface;	// 0x33c82441
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x33c82461
+ (id)imageWithInternalRepresentation:(void *)internalRepresentation;	// 0x33c85969
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x33c839a1
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x33c83a01
+ (id)noiseImage;	// 0x33c841ed
+ (id)noiseImagePadded;	// 0x33c84355
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x33c83649
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x33c836dd
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x33c82a15
- (id)initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x33c82db1
- (id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;	// 0x33c831b9
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x33c83f41
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x33c83f55
- (id)initWithCoder:(id)coder;	// 0x33c856e1
- (id)initWithColor:(id)color;	// 0x33c84155
- (id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;	// 0x33c84071
- (id)initWithContentsOfFile:(id)file;	// 0x33c849bd
- (id)initWithContentsOfFile:(id)file options:(id)options;	// 0x33c849d1
- (id)initWithContentsOfURL:(id)url;	// 0x33c848e9
- (id)initWithContentsOfURL:(id)url options:(id)options;	// 0x33c848fd
- (id)initWithData:(id)data;	// 0x33c84765
- (id)initWithData:(id)data options:(id)options;	// 0x33c84779
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x33c824ad
- (id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x33c824c1
- (id)initWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x33c83a59
- (id)initWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x33c83b49
- (id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;	// 0x33ca3ec1
- (id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;	// 0x33ca3839
- (id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x33c83529
- (id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x33c82a29
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x33c859b1
- (void *)_internalRepresentation;	// 0x33c85a11
- (id)_scaleImageToMaxDimension:(unsigned)maxDimension;	// 0x33ca2ba1
- (id)autoAdjustmentFilters;	// 0x33ca37f1
- (id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;	// 0x33ca2c61
- (id)autoAdjustmentFiltersWithOptions:(id)options;	// 0x33ca3805
- (id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;	// 0x33ca43bd
- (id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;	// 0x33ca43e9
- (id)copyWithZone:(NSZone *)zone;	// 0x33c854d1
- (void)dealloc;	// 0x33c85305
- (id)description;	// 0x33c85349
- (void)encodeWithCoder:(id)coder;	// 0x33c854e1
- (CGRect)extent;	// 0x33c852e9
- (id)filteredImage:(id)image keysAndValues:(id)values;	// 0x33c85441
- (id)imageByApplyingBlur:(double)blur;	// 0x33c85051
- (id)imageByApplyingGamma:(double)gamma;	// 0x33c84ef9
- (id)imageByApplyingLanczosScale:(double)scale aspectRatio:(double)ratio;	// 0x33c85199
- (id)imageByApplyingOrientation:(int)orientation;	// 0x33c84665
- (id)imageByApplyingTransform:(CGAffineTransform)transform;	// 0x33c84a11
- (id)imageByCroppingToRect:(CGRect)rect;	// 0x33c84b99
- (id)imageByPremultiplying;	// 0x33c84d15
- (id)imageByUnpremultiplying;	// 0x33c84e01
- (CGAffineTransform)imageTransformForOrientation:(int)orientation;	// 0x33c84531
- (id)properties;	// 0x33c8542d
- (CGRect)regionOfInterestForImage:(id)image inRect:(CGRect)rect;	// 0x33c85a21
@end

