/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class NSError, SSKeybagRequest, MPMediaItem;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
	MPMediaItem *_mediaItem;	// 8 = 0x8
	SSKeybagRequest *_request;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error;	// G=0x2e34f0d9; S=0x2e34f0e9; @synthesize=_error
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x2e34f069; S=0x2e34f079; @synthesize=_mediaItem
@property(retain, nonatomic) SSKeybagRequest *request;	// G=0x2e34f0a1; S=0x2e34f0b1; @synthesize=_request
- (id)initWithMediaItem:(id)mediaItem;	// 0x2e34ebc9
- (void).cxx_destruct;	// 0x2e34f111
- (void)dealloc;	// 0x2e34ec29
// declared property getter: - (id)error;	// 0x2e34f0d9
// declared property getter: - (id)mediaItem;	// 0x2e34f069
// declared property getter: - (id)request;	// 0x2e34f0a1
- (void)request:(id)request didFailWithError:(id)error;	// 0x2e34ef25
- (void)requestDidFinish:(id)request;	// 0x2e34efc1
- (void)resolveError:(id)error;	// 0x2e34ec89
// declared property setter: - (void)setError:(id)error;	// 0x2e34f0e9
// declared property setter: - (void)setMediaItem:(id)item;	// 0x2e34f079
// declared property setter: - (void)setRequest:(id)request;	// 0x2e34f0b1
@end

