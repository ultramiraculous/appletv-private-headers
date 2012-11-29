/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSURL, NSString;

@interface MLTrackImportChapter : NSObject <NSCopying> {
	NSData *_imageData;	// 4 = 0x4
	NSString *_imageCacheKey;	// 8 = 0x8
	unsigned _startTimeInMilliseconds;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
	NSURL *_url;	// 20 = 0x14
	NSString *_urlTitle;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URL;	// G=0x30b08295; S=0x30b082a9; @synthesize=_url
@property(copy, nonatomic) NSString *URLTitle;	// G=0x30b082b9; S=0x30b082cd; @synthesize=_urlTitle
@property(copy, nonatomic) NSString *imageCacheKey;	// G=0x30b082dd; S=0x30b082f1; @synthesize=_imageCacheKey
@property(copy, nonatomic) NSData *imageData;	// G=0x30b0822d; S=0x30b08241; @synthesize=_imageData
@property(assign, nonatomic) unsigned startTimeInMilliseconds;	// G=0x30b08251; S=0x30b08261; @synthesize=_startTimeInMilliseconds
@property(copy, nonatomic) NSString *title;	// G=0x30b08271; S=0x30b08285; @synthesize=_title
- (void).cxx_destruct;	// 0x30b08301
// declared property getter: - (id)URL;	// 0x30b08295
// declared property getter: - (id)URLTitle;	// 0x30b082b9
- (int)compare:(id)compare;	// 0x30b08099
- (id)copyWithZone:(NSZone *)zone;	// 0x30b07fa1
- (id)description;	// 0x30b07acd
// declared property getter: - (id)imageCacheKey;	// 0x30b082dd
// declared property getter: - (id)imageData;	// 0x30b0822d
- (BOOL)isEqualIgnoringTimesAndTitle:(id)title;	// 0x30b080e9
- (void)normalizeProperties;	// 0x30b07a05
// declared property setter: - (void)setImageCacheKey:(id)key;	// 0x30b082f1
// declared property setter: - (void)setImageData:(id)data;	// 0x30b08241
// declared property setter: - (void)setStartTimeInMilliseconds:(unsigned)milliseconds;	// 0x30b08261
// declared property setter: - (void)setTitle:(id)title;	// 0x30b08285
// declared property setter: - (void)setURL:(id)url;	// 0x30b082a9
// declared property setter: - (void)setURLTitle:(id)title;	// 0x30b082cd
// declared property getter: - (unsigned)startTimeInMilliseconds;	// 0x30b08251
// declared property getter: - (id)title;	// 0x30b08271
@end
