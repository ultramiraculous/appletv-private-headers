/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSError : NSObject <NSCopying, NSCoding> {
@private
	void *_reserved;	// 4 = 0x4
	int _code;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSDictionary *_userInfo;	// 16 = 0x10
}
@property(readonly, assign) int code;	// G=0x33662125; converted property
@property(readonly, retain) NSString *domain;	// G=0x33681ce1; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x3368e379; converted property
+ (void)_registerBuiltInFormatters;	// 0x336af679
+ (void)_registerFormatter:(/*function-pointer*/ void *)formatter forErrorKey:(id)errorKey parameters:(const char *)parameters;	// 0x336afad5
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x336f770d
+ (id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x33692de1
+ (id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x336f77a5
+ (id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x33648e71
- (id)initWithCoder:(id)coder;	// 0x336af275
- (id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x33648eb9
- (unsigned long)_cfTypeID;	// 0x336af3a5
- (id)_cocoaErrorString:(id)string;	// 0x336affd5
- (id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;	// 0x336afd4d
- (id)_cocoaErrorStringWithKind:(id)kind;	// 0x336aed79
- (id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;	// 0x336aeca9
- (int)_collectApplicableUserInfoFormatters:(timespec **)formatters max:(int)max;	// 0x336afba9
- (id)_formatCocoaErrorString:(id)string parameters:(const char *)parameters applicableFormatters:(timespec **)formatters count:(int)count;	// 0x336afc51
- (CFStringRef)_retainedUserInfoCallBackForKey:(id)key;	// 0x336aeec1
- (BOOL)_web_errorIsInDomain:(id)domain;	// 0x3368e389
- (id)_web_failingURL;	// 0x336f7a0d
- (id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x336f77ed
- (id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;	// 0x33692e29
- (id)_web_localizedDescription;	// 0x336f796d
// converted property getter: - (int)code;	// 0x33662125
- (id)copyWithZone:(NSZone *)zone;	// 0x336930a9
- (void)dealloc;	// 0x3364acc1
- (id)description;	// 0x336af14d
// converted property getter: - (id)domain;	// 0x33681ce1
- (void)encodeWithCoder:(id)coder;	// 0x336af179
- (void)finalize;	// 0x336aec7d
- (id)helpAnchor;	// 0x336af119
- (id)localizedDescription;	// 0x3368ece9
- (id)localizedFailureReason;	// 0x336aefa1
- (id)localizedRecoveryOptions;	// 0x336af091
- (id)localizedRecoverySuggestion;	// 0x336af019
- (id)recoveryAttempter;	// 0x336af0e5
// converted property getter: - (id)userInfo;	// 0x3368e379
@end

