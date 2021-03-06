/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

@interface SSItemMedia : NSObject {
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x35846ff1; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x35846f85; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x35846f95; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x35846fa5; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x35846fbd; S=0x35846fd1; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x35846fe1; @synthesize=_protected
- (id)init;	// 0x35846b8d
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x35846d41
// declared property getter: - (id)URL;	// 0x35846ff1
- (void)dealloc;	// 0x35846bcd
- (id)description;	// 0x35846c31
// declared property getter: - (int)durationInMilliseconds;	// 0x35846f85
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x35846f95
- (unsigned)hash;	// 0x35846ca9
- (BOOL)isEqual:(id)equal;	// 0x35846cc9
// declared property getter: - (BOOL)isProtectedMedia;	// 0x35846fe1
// declared property getter: - (long long)mediaFileSize;	// 0x35846fa5
// declared property getter: - (id)mediaKind;	// 0x35846fbd
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x35846fd1
@end

