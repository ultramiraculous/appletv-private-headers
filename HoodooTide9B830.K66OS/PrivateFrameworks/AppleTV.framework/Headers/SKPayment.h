/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x32b75281; 
@property(readonly, assign, nonatomic) int quantity;	// G=0x32b752c5; 
@property(readonly, assign, nonatomic) NSData *requestData;	// G=0x32b752e5; 
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x32b75329; 
+ (id)paymentWithProduct:(id)product;	// 0x32b75101
+ (id)paymentWithProductIdentifier:(id)productIdentifier;	// 0x32b7517d
- (id)init;	// 0x32b74f49
- (id)copyWithZone:(NSZone *)zone;	// 0x32b75001
- (void)dealloc;	// 0x32b74fad
- (BOOL)isEqual:(id)equal;	// 0x32b751e9
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x32b0dcdd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b75081
// declared property getter: - (id)productIdentifier;	// 0x32b75281
// declared property getter: - (int)quantity;	// 0x32b752c5
// declared property getter: - (id)requestData;	// 0x32b752e5
// declared property getter: - (id)requestParameters;	// 0x32b75329
@end

