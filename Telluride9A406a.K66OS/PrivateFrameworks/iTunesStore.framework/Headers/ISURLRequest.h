/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary, NSData, NSInputStream, NSURL, NSString, SSMutableURLRequestProperties, NSLock;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
	NSLock *_lock;	// 4 = 0x4
	SSMutableURLRequestProperties *_properties;	// 8 = 0x8
}
@property(retain) NSData *HTTPBody;	// G=0x341e11dd; S=0x341e131d; 
@property(retain) NSInputStream *HTTPBodyStream;	// G=0x341e11fd; S=0x341e133d; 
@property(retain) NSString *HTTPMethod;	// G=0x341e121d; S=0x341e135d; 
@property(assign) int URLBagType;	// G=0x341e145d; S=0x341e13bd; 
@property(retain) NSArray *URLs;	// G=0x341e147d; S=0x341e13dd; 
@property(assign) int allowedRetryCount;	// G=0x341e113d; S=0x341e127d; 
@property(retain) NSString *appleClientApplication;	// G=0x341e115d; S=0x341e129d; 
@property(assign) unsigned cachePolicy;	// G=0x341e117d; S=0x341e12bd; 
@property(retain) NSDictionary *customHeaders;	// G=0x341e119d; S=0x341e12dd; 
@property(assign) long long expectedContentLength;	// G=0x341e11bd; S=0x341e12fd; 
@property(readonly, assign) NSURL *primaryURL;	// G=0x341e125d; 
@property(retain) NSDictionary *queryStringDictionary;	// G=0x341e123d; S=0x341e137d; 
@property(assign) double timeoutInterval;	// G=0x341e143d; S=0x341e139d; 
+ (id)requestWithURL:(id)url;	// 0x341e1101
- (id)init;	// 0x341e0ad5
- (id)initWithCoder:(id)coder;	// 0x341e0ce1
- (id)initWithRequestProperties:(id)requestProperties;	// 0x341e0ae9
- (id)initWithURL:(id)url;	// 0x341e0bad
- (id)initWithURLRequest:(id)urlrequest;	// 0x341e0b3d
// declared property getter: - (id)HTTPBody;	// 0x341e11dd
// declared property getter: - (id)HTTPBodyStream;	// 0x341e11fd
// declared property getter: - (id)HTTPMethod;	// 0x341e121d
// declared property getter: - (int)URLBagType;	// 0x341e145d
// declared property getter: - (id)URLs;	// 0x341e147d
- (id)_initCommon;	// 0x341e0a4d
// declared property getter: - (int)allowedRetryCount;	// 0x341e113d
// declared property getter: - (id)appleClientApplication;	// 0x341e115d
// declared property getter: - (unsigned)cachePolicy;	// 0x341e117d
- (id)copyWithZone:(NSZone *)zone;	// 0x341e0fe9
// declared property getter: - (id)customHeaders;	// 0x341e119d
- (void)dealloc;	// 0x341e0bed
- (void)encodeWithCoder:(id)coder;	// 0x341e0c4d
// declared property getter: - (long long)expectedContentLength;	// 0x341e11bd
- (BOOL)isEqual:(id)equal;	// 0x341e1081
// declared property getter: - (id)primaryURL;	// 0x341e125d
// declared property getter: - (id)queryStringDictionary;	// 0x341e123d
- (id)requestProperties;	// 0x341e149d
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x341e127d
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x341e129d
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x341e12bd
// declared property setter: - (void)setCustomHeaders:(id)headers;	// 0x341e12dd
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x341e12fd
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x341e131d
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x341e133d
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x341e135d
// declared property setter: - (void)setQueryStringDictionary:(id)dictionary;	// 0x341e137d
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x341e139d
// declared property setter: - (void)setURLBagType:(int)type;	// 0x341e13bd
// declared property setter: - (void)setURLs:(id)urls;	// 0x341e13dd
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x341e13fd
- (void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;	// 0x341e141d
// declared property getter: - (double)timeoutInterval;	// 0x341e143d
@end

