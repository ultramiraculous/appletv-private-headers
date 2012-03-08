/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSArray, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacAccountDelegate : ATVDotMacParserDelegate {
@private
	NSArray *_albumOrder;	// 24 = 0x18
	NSArray *_videoOrder;	// 28 = 0x1c
	NSArray *_slideshowOrder;	// 32 = 0x20
	NSDate *_modDate;	// 36 = 0x24
	NSDictionary *_startSelectors;	// 40 = 0x28
	NSDictionary *_endSelectors;	// 44 = 0x2c
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x35cc0989; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x35cc1665; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x35cc0979; converted property
- (id)init;	// 0x35cbfbcd
- (void)__atv_end_dotmac_iMovieUserOrder;	// 0x35cc02e5
- (void)__atv_end_dotmac_keyImagePath;	// 0x35cc0639
- (void)__atv_end_dotmac_posterPath;	// 0x35cc07b9
- (void)__atv_end_dotmac_redacted;	// 0x35cc06b9
- (void)__atv_end_dotmac_title;	// 0x35cc052d
- (void)__atv_end_dotmac_type;	// 0x35cc04ed
- (void)__atv_end_dotmac_userHidden;	// 0x35cc0739
- (void)__atv_end_dotmac_useritemguid;	// 0x35cc0779
- (void)__atv_end_dotmac_userorder;	// 0x35cc01d9
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x35cc0939
- (void)__atv_end_dotmac_videoDurationMed;	// 0x35cc08b9
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x35cc0839
- (void)__atv_end_dotmac_videoPathLrg;	// 0x35cc08f9
- (void)__atv_end_dotmac_videoPathMed;	// 0x35cc0879
- (void)__atv_end_dotmac_videoPathSmall;	// 0x35cc07f9
- (void)__atv_end_dotmac_viewIdentifier;	// 0x35cc04ad
- (void)__atv_end_dotmac_webImagePath;	// 0x35cc0679
- (void)__atv_end_iphoto_userHidden;	// 0x35cc06f9
- (void)__atv_end_slideshowUserOrder;	// 0x35cc03f1
- (void)__atv_end_title;	// 0x35cc046d
- (void)__atv_end_updated;	// 0x35cc05bd
- (void)__atv_start_link:(id)link;	// 0x35cc056d
- (id)_publicMedia;	// 0x35cc17fd
- (void)_updateEntriesWithDateTaken:(id)dateTaken withType:(id)type;	// 0x35cc1721
- (void)dealloc;	// 0x35cc0129
- (id)displayName;	// 0x35cc1675
// converted property getter: - (id)endSelectors;	// 0x35cc0989
- (id)listOfAlbumInfos;	// 0x35cc0a21
- (id)listOfAlbumInfosAlphabetically;	// 0x35cc0be5
- (id)listOfAlbumInfosUserSort;	// 0x35cc0cb9
- (id)listOfVideoInfos;	// 0x35cc0d45
- (id)listOfVideoInfosAlphabetically;	// 0x35cc0fa9
- (id)listOfVideoInfosUserSort;	// 0x35cc107d
- (id)mediaUserSort;	// 0x35cc0999
// converted property getter: - (id)modDate;	// 0x35cc1665
- (id)mostRecentAlbumInfo;	// 0x35cc149d
- (id)slideshowInfos;	// 0x35cc1109
- (id)slideshowInfosAlphabetically;	// 0x35cc133d
- (id)slideshowInfosUserSort;	// 0x35cc1411
// converted property getter: - (id)startSelectors;	// 0x35cc0979
@end
