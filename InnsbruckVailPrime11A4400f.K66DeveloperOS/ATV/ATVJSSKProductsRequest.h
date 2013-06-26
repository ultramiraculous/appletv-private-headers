/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SKProductsRequestDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, SKProductsRequest;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : XXUnknownSuperclass <SKProductsRequestDelegate> {
	BOOL _isJSObjectProtected;	// 4 = 0x4
	SKProductsRequest *_skRequest;	// 8 = 0x8
	ATVJSContext *_atvContext;	// 12 = 0xc
	OpaqueJSValue *_object;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x134ec1; S=0x134ed1; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x134f01; S=0x134f11; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x134ee1; S=0x134ef1; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x134ea1; S=0x134eb1; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x134569
// declared property getter: - (id)atvContext;	// 0x134ec1
- (void)dealloc;	// 0x134af5
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x134f01
// declared property getter: - (OpaqueJSValue *)object;	// 0x134ee1
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x134b71
- (void)request:(id)request didFailWithError:(id)error;	// 0x134d85
- (void)requestDidFinish:(id)request;	// 0x134ca5
// declared property setter: - (void)setAtvContext:(id)context;	// 0x134ed1
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x134f11
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x134ef1
// declared property setter: - (void)setSkRequest:(id)request;	// 0x134eb1
// declared property getter: - (id)skRequest;	// 0x134ea1
@end
