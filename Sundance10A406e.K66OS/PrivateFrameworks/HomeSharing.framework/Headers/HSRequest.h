/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSData, NSDictionary;

@interface HSRequest : NSObject {
	NSString *_action;	// 4 = 0x4
	NSData *_bodyData;	// 8 = 0x8
	NSDictionary *_headers;	// 12 = 0xc
	NSDictionary *_arguments;	// 16 = 0x10
	CFHTTPMessageRef _message;	// 20 = 0x14
	int _method;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *action;	// G=0x3189e0d9; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x3189e0e9; S=0x3189e0fd; @synthesize=_bodyData
@property(assign, nonatomic) int method;	// G=0x3189e10d; S=0x3189e11d; @synthesize=_method
+ (id)request;	// 0x3189d8f5
- (id)initWithAction:(id)action;	// 0x3189d999
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x3189de15
- (id)_defaultHeaderFields;	// 0x3189e04d
- (id)_methodStringForMethod:(int)method;	// 0x3189e0bd
- (BOOL)acceptsGzipEncoding;	// 0x3189e049
// declared property getter: - (id)action;	// 0x3189e0d9
// declared property getter: - (id)bodyData;	// 0x3189e0e9
- (id)canonicalResponseForResponse:(id)response;	// 0x3189e045
- (void)dealloc;	// 0x3189da1d
- (id)description;	// 0x3189dabd
- (id)descriptionWithoutHeaderFields;	// 0x3189db4d
// declared property getter: - (int)method;	// 0x3189e10d
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x3189dc5d
- (id)requestURLForConnection:(id)connection;	// 0x3189d831
// declared property setter: - (void)setBodyData:(id)data;	// 0x3189e0fd
// declared property setter: - (void)setMethod:(int)method;	// 0x3189e11d
- (void)setValue:(id)value forArgument:(id)argument;	// 0x3189dbed
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x3189dbcd
@end
