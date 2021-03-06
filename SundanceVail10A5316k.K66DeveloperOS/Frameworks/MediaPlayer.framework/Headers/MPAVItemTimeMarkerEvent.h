/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPTimeMarker, MPAVItem;

@interface MPAVItemTimeMarkerEvent : NSObject {
@private
	MPAVItem *_AVItem;	// 4 = 0x4
	MPTimeMarker *_chapterMarker;	// 8 = 0x8
	MPTimeMarker *_artworkMarker;	// 12 = 0xc
	MPTimeMarker *_URLMarker;	// 16 = 0x10
	MPTimeMarker *_closedCaptionMarker;	// 20 = 0x14
}
@property(retain, nonatomic) MPAVItem *AVItem;	// G=0x34829811; S=0x34829821; @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker *URLMarker;	// G=0x34829871; S=0x34829881; @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker *artworkMarker;	// G=0x34829851; S=0x34829861; @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker *chapterMarker;	// G=0x34829831; S=0x34829841; @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker;	// G=0x34829891; S=0x348298a1; @synthesize=_closedCaptionMarker
- (id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;	// 0x348295bd
// declared property getter: - (id)AVItem;	// 0x34829811
// declared property getter: - (id)URLMarker;	// 0x34829871
// declared property getter: - (id)artworkMarker;	// 0x34829851
// declared property getter: - (id)chapterMarker;	// 0x34829831
// declared property getter: - (id)closedCaptionMarker;	// 0x34829891
- (id)crossedMarkerOfType:(int)type;	// 0x348297bd
- (void)dealloc;	// 0x3482971d
// declared property setter: - (void)setAVItem:(id)item;	// 0x34829821
// declared property setter: - (void)setArtworkMarker:(id)marker;	// 0x34829861
// declared property setter: - (void)setChapterMarker:(id)marker;	// 0x34829841
// declared property setter: - (void)setClosedCaptionMarker:(id)marker;	// 0x348298a1
// declared property setter: - (void)setURLMarker:(id)marker;	// 0x34829881
@end

