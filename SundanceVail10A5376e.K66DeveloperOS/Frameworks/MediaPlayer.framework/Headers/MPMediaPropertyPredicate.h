/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPredicate.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate {
	MPMediaPropertyPredicateInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// G=0x36cdbf49; S=0x36cdbf69; @synthesize
@property(assign, nonatomic) int comparisonType;	// G=0x36cdbf21; S=0x36cdbf35; 
@property(copy, nonatomic) NSString *property;	// G=0x36cdbea9; S=0x36cdbeb9; 
@property(copy, nonatomic) id value;	// G=0x36cdbee1; S=0x36cdbef5; 
+ (id)predicateWithValue:(id)value forProperty:(id)property;	// 0x36cdbd69
+ (id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;	// 0x36cdbd8d
- (id)initWithCoder:(id)coder;	// 0x36cdb801
- (id)ML3PredicateForContainer;	// 0x36d18fb1
- (id)ML3PredicateForTrack;	// 0x36d18f61
- (id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;	// 0x36d19001
// declared property getter: - (MPMediaPropertyPredicateInternal)_internal;	// 0x36cdbf49
// declared property getter: - (int)comparisonType;	// 0x36cdbf21
- (void)dealloc;	// 0x36cdb7a9
- (id)description;	// 0x36cdbb41
- (id)descriptionOfValue:(id)value forProperty:(id)property;	// 0x36cdba0d
- (void)encodeWithCoder:(id)coder;	// 0x36cdb941
- (unsigned)hash;	// 0x36cdbd25
- (BOOL)isEqual:(id)equal;	// 0x36cdbc75
// declared property getter: - (id)property;	// 0x36cdbea9
// declared property setter: - (void)setComparisonType:(int)type;	// 0x36cdbf35
// declared property setter: - (void)setProperty:(id)property;	// 0x36cdbeb9
// declared property setter: - (void)setValue:(id)value;	// 0x36cdbef5
// declared property setter: - (void)set_internal:(MPMediaPropertyPredicateInternal)internal;	// 0x36cdbf69
// declared property getter: - (id)value;	// 0x36cdbee1
@end
