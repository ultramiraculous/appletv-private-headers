/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSDictionary, NSData;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {
	NSDictionary *_allHeaderFields;	// 4 = 0x4
	NSData *_body;	// 8 = 0x8
	long long _expectedContentLength;	// 12 = 0xc
	NSString *_mimeType;	// 20 = 0x14
	int _statusCode;	// 24 = 0x18
	NSString *_suggestedFilename;	// 28 = 0x1c
	NSString *_textEncodingName;	// 32 = 0x20
	NSURL *_url;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x31928ff5; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x31929025; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x31928c81; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x31928fcd; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x31928fdd; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x31928cb9; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x31929005; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x31929015; @synthesize=_textEncodingName
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x31928a5d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x31928dd5
// declared property getter: - (id)MIMEType;	// 0x31928ff5
// declared property getter: - (id)URL;	// 0x31929025
// converted property getter: - (id)allHeaderFields;	// 0x31928c81
// declared property getter: - (id)bodyData;	// 0x31928fcd
- (id)copyXPCEncoding;	// 0x31928cc9
- (void)dealloc;	// 0x31928bcd
// declared property getter: - (long long)expectedContentLength;	// 0x31928fdd
// converted property getter: - (int)statusCode;	// 0x31928cb9
// declared property getter: - (id)suggestedFilename;	// 0x31929005
// declared property getter: - (id)textEncodingName;	// 0x31929015
@end

