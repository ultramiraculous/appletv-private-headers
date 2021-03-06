/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSDictionary;

@interface SSLookupResponse : NSObject <SSXPCCoding> {
	NSDate *_expirationDate;	// 4 = 0x4
	NSDictionary *_response;	// 8 = 0x8
}
@property(copy, nonatomic) NSDate *expirationDate;	// G=0x31947dc1; S=0x31947dd5; @synthesize=_expirationDate
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x31947c61; 
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x31947b11
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x31947ced
- (id)copyXPCEncoding;	// 0x31947c99
- (void)dealloc;	// 0x31947bb5
// declared property getter: - (id)expirationDate;	// 0x31947dc1
// declared property getter: - (id)responseDictionary;	// 0x31947c61
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x31947dd5
- (id)valueForProperty:(id)property;	// 0x31947c19
@end

