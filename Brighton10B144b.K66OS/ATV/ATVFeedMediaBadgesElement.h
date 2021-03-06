/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBadgesElement : ATVFeedElement {
	NSString *_audioFormat;	// 4 = 0x4
	NSString *_videoFormat;	// 8 = 0x8
	BOOL _closedCaption;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *audioFormat;	// G=0x163bfd; S=0x163c11; @synthesize=_audioFormat
@property(assign, nonatomic) BOOL closedCaption;	// G=0x163c45; S=0x163c55; @synthesize=_closedCaption
@property(copy, nonatomic) NSString *videoFormat;	// G=0x163c21; S=0x163c35; @synthesize=_videoFormat
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x163aad
// declared property getter: - (id)audioFormat;	// 0x163bfd
// declared property getter: - (BOOL)closedCaption;	// 0x163c45
- (void)dealloc;	// 0x163b99
// declared property setter: - (void)setAudioFormat:(id)format;	// 0x163c11
// declared property setter: - (void)setClosedCaption:(BOOL)caption;	// 0x163c55
// declared property setter: - (void)setVideoFormat:(id)format;	// 0x163c35
// declared property getter: - (id)videoFormat;	// 0x163c21
@end

