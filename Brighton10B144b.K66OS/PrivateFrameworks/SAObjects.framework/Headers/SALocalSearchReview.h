/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, SALocalSearchRating, NSString, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *author;	// G=0x353cfc65; S=0x353cfc81; 
@property(copy, nonatomic) NSString *comment;	// G=0x353cfcd1; S=0x353cfced; 
@property(retain, nonatomic) SACalendar *lastUpdated;	// G=0x353cfd3d; S=0x353cfd91; 
@property(copy, nonatomic) NSString *publication;	// G=0x353cfdcd; S=0x353cfde9; 
@property(retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;	// G=0x353cfe39; S=0x353cfe8d; 
@property(retain, nonatomic) SALocalSearchRating *reviewRating;	// G=0x353cfec9; S=0x353cff1d; 
+ (id)review;	// 0x353cfbd5
+ (id)reviewWithDictionary:(id)dictionary context:(id)context;	// 0x353cfc19
// declared property getter: - (id)author;	// 0x353cfc65
// declared property getter: - (id)comment;	// 0x353cfcd1
- (id)encodedClassName;	// 0x353cfbc9
- (id)groupIdentifier;	// 0x353cfbb9
// declared property getter: - (id)lastUpdated;	// 0x353cfd3d
// declared property getter: - (id)publication;	// 0x353cfdcd
// declared property getter: - (id)reviewPunchOut;	// 0x353cfe39
// declared property getter: - (id)reviewRating;	// 0x353cfec9
// declared property setter: - (void)setAuthor:(id)author;	// 0x353cfc81
// declared property setter: - (void)setComment:(id)comment;	// 0x353cfced
// declared property setter: - (void)setLastUpdated:(id)updated;	// 0x353cfd91
// declared property setter: - (void)setPublication:(id)publication;	// 0x353cfde9
// declared property setter: - (void)setReviewPunchOut:(id)anOut;	// 0x353cfe8d
// declared property setter: - (void)setReviewRating:(id)rating;	// 0x353cff1d
@end

