/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSOperation.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MEImageExporter : NSOperation {
	NSString *mOriginalPath;	// 12 = 0xc
	CGImageRef mOriginalImage;	// 16 = 0x10
	CGSize mSize;	// 20 = 0x14
	NSString *mDestinationPath;	// 28 = 0x1c
	BOOL mBlackWhite;	// 32 = 0x20
}
+ (id)operationWithOriginalPath:(id)originalPath loadedImage:(CGImageRef)image size:(CGSize)size andDestinationPath:(id)path;	// 0x3637dfe9
+ (id)operationWithOriginalPath:(id)originalPath size:(CGSize)size andDestinationPath:(id)path;	// 0x3637df91
+ (id)operationWithOriginalPath:(id)originalPath size:(CGSize)size blackWhite:(BOOL)white andDestinationPath:(id)path;	// 0x3637df31
- (id)initWithOriginalPath:(id)originalPath loadedImage:(CGImageRef)image size:(CGSize)size andDestinationPath:(id)path;	// 0x3637e149
- (id)initWithOriginalPath:(id)originalPath size:(CGSize)size andDestinationPath:(id)path;	// 0x3637e07d
- (id)initWithOriginalPath:(id)originalPath size:(CGSize)size blackWhite:(BOOL)white andDestinationPath:(id)path;	// 0x3637e049
- (void)cleanup;	// 0x3637e25d
- (void)dealloc;	// 0x3637e21d
- (void)main;	// 0x3637e2cd
@end

