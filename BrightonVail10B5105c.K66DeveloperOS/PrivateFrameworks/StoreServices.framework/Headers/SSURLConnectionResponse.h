/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSURL, NSDictionary, NSData, NSString;

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
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x358601ed; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3586021d; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x3585fe79; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x358601c5; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x358601d5; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x3585feb1; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x358601fd; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x3586020d; @synthesize=_textEncodingName
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x3585fc55
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3585ffcd
// declared property getter: - (id)MIMEType;	// 0x358601ed
// declared property getter: - (id)URL;	// 0x3586021d
// converted property getter: - (id)allHeaderFields;	// 0x3585fe79
// declared property getter: - (id)bodyData;	// 0x358601c5
- (id)copyXPCEncoding;	// 0x3585fec1
- (void)dealloc;	// 0x3585fdc5
// declared property getter: - (long long)expectedContentLength;	// 0x358601d5
// converted property getter: - (int)statusCode;	// 0x3585feb1
// declared property getter: - (id)suggestedFilename;	// 0x358601fd
// declared property getter: - (id)textEncodingName;	// 0x3586020d
@end
