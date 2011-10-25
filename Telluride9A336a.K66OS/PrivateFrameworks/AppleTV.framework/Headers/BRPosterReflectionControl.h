/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@protocol BRPosterImageDataSource;

__attribute__((visibility("hidden")))
@interface BRPosterReflectionControl : BRControl {
@private
	id<BRPosterImageDataSource> _imageDataSource;	// 48 = 0x30
	float _cornerRadius;	// 52 = 0x34
	float _reflectionHeight;	// 56 = 0x38
}
- (id)initWithImageDataSource:(id)imageDataSource reflectionHeight:(float)height cornerRadius:(float)radius;	// 0x33aed315
- (void)dealloc;	// 0x33aed38d
- (void)drawInContext:(CGContextRef)context;	// 0x33aed3b9
@end

