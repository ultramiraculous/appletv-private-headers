/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSDate, NSArray, NSString, ATVXMLElement;

__attribute__((visibility("hidden")))
@interface ATVFeedEventGroupElement : ATVFeedRootElement {
	BOOL _beginPlaybackAtStartDate;	// 4 = 0x4
	BOOL _showChapterMarkers;	// 5 = 0x5
	BOOL _showDescriptionOnChapterSkip;	// 6 = 0x6
	NSString *_title;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSArray *_events;	// 20 = 0x14
	ATVXMLElement *_xml;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x13a119; S=0x13a129; @synthesize=_beginPlaybackAtStartDate
@property(retain, nonatomic) NSArray *events;	// G=0x13a139; S=0x13a149; @synthesize=_events
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x13a0c1; S=0x13a0d1; @synthesize=_refreshIntervalSec
@property(assign, nonatomic) BOOL showChapterMarkers;	// G=0x13a171; S=0x13a181; @synthesize=_showChapterMarkers
@property(assign, nonatomic) BOOL showDescriptionOnChapterSkip;	// G=0x13a191; S=0x13a1a1; @synthesize=_showDescriptionOnChapterSkip
@property(retain, nonatomic) NSDate *startDate;	// G=0x13a0e1; S=0x13a0f1; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x13a09d; S=0x13a0b1; @synthesize=_title
@property(readonly, assign, nonatomic) ATVXMLElement *xml;	// G=0x13a1b1; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x139c3d
- (void).cxx_destruct;	// 0x13a1c1
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x13a119
// declared property getter: - (id)events;	// 0x13a139
// declared property getter: - (int)refreshIntervalSec;	// 0x13a0c1
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x13a129
// declared property setter: - (void)setEvents:(id)events;	// 0x13a149
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x13a0d1
// declared property setter: - (void)setShowChapterMarkers:(BOOL)markers;	// 0x13a181
// declared property setter: - (void)setShowDescriptionOnChapterSkip:(BOOL)skip;	// 0x13a1a1
// declared property setter: - (void)setStartDate:(id)date;	// 0x13a0f1
// declared property setter: - (void)setTitle:(id)title;	// 0x13a0b1
// declared property getter: - (BOOL)showChapterMarkers;	// 0x13a171
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x13a191
// declared property getter: - (id)startDate;	// 0x13a0e1
// declared property getter: - (id)title;	// 0x13a09d
// declared property getter: - (id)xml;	// 0x13a1b1
@end
