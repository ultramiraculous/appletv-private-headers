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
@property(readonly, retain) NSString *name;	// G=0x30d963b5; converted property
@property(readonly, retain) NSString *reason;	// G=0x30d963c5; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x30d963d5; converted property
+ (id)exceptionWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x30d96645
+ (void)raise:(id)raise format:(id)format;	// 0x30d96789
+ (void)raise:(id)raise format:(id)format arguments:(void *)arguments;	// 0x30d96725
- (id)init;	// 0x30d965c5
- (id)initWithCoder:(id)coder;	// 0x30d967b1
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x30d965dd
- (BOOL)_installStackTraceKeyIfNeeded;	// 0x30d96435
- (id)callStackReturnAddresses;	// 0x30d963e5
- (id)callStackSymbols;	// 0x30d9640d
- (id)copyWithZone:(NSZone *)zone;	// 0x30d96715
- (void)dealloc;	// 0x30d9668d
- (id)description;	// 0x30d96599
- (void)encodeWithCoder:(id)coder;	// 0x30d967b5
- (unsigned)hash;	// 0x30d96579
- (BOOL)isEqual:(id)equal;	// 0x30d96519
// converted property getter: - (id)name;	// 0x30d963b5
- (void)raise;	// 0x30d965bd
// converted property getter: - (id)reason;	// 0x30d963c5
// converted property getter: - (id)userInfo;	// 0x30d963d5
@end

