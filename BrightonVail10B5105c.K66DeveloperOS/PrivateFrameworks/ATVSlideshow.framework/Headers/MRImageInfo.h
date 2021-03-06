/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSRecursiveLock, MRImage, NSDate, MRGIFMoviePlayer;

@interface MRImageInfo : NSObject {
	NSString *_imageBufferKey;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
	unsigned _retainCount;	// 12 = 0xc
	NSDate *_modDate;	// 16 = 0x10
	MRImage *_image;	// 20 = 0x14
	NSMutableDictionary *_options;	// 24 = 0x18
	MRGIFMoviePlayer *_gifMoviePlayer;	// 28 = 0x1c
	NSMutableDictionary *_imagesForRemoteKeys;	// 32 = 0x20
	BOOL _isMovie;	// 36 = 0x24
}
@property(retain) MRGIFMoviePlayer *gifMoviePlayer;	// G=0x324b2d41; S=0x324b2d55; @synthesize=_gifMoviePlayer
@property(retain) MRImage *image;	// G=0x324b2cc9; S=0x324b2cdd; @synthesize=_image
@property(readonly, assign) NSString *imageBufferKey;	// G=0x324b2c65; @synthesize=_imageBufferKey
@property(retain) NSMutableDictionary *imagesForRemoteKeys;	// G=0x324b2d65; S=0x324b2d79; @synthesize=_imagesForRemoteKeys
@property(assign) BOOL isMovie;	// G=0x324b2d11; S=0x324b2d29; @synthesize=_isMovie
@property(retain) NSDate *modDate;	// G=0x324b2ca5; S=0x324b2cb9; @synthesize=_modDate
@property(retain) NSMutableDictionary *options;	// G=0x324b2ced; S=0x324b2d01; @synthesize=_options
@property(assign) unsigned retainCount;	// G=0x324b2c79; S=0x324b2c8d; @synthesize=_retainCount
- (id)initWithImageBufferKey:(id)imageBufferKey;	// 0x324b2a39
- (void)cleanup;	// 0x324b2b51
- (void)dealloc;	// 0x324b2aed
// declared property getter: - (id)gifMoviePlayer;	// 0x324b2d41
// declared property getter: - (id)image;	// 0x324b2cc9
// declared property getter: - (id)imageBufferKey;	// 0x324b2c65
// declared property getter: - (id)imagesForRemoteKeys;	// 0x324b2d65
// declared property getter: - (BOOL)isMovie;	// 0x324b2d11
- (void)lock;	// 0x324b2c25
// declared property getter: - (id)modDate;	// 0x324b2ca5
// declared property getter: - (id)options;	// 0x324b2ced
// declared property getter: - (unsigned)retainCount;	// 0x324b2c79
// declared property setter: - (void)setGifMoviePlayer:(id)player;	// 0x324b2d55
// declared property setter: - (void)setImage:(id)image;	// 0x324b2cdd
// declared property setter: - (void)setImagesForRemoteKeys:(id)remoteKeys;	// 0x324b2d79
// declared property setter: - (void)setIsMovie:(BOOL)movie;	// 0x324b2d29
// declared property setter: - (void)setModDate:(id)date;	// 0x324b2cb9
// declared property setter: - (void)setOptions:(id)options;	// 0x324b2d01
// declared property setter: - (void)setRetainCount:(unsigned)count;	// 0x324b2c8d
- (void)unlock;	// 0x324b2c45
@end

