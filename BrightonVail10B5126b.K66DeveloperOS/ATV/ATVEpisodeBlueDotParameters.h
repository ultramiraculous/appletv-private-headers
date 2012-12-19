/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, BRMediaType, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATVEpisodeBlueDotParameters : XXUnknownSuperclass {
	NSString *_podcastGUID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
	NSURL *_podcastURL;	// 16 = 0x10
	double _durationSD;	// 20 = 0x14
	BOOL _hasBeenPurchased;	// 28 = 0x1c
	NSDate *_releaseDate;	// 32 = 0x20
	double _durationHD;	// 36 = 0x24
}
@property(assign, nonatomic) double durationHD;	// G=0x4080fd; S=0x408115; @synthesize=_durationHD
@property(assign, nonatomic) double durationSD;	// G=0x408079; S=0x408091; @synthesize=_durationSD
@property(assign, nonatomic) BOOL hasBeenPurchased;	// G=0x4080a5; S=0x4080b5; @synthesize=_hasBeenPurchased
@property(copy, nonatomic) NSString *itemID;	// G=0x40801d; S=0x408031; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x407fe5; S=0x407ff5; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x407fc1; S=0x407fd5; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x408041; S=0x408051; @synthesize=_podcastURL
@property(retain, nonatomic) NSDate *releaseDate;	// G=0x4080c5; S=0x4080d5; @synthesize=_releaseDate
+ (id)episodeBlueDotParametersFromItemDictionary:(id)itemDictionary;	// 0x408199
- (void).cxx_destruct;	// 0x408129
// declared property getter: - (double)durationHD;	// 0x4080fd
// declared property getter: - (double)durationSD;	// 0x408079
// declared property getter: - (BOOL)hasBeenPurchased;	// 0x4080a5
- (BOOL)isEqual:(id)equal;	// 0x407d09
// declared property getter: - (id)itemID;	// 0x40801d
- (id)makeFetchKey;	// 0x3be771
// declared property getter: - (id)mediaType;	// 0x407fe5
// declared property getter: - (id)podcastGUID;	// 0x407fc1
// declared property getter: - (id)podcastURL;	// 0x408041
// declared property getter: - (id)releaseDate;	// 0x4080c5
// declared property setter: - (void)setDurationHD:(double)hd;	// 0x408115
// declared property setter: - (void)setDurationSD:(double)sd;	// 0x408091
// declared property setter: - (void)setHasBeenPurchased:(BOOL)purchased;	// 0x4080b5
// declared property setter: - (void)setItemID:(id)anId;	// 0x408031
// declared property setter: - (void)setMediaType:(id)type;	// 0x407ff5
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x407fd5
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x408051
// declared property setter: - (void)setReleaseDate:(id)date;	// 0x4080d5
@end
