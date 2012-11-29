/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, SALocalSearchReviewList, NSString, NSArray, NSURL;

@interface SAMovieMovie : SADomainObject {
}
@property(copy, nonatomic) NSArray *actors;	// G=0x30508c31; S=0x30508c4d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x30508c9d; S=0x30508cb9; 
@property(copy, nonatomic) NSArray *genres;	// G=0x30508d09; S=0x30508d25; 
@property(copy, nonatomic) NSURL *hiResTrailerUri;	// G=0x30508d75; S=0x30508df1; 
@property(copy, nonatomic) NSURL *iTunesUri;	// G=0x30508e51; S=0x30508ecd; 
@property(assign, nonatomic) BOOL is3d;	// G=0x30508f2d; S=0x30508fa5; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;	// G=0x30508fe9; S=0x30509005; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForRent;	// G=0x30509055; S=0x30509071; 
@property(copy, nonatomic) NSURL *lowResTrailerUri;	// G=0x305090c1; S=0x3050913d; 
@property(copy, nonatomic) NSString *name;	// G=0x3050919d; S=0x305091b9; 
@property(copy, nonatomic) NSArray *posterImages;	// G=0x30509209; S=0x30509285; 
@property(copy, nonatomic) NSURL *posterUri;	// G=0x305092ed; S=0x30509369; 
@property(copy, nonatomic) NSNumber *qualityRating;	// G=0x305093c9; S=0x305093e5; 
@property(copy, nonatomic) NSString *rating;	// G=0x30509435; S=0x30509451; 
@property(retain, nonatomic) SALocalSearchReviewList *reviews;	// G=0x305094a1; S=0x305094f5; 
@property(copy, nonatomic) NSURL *rottenTomatoesUri;	// G=0x30509531; S=0x305095ad; 
@property(assign, nonatomic) int runtimeInMinutes;	// G=0x3050960d; S=0x3050967d; 
@property(copy, nonatomic) NSArray *studios;	// G=0x305096c1; S=0x305096dd; 
@property(copy, nonatomic) NSString *synopsis;	// G=0x3050972d; S=0x30509749; 
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;	// G=0x30509799; S=0x305097b5; 
@property(copy, nonatomic) NSArray *theaterShowtimes;	// G=0x30509805; S=0x30509881; 
@property(copy, nonatomic) NSDate *theatricalReleaseDate;	// G=0x305098e9; S=0x30509905; 
@property(copy, nonatomic) NSURL *trailerUri;	// G=0x30509955; S=0x305099d1; 
+ (id)movie;	// 0x30508ba1
+ (id)movieWithDictionary:(id)dictionary context:(id)context;	// 0x30508be5
// declared property getter: - (id)actors;	// 0x30508c31
// declared property getter: - (id)directors;	// 0x30508c9d
- (id)encodedClassName;	// 0x30508b95
// declared property getter: - (id)genres;	// 0x30508d09
- (id)groupIdentifier;	// 0x30508b85
// declared property getter: - (id)hiResTrailerUri;	// 0x30508d75
// declared property getter: - (id)iTunesUri;	// 0x30508e51
// declared property getter: - (BOOL)is3d;	// 0x30508f2d
// declared property getter: - (id)isAvailableOnItunesForPurchase;	// 0x30508fe9
// declared property getter: - (id)isAvailableOnItunesForRent;	// 0x30509055
// declared property getter: - (id)lowResTrailerUri;	// 0x305090c1
// declared property getter: - (id)name;	// 0x3050919d
// declared property getter: - (id)posterImages;	// 0x30509209
// declared property getter: - (id)posterUri;	// 0x305092ed
// declared property getter: - (id)qualityRating;	// 0x305093c9
// declared property getter: - (id)rating;	// 0x30509435
// declared property getter: - (id)reviews;	// 0x305094a1
// declared property getter: - (id)rottenTomatoesUri;	// 0x30509531
// declared property getter: - (int)runtimeInMinutes;	// 0x3050960d
// declared property setter: - (void)setActors:(id)actors;	// 0x30508c4d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x30508cb9
// declared property setter: - (void)setGenres:(id)genres;	// 0x30508d25
// declared property setter: - (void)setHiResTrailerUri:(id)uri;	// 0x30508df1
// declared property setter: - (void)setITunesUri:(id)uri;	// 0x30508ecd
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x30508fa5
// declared property setter: - (void)setIsAvailableOnItunesForPurchase:(id)purchase;	// 0x30509005
// declared property setter: - (void)setIsAvailableOnItunesForRent:(id)rent;	// 0x30509071
// declared property setter: - (void)setLowResTrailerUri:(id)uri;	// 0x3050913d
// declared property setter: - (void)setName:(id)name;	// 0x305091b9
// declared property setter: - (void)setPosterImages:(id)images;	// 0x30509285
// declared property setter: - (void)setPosterUri:(id)uri;	// 0x30509369
// declared property setter: - (void)setQualityRating:(id)rating;	// 0x305093e5
// declared property setter: - (void)setRating:(id)rating;	// 0x30509451
// declared property setter: - (void)setReviews:(id)reviews;	// 0x305094f5
// declared property setter: - (void)setRottenTomatoesUri:(id)uri;	// 0x305095ad
// declared property setter: - (void)setRuntimeInMinutes:(int)minutes;	// 0x3050967d
// declared property setter: - (void)setStudios:(id)studios;	// 0x305096dd
// declared property setter: - (void)setSynopsis:(id)synopsis;	// 0x30509749
// declared property setter: - (void)setTheaterShowtimeSearchRegionDescription:(id)description;	// 0x305097b5
// declared property setter: - (void)setTheaterShowtimes:(id)showtimes;	// 0x30509881
// declared property setter: - (void)setTheatricalReleaseDate:(id)date;	// 0x30509905
// declared property setter: - (void)setTrailerUri:(id)uri;	// 0x305099d1
// declared property getter: - (id)studios;	// 0x305096c1
// declared property getter: - (id)synopsis;	// 0x3050972d
// declared property getter: - (id)theaterShowtimeSearchRegionDescription;	// 0x30509799
// declared property getter: - (id)theaterShowtimes;	// 0x30509805
// declared property getter: - (id)theatricalReleaseDate;	// 0x305098e9
// declared property getter: - (id)trailerUri;	// 0x30509955
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x30509a31
@end
