/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString, NSDictionary;

__attribute__((objc_exception))
@interface NSException : NSObject <NSCopying, NSCoding> {
@private
	NSString *name;	// 4 = 0x4
	NSString *reason;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	id reserved;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x3078c3e5; converted property
@property(readonly, retain) NSString *reason;	// G=0x3078c3f5; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x3078c405; converted property
+ (id)exceptionWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x3078c675
+ (void)raise:(id)raise format:(id)format;	// 0x3078c7b9
+ (void)raise:(id)raise format:(id)format arguments:(void *)arguments;	// 0x3078c755
- (id)init;	// 0x3078c5f5
- (id)initWithCoder:(id)coder;	// 0x3078c7e1
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x3078c60d
- (BOOL)_installStackTraceKeyIfNeeded;	// 0x3078c465
- (id)callStackReturnAddresses;	// 0x3078c415
- (id)callStackSymbols;	// 0x3078c43d
- (id)copyWithZone:(NSZone *)zone;	// 0x3078c745
- (void)dealloc;	// 0x3078c6bd
- (id)description;	// 0x3078c5c9
- (void)encodeWithCoder:(id)coder;	// 0x3078c7e5
- (unsigned)hash;	// 0x3078c5a9
- (BOOL)isEqual:(id)equal;	// 0x3078c549
// converted property getter: - (id)name;	// 0x3078c3e5
- (void)raise;	// 0x3078c5ed
// converted property getter: - (id)reason;	// 0x3078c3f5
// converted property getter: - (id)userInfo;	// 0x3078c405
@end

