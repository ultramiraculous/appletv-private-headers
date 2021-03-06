/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSArray;

@interface MPMediaCompoundPredicate : MPMediaPredicate {
	NSArray *_predicates;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *predicates;	// G=0x35d017ed; @synthesize=_predicates
+ (id)predicateMatchingPredicates:(id)predicates;	// 0x35d015b5
- (id)initWithCoder:(id)coder;	// 0x35d0164d
- (id)initWithPredicates:(id)predicates;	// 0x35d01561
- (id)ML3PredicateForContainer;	// 0x35d3f331
- (id)ML3PredicateForTrack;	// 0x35d3f31d
- (id)_ML3PredicateForEntityTypeSelector:(SEL)entityTypeSelector;	// 0x35d3f251
- (void)dealloc;	// 0x35d01601
- (id)description;	// 0x35d016ed
- (void)encodeWithCoder:(id)coder;	// 0x35d016bd
- (unsigned)hash;	// 0x35d017a5
- (BOOL)isEqual:(id)equal;	// 0x35d01749
// declared property getter: - (id)predicates;	// 0x35d017ed
@end

