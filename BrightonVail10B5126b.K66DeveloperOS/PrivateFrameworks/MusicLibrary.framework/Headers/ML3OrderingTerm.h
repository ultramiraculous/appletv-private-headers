/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {
	NSString *_property;	// 4 = 0x4
	int _direction;	// 8 = 0x8
	NSString *_collation;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *collation;	// G=0x34711ba9; @synthesize=_collation
@property(readonly, assign, nonatomic) int direction;	// G=0x34711b99; @synthesize=_direction
@property(readonly, assign, nonatomic) NSString *property;	// G=0x346a4965; @synthesize=_property
- (id)initWithCoder:(id)coder;	// 0x34711a15
- (id)initWithProperty:(id)property;	// 0x346a2015
- (id)initWithProperty:(id)property direction:(int)direction;	// 0x34711871
- (id)initWithProperty:(id)property direction:(int)direction collation:(id)collation;	// 0x346a2045
- (void).cxx_destruct;	// 0x346acb65
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346a52d1
// declared property getter: - (id)collation;	// 0x34711ba9
- (id)copyWithZone:(NSZone *)zone;	// 0x34711975
- (id)description;	// 0x34711acd
// declared property getter: - (int)direction;	// 0x34711b99
- (void)encodeWithCoder:(id)coder;	// 0x34711979
- (unsigned)hash;	// 0x3471189d
- (BOOL)isEqual:(id)equal;	// 0x347118bd
// declared property getter: - (id)property;	// 0x346a4965
@end

