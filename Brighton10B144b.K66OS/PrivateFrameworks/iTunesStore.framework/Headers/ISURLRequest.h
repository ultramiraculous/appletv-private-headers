/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, SSMutableURLRequestProperties, NSData, NSInputStream, NSLock, NSArray, NSDictionary, NSURL;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
	NSLock *_lock;	// 4 = 0x4
	SSMutableURLRequestProperties *_properties;	// 8 = 0x8
}
@property(retain) NSData *HTTPBody;	// G=0x36896a49; S=0x36896b89; 
@property(retain) NSInputStream *HTTPBodyStream;	// G=0x36896a69; S=0x36896ba9; 
@property(retain) NSString *HTTPMethod;	// G=0x36896a89; S=0x36896bc9; 
@property(assign) int URLBagType;	// G=0x36896cc9; S=0x36896c29; 
@property(retain) NSArray *URLs;	// G=0x36896ce9; S=0x36896c49; 
@property(assign) int allowedRetryCount;	// G=0x368969a9; S=0x36896ae9; 
@property(retain) NSString *appleClientApplication;	// G=0x368969c9; S=0x36896b09; 
@property(assign) unsigned cachePolicy;	// G=0x368969e9; S=0x36896b29; 
@property(retain) NSDictionary *customHeaders;	// G=0x36896a09; S=0x36896b49; 
@property(assign) long long expectedContentLength;	// G=0x36896a29; S=0x36896b69; 
@property(readonly, assign) NSURL *primaryURL;	// G=0x36896ac9; 
@property(retain) NSDictionary *queryStringDictionary;	// G=0x36896aa9; S=0x36896be9; 
@property(assign) double timeoutInterval;	// G=0x36896ca9; S=0x36896c09; 
+ (id)requestWithURL:(id)url;	// 0x3689696d
- (id)init;	// 0x36896369
- (id)initWithCoder:(id)coder;	// 0x36896571
- (id)initWithRequestProperties:(id)requestProperties;	// 0x3689637d
- (id)initWithURL:(id)url;	// 0x36896439
- (id)initWithURLRequest:(id)urlrequest;	// 0x368963cd
// declared property getter: - (id)HTTPBody;	// 0x36896a49
// declared property getter: - (id)HTTPBodyStream;	// 0x36896a69
// declared property getter: - (id)HTTPMethod;	// 0x36896a89
// declared property getter: - (int)URLBagType;	// 0x36896cc9
// declared property getter: - (id)URLs;	// 0x36896ce9
- (id)_initCommon;	// 0x368962dd
// declared property getter: - (int)allowedRetryCount;	// 0x368969a9
// declared property getter: - (id)appleClientApplication;	// 0x368969c9
// declared property getter: - (unsigned)cachePolicy;	// 0x368969e9
- (id)copyWithZone:(NSZone *)zone;	// 0x36896865
// declared property getter: - (id)customHeaders;	// 0x36896a09
- (void)dealloc;	// 0x36896479
- (void)encodeWithCoder:(id)coder;	// 0x368964dd
// declared property getter: - (long long)expectedContentLength;	// 0x36896a29
- (BOOL)isEqual:(id)equal;	// 0x368968f5
// declared property getter: - (id)primaryURL;	// 0x36896ac9
// declared property getter: - (id)queryStringDictionary;	// 0x36896aa9
- (id)requestProperties;	// 0x36896d09
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x36896ae9
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x36896b09
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x36896b29
// declared property setter: - (void)setCustomHeaders:(id)headers;	// 0x36896b49
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x36896b69
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x36896b89
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x36896ba9
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x36896bc9
// declared property setter: - (void)setQueryStringDictionary:(id)dictionary;	// 0x36896be9
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x36896c09
// declared property setter: - (void)setURLBagType:(int)type;	// 0x36896c29
// declared property setter: - (void)setURLs:(id)urls;	// 0x36896c49
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x36896c69
- (void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;	// 0x36896c89
// declared property getter: - (double)timeoutInterval;	// 0x36896ca9
@end
