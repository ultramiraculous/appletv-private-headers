/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedVideoElement.h"

@class NSArray, NSDate, ATVFeedTrickPlayConfigElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHTTPLiveStreamingVideoElement : ATVFeedVideoElement {
	BOOL _indefiniteDuration;	// 4 = 0x4
	ATVFeedTrickPlayConfigElement *_trickPlayConfig;	// 8 = 0x8
	NSArray *_eventGroups;	// 12 = 0xc
	NSArray *_requiredEventGroups;	// 16 = 0x10
	float _bookmarkNetTimeSec;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _beginPlaybackAtStartDate;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x148569; S=0x148579; @synthesize=_beginPlaybackAtStartDate
@property(assign, nonatomic) float bookmarkNetTimeSec;	// G=0x148529; S=0x148539; @synthesize=_bookmarkNetTimeSec
@property(retain, nonatomic) NSArray *eventGroups;	// G=0x1484e9; S=0x1484f9; @synthesize=_eventGroups
@property(assign, nonatomic) BOOL indefiniteDuration;	// G=0x1484a9; S=0x1484b9; @synthesize=_indefiniteDuration
@property(retain, nonatomic) NSArray *requiredEventGroups;	// G=0x148509; S=0x148519; @synthesize=_requiredEventGroups
@property(retain, nonatomic) NSDate *startDate;	// G=0x148549; S=0x148559; @synthesize=_startDate
@property(retain, nonatomic) ATVFeedTrickPlayConfigElement *trickPlayConfig;	// G=0x1484c9; S=0x1484d9; @synthesize=_trickPlayConfig
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1480e9
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x148569
// declared property getter: - (float)bookmarkNetTimeSec;	// 0x148529
- (void)dealloc;	// 0x14841d
// declared property getter: - (id)eventGroups;	// 0x1484e9
// declared property getter: - (BOOL)indefiniteDuration;	// 0x1484a9
// declared property getter: - (id)requiredEventGroups;	// 0x148509
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x148579
// declared property setter: - (void)setBookmarkNetTimeSec:(float)sec;	// 0x148539
// declared property setter: - (void)setEventGroups:(id)groups;	// 0x1484f9
// declared property setter: - (void)setIndefiniteDuration:(BOOL)duration;	// 0x1484b9
// declared property setter: - (void)setRequiredEventGroups:(id)groups;	// 0x148519
// declared property setter: - (void)setStartDate:(id)date;	// 0x148559
// declared property setter: - (void)setTrickPlayConfig:(id)config;	// 0x1484d9
// declared property getter: - (id)startDate;	// 0x148549
// declared property getter: - (id)trickPlayConfig;	// 0x1484c9
@end

