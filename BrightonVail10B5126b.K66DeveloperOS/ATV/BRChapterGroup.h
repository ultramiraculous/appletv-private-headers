/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSDictionary, ATVFeedEventGroupElement, ATVFeedDocument, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRChapterGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x384711; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x3847a1; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x3847b5; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x3846fd; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x384749; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x384725; S=0x384739; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x384771; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x384789; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x38475d; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x3845cd
- (id)initWithFeedElement:(id)feedElement;	// 0x3842bd
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x38441d
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x3847c9
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x384a39
- (unsigned)chapterCount;	// 0x3846d5
// declared property getter: - (id)chapters;	// 0x384711
- (void)dealloc;	// 0x38460d
// declared property getter: - (id)feedDictionary;	// 0x3847a1
// declared property getter: - (id)feedElement;	// 0x3847b5
// declared property getter: - (id)groupName;	// 0x3846fd
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x384749
// declared property getter: - (id)refreshURL;	// 0x384725
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x384739
// declared property getter: - (BOOL)showChapterMarkers;	// 0x384771
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x384789
// declared property getter: - (id)startDate;	// 0x38475d
@end

