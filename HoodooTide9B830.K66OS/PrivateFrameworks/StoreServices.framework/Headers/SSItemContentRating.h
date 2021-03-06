/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x30518dc5; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x30518855; 
@property(assign, nonatomic) int rank;	// G=0x30518989; S=0x30518b95; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x305189ed; S=0x30518bd9; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x30518a7d; S=0x30518bf5; 
@property(assign, nonatomic) int ratingSystem;	// G=0x30518b0d; S=0x30518c11; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x30518dfd; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x30518895; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x30518ca5; S=0x30518c61; 
+ (int)ratingSystemFromString:(id)string;	// 0x30518d55
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x30518d9d
- (id)init;	// 0x305186ed
- (id)initWithDictionary:(id)dictionary;	// 0x30518751
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30518f05
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x30518f75
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x30518f85
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x30518f9d
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x30518fa9
- (void)_setValue:(id)value forProperty:(id)property;	// 0x30519001
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x30518fb9
// declared property getter: - (id)contentRatingDictionary;	// 0x30518dc5
- (id)copyWithZone:(NSZone *)zone;	// 0x305187f1
- (void *)copyXPCEncoding;	// 0x30518ed1
- (void)dealloc;	// 0x305187a5
// declared property getter: - (BOOL)isExplicitContent;	// 0x30518855
// declared property getter: - (BOOL)isRestricted;	// 0x30518895
// declared property getter: - (int)rank;	// 0x30518989
// declared property getter: - (id)ratingDescription;	// 0x305189ed
// declared property getter: - (id)ratingLabel;	// 0x30518a7d
// declared property getter: - (int)ratingSystem;	// 0x30518b0d
// declared property getter: - (id)ratingSystemLogo;	// 0x30518dfd
// declared property setter: - (void)setRank:(int)rank;	// 0x30518b95
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x30518bd9
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x30518bf5
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x30518c11
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x30518c61
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x30518ca5
- (id)valueForProperty:(id)property;	// 0x30518d0d
@end

