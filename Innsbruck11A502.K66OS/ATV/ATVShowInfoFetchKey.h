/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BRMediaType, NSURL;

__attribute__((visibility("hidden")))
@interface ATVShowInfoFetchKey : XXUnknownSuperclass {
	NSString *_cachedItemID;	// 4 = 0x4
	NSString *_itemID;	// 8 = 0x8
	BRMediaType *_mediaType;	// 12 = 0xc
	NSString *_podcastGUID;	// 16 = 0x10
	NSURL *_podcastURL;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *itemID;	// G=0x1c0e9d; S=0x1c0e55; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x1c0f55; S=0x1c0f65; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x1c0f8d; S=0x1c0fa1; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x1c0fb1; S=0x1c0fc1; @synthesize=_podcastURL
+ (id)fetchKeyFromEpisodeDictionary:(id)episodeDictionary;	// 0x1c0e01
- (void).cxx_destruct;	// 0x1c0fe9
// declared property getter: - (id)itemID;	// 0x1c0e9d
// declared property getter: - (id)mediaType;	// 0x1c0f55
// declared property getter: - (id)podcastGUID;	// 0x1c0f8d
// declared property getter: - (id)podcastURL;	// 0x1c0fb1
// declared property setter: - (void)setItemID:(id)anId;	// 0x1c0e55
// declared property setter: - (void)setMediaType:(id)type;	// 0x1c0f65
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x1c0fa1
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x1c0fc1
@end

