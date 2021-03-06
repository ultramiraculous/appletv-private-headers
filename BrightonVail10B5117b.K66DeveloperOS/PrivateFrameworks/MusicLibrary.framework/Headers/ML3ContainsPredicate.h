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
@property(copy, nonatomic) id values;	// G=0x348b2a21; S=0x348b2a35; @synthesize=_values
+ (id)predicateWithProperty:(id)property valueSet:(id)set;	// 0x348b24f9
+ (id)predicateWithProperty:(id)property values:(id)values;	// 0x348b2499
- (id)initWithCoder:(id)coder;	// 0x348b25cd
- (id)initWithProperty:(id)property values:(id)values;	// 0x348b2559
- (void).cxx_destruct;	// 0x348b2a45
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x348b2855
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x348b2935
- (id)description;	// 0x348b27bd
- (void)encodeWithCoder:(id)coder;	// 0x348b2659
- (BOOL)isEqual:(id)equal;	// 0x348b26e1
// declared property setter: - (void)setValues:(id)values;	// 0x348b2a35
// declared property getter: - (id)values;	// 0x348b2a21
@end

