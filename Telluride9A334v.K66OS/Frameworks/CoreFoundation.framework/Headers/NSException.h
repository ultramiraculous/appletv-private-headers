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
@property(readonly, retain) NSString *name;	// G=0x348fe3e5; converted property
@property(readonly, retain) NSString *reason;	// G=0x348fe3f5; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x348fe405; converted property
+ (id)exceptionWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x348fe675
+ (void)raise:(id)raise format:(id)format;	// 0x348fe7b9
+ (void)raise:(id)raise format:(id)format arguments:(void *)arguments;	// 0x348fe755
- (id)init;	// 0x348fe5f5
- (id)initWithCoder:(id)coder;	// 0x348fe7e1
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x348fe60d
- (BOOL)_installStackTraceKeyIfNeeded;	// 0x348fe465
- (id)callStackReturnAddresses;	// 0x348fe415
- (id)callStackSymbols;	// 0x348fe43d
- (id)copyWithZone:(NSZone *)zone;	// 0x348fe745
- (void)dealloc;	// 0x348fe6bd
- (id)description;	// 0x348fe5c9
- (void)encodeWithCoder:(id)coder;	// 0x348fe7e5
- (unsigned)hash;	// 0x348fe5a9
- (BOOL)isEqual:(id)equal;	// 0x348fe549
// converted property getter: - (id)name;	// 0x348fe3e5
- (void)raise;	// 0x348fe5ed
// converted property getter: - (id)reason;	// 0x348fe3f5
// converted property getter: - (id)userInfo;	// 0x348fe405
@end

