/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {
	NSString *_property;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *property;	// G=0x34846825; S=0x348158d9; @synthesize=_property
- (id)initWithCoder:(id)coder;	// 0x348465d9
- (id)initWithProperty:(id)property;	// 0x34815879
- (void).cxx_destruct;	// 0x3481d7e1
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x34818ab1
- (void)encodeWithCoder:(id)coder;	// 0x34846665
- (unsigned)hash;	// 0x348467c9
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x348160c5
- (BOOL)isEqual:(id)equal;	// 0x348466ed
// declared property getter: - (id)property;	// 0x34846825
// declared property setter: - (void)setProperty:(id)property;	// 0x348158d9
@end

