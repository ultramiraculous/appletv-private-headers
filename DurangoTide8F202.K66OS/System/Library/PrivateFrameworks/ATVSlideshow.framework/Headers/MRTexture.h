/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class EAGLContext;

@interface MRTexture : NSObject {
	EAGLContext *mParentGLContext;	// 4 = 0x4
	unsigned long mWidth;	// 8 = 0x8
	unsigned long mHeight;	// 12 = 0xc
	unsigned mTextureName;	// 16 = 0x10
	unsigned mTextureTarget;	// 20 = 0x14
	unsigned long mPixelFormat;	// 24 = 0x18
	unsigned mFramebufferName;	// 28 = 0x1c
	EAGLContext *mGLContext;	// 32 = 0x20
}
@property(readonly, assign) unsigned framebufferName;	// G=0x3151f045; @synthesize=mFramebufferName
@property(readonly, assign) EAGLContext *glContext;	// G=0x3151f025; @synthesize=mGLContext
@property(readonly, assign) unsigned long height;	// G=0x3151eff5; @synthesize=mHeight
@property(readonly, assign) unsigned long pixelFormat;	// G=0x3151f035; @synthesize=mPixelFormat
@property(readonly, assign) unsigned textureName;	// G=0x3151f005; @synthesize=mTextureName
@property(readonly, assign) unsigned textureTarget;	// G=0x3151f015; @synthesize=mTextureTarget
@property(readonly, assign) unsigned long width;	// G=0x3151efe5; @synthesize=mWidth
- (id)initWithData:(void *)data width:(unsigned long)width height:(unsigned long)height rowBytes:(unsigned long)bytes inGLContext:(id)glcontext options:(id)options;	// 0x3151ec35
- (id)initWithIOSurface:(IOSurfaceRef)iosurface inGLContext:(id)glcontext options:(id)options;	// 0x3151ea55
- (id)initWithSize:(CGSize)size inGLContext:(id)glcontext options:(id)options;	// 0x3151e75d
- (void)cleanup;	// 0x3151eec5
- (void)dealloc;	// 0x3151ee45
- (void)finalize;	// 0x3151ee85
// declared property getter: - (unsigned)framebufferName;	// 0x3151f045
// declared property getter: - (id)glContext;	// 0x3151f025
// declared property getter: - (unsigned long)height;	// 0x3151eff5
// declared property getter: - (unsigned long)pixelFormat;	// 0x3151f035
// declared property getter: - (unsigned)textureName;	// 0x3151f005
// declared property getter: - (unsigned)textureTarget;	// 0x3151f015
// declared property getter: - (unsigned long)width;	// 0x3151efe5
@end
