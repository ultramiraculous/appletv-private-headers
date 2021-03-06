/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSString, YTVideo, NSURL;

@interface YTCaptionTrack : NSObject {
	YTVideo *_video;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	NSURL *_captionTrackURL;	// 16 = 0x10
	BOOL _speechRecognition;	// 20 = 0x14
}
@property(retain, nonatomic) NSURL *captionTrackURL;	// G=0x3671517d; S=0x3671518d; @synthesize=_captionTrackURL
@property(retain, nonatomic) NSString *language;	// G=0x3671515d; S=0x3671516d; @synthesize=_language
@property(assign, nonatomic) BOOL speechRecognition;	// G=0x3671519d; S=0x367151ad; @synthesize=_speechRecognition
@property(retain, nonatomic) NSString *title;	// G=0x3671513d; S=0x3671514d; @synthesize=_title
@property(retain, nonatomic) YTVideo *video;	// G=0x3671511d; S=0x3671512d; @synthesize=_video
// declared property getter: - (id)captionTrackURL;	// 0x3671517d
- (void)dealloc;	// 0x36715011
- (id)description;	// 0x3671509d
// declared property getter: - (id)language;	// 0x3671515d
// declared property setter: - (void)setCaptionTrackURL:(id)url;	// 0x3671518d
// declared property setter: - (void)setLanguage:(id)language;	// 0x3671516d
// declared property setter: - (void)setSpeechRecognition:(BOOL)recognition;	// 0x367151ad
// declared property setter: - (void)setTitle:(id)title;	// 0x3671514d
// declared property setter: - (void)setVideo:(id)video;	// 0x3671512d
// declared property getter: - (BOOL)speechRecognition;	// 0x3671519d
// declared property getter: - (id)title;	// 0x3671513d
// declared property getter: - (id)video;	// 0x3671511d
@end

