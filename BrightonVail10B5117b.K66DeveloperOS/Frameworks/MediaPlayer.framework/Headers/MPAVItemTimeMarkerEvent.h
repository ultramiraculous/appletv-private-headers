/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject {
	MPAVItem *_AVItem;	// 4 = 0x4
	MPTimeMarker *_chapterMarker;	// 8 = 0x8
	MPTimeMarker *_artworkMarker;	// 12 = 0xc
	MPTimeMarker *_URLMarker;	// 16 = 0x10
	MPTimeMarker *_closedCaptionMarker;	// 20 = 0x14
}
@property(retain, nonatomic) MPAVItem *AVItem;	// G=0x31d69071; S=0x31d69081; @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker *URLMarker;	// G=0x31d690d1; S=0x31d690e1; @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker *artworkMarker;	// G=0x31d690b1; S=0x31d690c1; @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker *chapterMarker;	// G=0x31d69091; S=0x31d690a1; @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker;	// G=0x31d690f1; S=0x31d69101; @synthesize=_closedCaptionMarker
- (id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;	// 0x31d68e1d
// declared property getter: - (id)AVItem;	// 0x31d69071
// declared property getter: - (id)URLMarker;	// 0x31d690d1
// declared property getter: - (id)artworkMarker;	// 0x31d690b1
// declared property getter: - (id)chapterMarker;	// 0x31d69091
// declared property getter: - (id)closedCaptionMarker;	// 0x31d690f1
- (id)crossedMarkerOfType:(int)type;	// 0x31d6901d
- (void)dealloc;	// 0x31d68f7d
// declared property setter: - (void)setAVItem:(id)item;	// 0x31d69081
// declared property setter: - (void)setArtworkMarker:(id)marker;	// 0x31d690c1
// declared property setter: - (void)setChapterMarker:(id)marker;	// 0x31d690a1
// declared property setter: - (void)setClosedCaptionMarker:(id)marker;	// 0x31d69101
// declared property setter: - (void)setURLMarker:(id)marker;	// 0x31d690e1
@end

