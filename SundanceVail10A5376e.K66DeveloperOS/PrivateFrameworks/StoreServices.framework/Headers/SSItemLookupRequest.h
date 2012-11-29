/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSDictionary, NSMutableDictionary;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
	NSMutableDictionary *_parameters;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSItemLookupRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) NSDictionary *parameters;	// G=0x32cb69f1; 
- (id)init;	// 0x32cb5cd5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32cb6761
- (id)_convertedValueForValue:(id)value;	// 0x32cb6cf9
- (id)_copyItemsFromResponse:(id)response expirationDate:(id)date;	// 0x32cb6af5
- (id)_errorForStatusCode:(int)statusCode;	// 0x32cb6f59
- (id)copyQueryStringParameters;	// 0x32cb6831
- (id)copyXPCEncoding;	// 0x32cb6699
- (void)dealloc;	// 0x32cb5d1d
// declared property getter: - (id)parameters;	// 0x32cb69f1
- (void)setValue:(id)value forParameter:(id)parameter;	// 0x32cb5d69
- (BOOL)start;	// 0x32cb6369
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x32cb6541
- (void)startWithItemLookupBlock:(id)itemLookupBlock;	// 0x32cb5f55
- (id)valueForParameter:(id)parameter;	// 0x32cb6225
@end
