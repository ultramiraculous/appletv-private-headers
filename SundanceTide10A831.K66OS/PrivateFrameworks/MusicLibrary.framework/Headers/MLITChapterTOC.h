/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLChapterTOC.h"


@interface MLITChapterTOC : MLChapterTOC {
	unsigned _totalTimeInMS;	// 4 = 0x4
	ChapterData *_chapterDataRef;	// 8 = 0x8
	unsigned *_picCookieIndexMap;	// 12 = 0xc
	unsigned *_urlCookieIndexMap;	// 16 = 0x10
	unsigned *_nameCookieIndexMap;	// 20 = 0x14
}
@property(readonly, assign) ChapterData *chapterDataRef;	// G=0x305de2dd; converted property
@property(readonly, assign) unsigned totalTimeInMS;	// G=0x305de689; converted property
+ (unsigned **)_chapterDataCookieIndexMapForProperty:(int)property ofChapterTOC:(id)chapterTOC;	// 0x305de391
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)flattenedChapterData usingBlock:(id)block;	// 0x305dec61
+ (id)imageCacheKeyForTrackWithPID:(long long)pid startTimeMS:(unsigned)ms;	// 0x305dec01
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef totalTimeInMS:(unsigned)ms;	// 0x305de1b5
- (unsigned *)_cachedCookieIndexMapForProperty:(int)property createIfNecessary:(BOOL)necessary;	// 0x305de481
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x305debd1
// converted property getter: - (ChapterData *)chapterDataRef;	// 0x305de2dd
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x305de619
- (unsigned)countOfChapters;	// 0x305de375
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x305de5b5
- (void)dealloc;	// 0x305de2ed
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x305de699
- (id)getImageWithArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x305deb15
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x305de73d
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x305de649
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x305deb99
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x305dea75
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x305de7a1
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x305de771
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x305de7bd
// converted property getter: - (unsigned)totalTimeInMS;	// 0x305de689
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x305de955
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x305de879
- (id)urlTitleTrimmingCharacterSet;	// 0x305de85d
@end

