/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import "HSXPCCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString, SSAccount, NSURL, NSDictionary;

@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSCopying, NSMutableCopying> {
	SSAccount *_account;	// 4 = 0x4
	NSDictionary *_urlBag;	// 8 = 0x8
	NSURL *_baseURL;	// 12 = 0xc
	NSString *_buildIdentifier;	// 16 = 0x10
	NSDictionary *_cookieHeaders;	// 20 = 0x14
	NSString *_userAgent;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) SSAccount *account;	// G=0x318b0c8d; @synthesize=_account
@property(readonly, assign, nonatomic) NSURL *baseURL;	// G=0x318b0bf1; @synthesize=_baseURL
@property(readonly, assign, nonatomic) NSString *buildIdentifier;	// G=0x318b0c9d; @synthesize=_buildIdentifier
@property(readonly, assign, nonatomic) NSDictionary *cookieHeaders;	// G=0x318b0cad; @synthesize=_cookieHeaders
@property(readonly, assign, nonatomic) NSDictionary *urlBag;	// G=0x318b0cbd; @synthesize=_urlBag
@property(readonly, assign, nonatomic) NSString *userAgent;	// G=0x318b0ccd; @synthesize=_userAgent
- (id)init;	// 0x318afe31
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x318b01ad
- (id)_copyXPCDictonaryFromDictonary:(id)dictonary;	// 0x318b067d
- (id)_dictonaryFromXPCDictonary:(id)xpcdictonary;	// 0x318b0919
// declared property getter: - (id)account;	// 0x318b0c8d
// declared property getter: - (id)baseURL;	// 0x318b0bf1
// declared property getter: - (id)buildIdentifier;	// 0x318b0c9d
// declared property getter: - (id)cookieHeaders;	// 0x318b0cad
- (id)copyWithZone:(NSZone *)zone;	// 0x318b0435
- (id)copyXPCEncoding;	// 0x318affdd
- (void)dealloc;	// 0x318aff29
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x318b0559
// declared property getter: - (id)urlBag;	// 0x318b0cbd
// declared property getter: - (id)userAgent;	// 0x318b0ccd
@end

