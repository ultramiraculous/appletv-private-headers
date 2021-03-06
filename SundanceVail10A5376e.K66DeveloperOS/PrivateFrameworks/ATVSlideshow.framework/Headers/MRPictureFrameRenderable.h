/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class NSString, MRImage;

@interface MRPictureFrameRenderable : MUPoolObject {
	MRImage *image;	// 8 = 0x8
	CGRect rect;	// 12 = 0xc
	CGRect innerRect;	// 28 = 0x1c
	CGRect outerRect;	// 44 = 0x2c
	NSString *where;	// 60 = 0x3c
	BOOL ignoreBlend;	// 64 = 0x40
	MRPictureFrameRenderable *next;	// 68 = 0x44
}
@property(retain, nonatomic) MRImage *image;	// G=0x3637e669; S=0x3637e679; @synthesize
@property(copy, nonatomic) NSString *where;	// G=0x3637e689; S=0x3637e69d; @synthesize
+ (XXStruct_raCX$B *)poolInfo;	// 0x3637e5b9
- (void)dealloc;	// 0x3637e629
// declared property getter: - (id)image;	// 0x3637e669
- (void)purge;	// 0x3637e5c9
// declared property setter: - (void)setImage:(id)image;	// 0x3637e679
// declared property setter: - (void)setWhere:(id)where;	// 0x3637e69d
// declared property getter: - (id)where;	// 0x3637e689
@end

