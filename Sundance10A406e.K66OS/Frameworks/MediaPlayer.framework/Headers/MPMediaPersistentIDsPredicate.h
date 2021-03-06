/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"


@interface MPMediaPersistentIDsPredicate : MPMediaPredicate {
	long long *_persistentIDs;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	BOOL _shouldContain;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x35d01d31; @synthesize=_count
@property(readonly, assign, nonatomic) const long long *persistentIDs;	// G=0x35d01d41; @synthesize=_persistentIDs
@property(readonly, assign, nonatomic) BOOL shouldContain;	// G=0x35d01d51; @synthesize=_shouldContain
+ (id)predicateWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x35d01801
- (id)initWithCoder:(id)coder;	// 0x35d018d9
- (id)ML3PredicateForContainer;	// 0x35d3f215
- (id)ML3PredicateForTrack;	// 0x35d3f1d9
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x35d3f165
// declared property getter: - (unsigned)count;	// 0x35d01d31
- (void)dealloc;	// 0x35d01895
- (id)description;	// 0x35d01bcd
- (void)encodeWithCoder:(id)coder;	// 0x35d01a79
- (unsigned)hash;	// 0x35d01ce1
- (BOOL)isEqual:(id)equal;	// 0x35d01c5d
// declared property getter: - (const long long *)persistentIDs;	// 0x35d01d41
// declared property getter: - (BOOL)shouldContain;	// 0x35d01d51
@end

