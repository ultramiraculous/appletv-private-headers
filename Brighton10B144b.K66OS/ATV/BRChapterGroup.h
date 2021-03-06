/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDate, ATVFeedEventGroupElement, NSDictionary, ATVFeedDocument, NSString;

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
@property(readonly, assign) NSArray *chapters;	// G=0x3892a1; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x389331; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x389345; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x38928d; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x3892d9; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x3892b5; S=0x3892c9; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x389301; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x389319; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x3892ed; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x38915d
- (id)initWithFeedElement:(id)feedElement;	// 0x388e4d
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x388fad
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x389359
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x3895c9
- (unsigned)chapterCount;	// 0x389265
// declared property getter: - (id)chapters;	// 0x3892a1
- (void)dealloc;	// 0x38919d
// declared property getter: - (id)feedDictionary;	// 0x389331
// declared property getter: - (id)feedElement;	// 0x389345
// declared property getter: - (id)groupName;	// 0x38928d
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x3892d9
// declared property getter: - (id)refreshURL;	// 0x3892b5
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x3892c9
// declared property getter: - (BOOL)showChapterMarkers;	// 0x389301
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x389319
// declared property getter: - (id)startDate;	// 0x3892ed
@end

