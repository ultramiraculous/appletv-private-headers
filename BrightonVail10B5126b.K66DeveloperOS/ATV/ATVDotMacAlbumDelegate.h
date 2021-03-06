/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSDictionary, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacAlbumDelegate : ATVDotMacParserDelegate {
	NSString *_keyImageID;	// 24 = 0x18
	NSArray *_imageOrder;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDictionary *_startSelectors;	// 36 = 0x24
	NSDictionary *_endSelectors;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x1a0881; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x1a0b91; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x1a0871; converted property
- (id)init;	// 0x1a00f5
- (void)__atv_end_dotmac_keyImagePath;	// 0x1a050d
- (void)__atv_end_dotmac_largeImagePath;	// 0x1a0669
- (void)__atv_end_dotmac_moviePath;	// 0x1a07a9
- (void)__atv_end_dotmac_title;	// 0x1a0629
- (void)__atv_end_dotmac_userHidden;	// 0x1a06e9
- (void)__atv_end_dotmac_useritemguid;	// 0x1a0729
- (void)__atv_end_dotmac_userorder;	// 0x1a054d
- (void)__atv_end_dotmac_videoDuration;	// 0x1a07e9
- (void)__atv_end_dotmac_viewIdentifier;	// 0x1a05a9
- (void)__atv_end_dotmac_webImagePath;	// 0x1a06a9
- (void)__atv_end_iphoto_photoDate;	// 0x1a0769
- (void)__atv_end_title;	// 0x1a05e9
- (void)__atv_end_updated;	// 0x1a0829
- (id)albumID;	// 0x1a0b49
- (id)albumName;	// 0x1a0ba1
- (void)dealloc;	// 0x1a046d
// converted property getter: - (id)endSelectors;	// 0x1a0881
- (int)imageCount;	// 0x1a0b21
- (id)itemInfos;	// 0x1a0891
- (id)keyImageInfo;	// 0x1a0a61
// converted property getter: - (id)modDate;	// 0x1a0b91
- (id)sortedItemInfos;	// 0x1a0a09
// converted property getter: - (id)startSelectors;	// 0x1a0871
@end

