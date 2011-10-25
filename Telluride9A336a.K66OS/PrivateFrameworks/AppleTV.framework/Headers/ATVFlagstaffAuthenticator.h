/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAuthenticator.h"
#import "NSXMLParserDelegate.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffAuthenticator : BRUserPasswordAuthenticator <NSXMLParserDelegate> {
@private
	BOOL _requestSucceded;	// 44 = 0x2c
	BOOL _inIdentificationSection;	// 45 = 0x2d
	BOOL _inStatusSection;	// 46 = 0x2e
	NSMutableString *_currentProperty;	// 48 = 0x30
}
- (id)_URLRequest;	// 0x33a09685
- (void)_failAuthenticationWithError:(id)error;	// 0x33a09ad9
- (void)_handleAuthenticateResponse:(id)response;	// 0x33a0994d
- (void)_sendAuthenticationRequest;	// 0x33a0988d
- (void)dealloc;	// 0x33a09629
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x33a09d35
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33a09b31
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x33a09f2d
@end

