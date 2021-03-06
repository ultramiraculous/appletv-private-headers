/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"


@interface ML3ContainsPredicate : ML3PropertyPredicate {
	id _values;	// 8 = 0x8
}
@property(copy, nonatomic) id values;	// G=0x346d5581; S=0x346d5595; @synthesize=_values
+ (id)predicateWithProperty:(id)property valueSet:(id)set;	// 0x346d5059
+ (id)predicateWithProperty:(id)property values:(id)values;	// 0x346d4ff9
- (id)initWithCoder:(id)coder;	// 0x346d512d
- (id)initWithProperty:(id)property values:(id)values;	// 0x346d50b9
- (void).cxx_destruct;	// 0x346d55a5
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346d53b5
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x346d5495
- (id)description;	// 0x346d531d
- (void)encodeWithCoder:(id)coder;	// 0x346d51b9
- (BOOL)isEqual:(id)equal;	// 0x346d5241
// declared property setter: - (void)setValues:(id)values;	// 0x346d5595
// declared property getter: - (id)values;	// 0x346d5581
@end

