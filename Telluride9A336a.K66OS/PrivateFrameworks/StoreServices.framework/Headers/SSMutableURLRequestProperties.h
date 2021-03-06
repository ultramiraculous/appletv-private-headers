/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x3420057d; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x34200f45; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x3420065d; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x3420073d; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x3420081d; @dynamic
@property(retain) NSURL *URL;	// S=0x34200af9; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x34200a19; @dynamic
@property(assign) int URLBagType;	// S=0x342010a9; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x34201129; @dynamic
@property(copy) NSArray *URLs;	// S=0x34201209; @dynamic
@property(assign) int allowedRetryCount;	// S=0x34200305; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x34200385; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x34200405; @dynamic
@property(assign) long long expectedContentLength;	// S=0x342004e5; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x342008a1; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x34201025; @dynamic
@property(assign) double timeoutInterval;	// S=0x34200981; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x34200b5d; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x342002f5
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x34200305
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x34200385
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x34200405
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x342004e5
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x3420057d
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x34200f45
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x3420065d
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x3420073d
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x3420081d
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x342008a1
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x34201025
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x34200981
// declared property setter: - (void)setURL:(id)url;	// 0x34200af9
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x34200a19
// declared property setter: - (void)setURLBagType:(int)type;	// 0x342010a9
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x34201129
// declared property setter: - (void)setURLs:(id)urls;	// 0x34201209
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x34200b5d
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x34200c3d
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x34200dc1
@end

