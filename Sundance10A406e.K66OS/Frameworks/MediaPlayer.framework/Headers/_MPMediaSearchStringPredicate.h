/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString *_searchString;	// 4 = 0x4
	NSSet *_properties;	// 8 = 0x8
}
@property(copy, nonatomic) NSSet *properties;	// G=0x35d0220d; S=0x35d02221; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x35d021e9; S=0x35d021fd; @synthesize=_searchString
+ (id)predicateWithSearchString:(id)searchString forProperties:(id)properties;	// 0x35d01d61
- (id)initWithCoder:(id)coder;	// 0x35d01f3d
- (id)ML3PredicateForContainer;	// 0x35d3f4e1
- (id)ML3PredicateForTrack;	// 0x35d3f4a5
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x35d3f345
- (void)dealloc;	// 0x35d01ed9
- (id)description;	// 0x35d020b5
- (void)encodeWithCoder:(id)coder;	// 0x35d02015
- (unsigned)hash;	// 0x35d021a9
- (BOOL)isEqual:(id)equal;	// 0x35d02121
// declared property getter: - (id)properties;	// 0x35d0220d
// declared property getter: - (id)searchString;	// 0x35d021e9
// declared property setter: - (void)setProperties:(id)properties;	// 0x35d02221
// declared property setter: - (void)setSearchString:(id)string;	// 0x35d021fd
@end

