/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacRecentAlbumsRSSFeedDelegate : BRBaseParserDelegate {
	NSMutableArray *_recentAlbums;	// 12 = 0xc
	NSMutableDictionary *_currentAlbumInfo;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recentAlbums;	// G=0x19ad09; converted property
+ (id)delegate;	// 0x19abf5
- (id)init;	// 0x19ac3d
- (void)dealloc;	// 0x19aca5
- (void)endItem;	// 0x19aec5
- (void)endLink;	// 0x19afe5
- (void)endPubDate;	// 0x19af15
- (void)endTitle;	// 0x19af81
// converted property getter: - (id)recentAlbums;	// 0x19ad09
- (void)startEnclosureWithAttributes:(id)attributes;	// 0x19ad79
- (void)startItemWithAttributes:(id)attributes;	// 0x19ad35
@end

