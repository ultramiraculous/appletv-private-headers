/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSXMLParser, BRResolution, NSMutableArray, BRMovieTrailer, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x3679a5
- (void)dealloc;	// 0x367a29
- (void)endCast;	// 0x3680ad
- (void)endCopyright;	// 0x367ee9
- (void)endDescription;	// 0x367f99
- (void)endDirector;	// 0x367f41
- (void)endGenre;	// 0x368149
- (void)endLarge;	// 0x36839d
- (void)endLocation;	// 0x3682a9
- (void)endMovieinfo;	// 0x367b91
- (void)endName;	// 0x368005
- (void)endPostdate;	// 0x367e39
- (void)endPoster;	// 0x368359
- (void)endRating;	// 0x367d89
- (void)endReleasedate;	// 0x367e91
- (void)endRuntime;	// 0x367d31
- (void)endStudio;	// 0x367de1
- (void)endTitle;	// 0x367cb5
- (void)endXlarge;	// 0x368301
- (void)setWeakReferenceToParser:(id)parser;	// 0x367ab5
- (void)startCastWithAttributes:(id)attributes;	// 0x368059
- (void)startGenreWithAttributes:(id)attributes;	// 0x3680f5
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x367ac5
@end

