/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SQLitePredicate : NSObject <NSCopying> {
}
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3335f23d
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x3335f241
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x3335f239
- (id)copyWithZone:(NSZone *)zone;	// 0x3335f229
- (unsigned)hash;	// 0x3335f245
- (BOOL)isEqual:(id)equal;	// 0x3335f26d
@end

