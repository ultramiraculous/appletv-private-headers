/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRImage;

@interface MRPatchworkPatch : NSObject {
	MRImage *_image;	// 4 = 0x4
	CGRect rectangle;	// 8 = 0x8
	BOOL needsBlend;	// 24 = 0x18
}
@property(retain, nonatomic) MRImage *image;	// G=0x333c844d; S=0x333c845d; @synthesize=_image
@property(assign, nonatomic) BOOL needsBlend;	// G=0x333c84ad; S=0x333c84bd; @synthesize
@property(assign, nonatomic) CGRect rectangle;	// G=0x333c846d; S=0x333c8491; @synthesize
- (id)initWithImage:(id)image rectangle:(CGRect)rectangle needsBlend:(BOOL)blend;	// 0x333c8365
- (void)dealloc;	// 0x333c83fd
// declared property getter: - (id)image;	// 0x333c844d
// declared property getter: - (BOOL)needsBlend;	// 0x333c84ad
// declared property getter: - (CGRect)rectangle;	// 0x333c846d
// declared property setter: - (void)setImage:(id)image;	// 0x333c845d
// declared property setter: - (void)setNeedsBlend:(BOOL)blend;	// 0x333c84bd
// declared property setter: - (void)setRectangle:(CGRect)rectangle;	// 0x333c8491
@end

