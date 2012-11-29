/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MRGIFMoviePlayer : NSObject {
	NSString *_path;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	CGImageSourceRef _imageSource;	// 16 = 0x10
	CGImageRef _currentImage;	// 20 = 0x14
	unsigned long _currentIndex;	// 24 = 0x18
	unsigned long _numberOfImages;	// 28 = 0x1c
	double _nextImageTime;	// 32 = 0x20
	double _playTimeOffset;	// 40 = 0x28
	float _imageDuration;	// 48 = 0x30
	BOOL _isPlaying;	// 52 = 0x34
}
@property(readonly, assign) CGImageRef currentImage;	// G=0x32120dad; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x321211d1; S=0x32120d41; @synthesize=_isPlaying
- (id)initWithPath:(id)path andSize:(CGSize)size;	// 0x321209b5
- (void)cleanup;	// 0x32120b71
// declared property getter: - (CGImageRef)currentImage;	// 0x32120dad
- (void)dealloc;	// 0x32120b31
- (void)getNextImage;	// 0x32120e9d
// declared property getter: - (BOOL)isPlaying;	// 0x321211d1
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x32120d41
- (void)setTime:(double)time;	// 0x32120c9d
@end
