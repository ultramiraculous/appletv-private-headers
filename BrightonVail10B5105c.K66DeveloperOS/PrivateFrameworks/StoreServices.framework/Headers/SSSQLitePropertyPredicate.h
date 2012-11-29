/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSQLitePredicate.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying> {
	NSString *_property;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *property;	// G=0x3588c765; @synthesize=_property
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x3588c715
- (id)copyWithZone:(NSZone *)zone;	// 0x3588c629
- (void)dealloc;	// 0x3588c5dd
- (unsigned)hash;	// 0x3588c639
- (BOOL)isEqual:(id)equal;	// 0x3588c685
// declared property getter: - (id)property;	// 0x3588c765
@end
