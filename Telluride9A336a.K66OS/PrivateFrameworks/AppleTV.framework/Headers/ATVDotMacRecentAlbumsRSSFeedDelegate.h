/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacRecentAlbumsRSSFeedDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_recentAlbums;	// 12 = 0xc
	NSMutableDictionary *_currentAlbumInfo;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recentAlbums;	// G=0x339b42b1; converted property
+ (id)delegate;	// 0x339b41a5
- (id)init;	// 0x339b41ed
- (void)dealloc;	// 0x339b4251
- (void)endItem;	// 0x339b446d
- (void)endLink;	// 0x339b458d
- (void)endPubDate;	// 0x339b44c1
- (void)endTitle;	// 0x339b4529
// converted property getter: - (id)recentAlbums;	// 0x339b42b1
- (void)startEnclosureWithAttributes:(id)attributes;	// 0x339b4321
- (void)startItemWithAttributes:(id)attributes;	// 0x339b42dd
@end

