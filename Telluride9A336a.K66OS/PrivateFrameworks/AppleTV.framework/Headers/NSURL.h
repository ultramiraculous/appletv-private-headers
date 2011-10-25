/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x33b69f51
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x33b6a0a5
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x33b69d49
- (id)_queryParameters;	// 0x33b69ae5
- (id)decodedQueryParameters;	// 0x33b69c21
- (BOOL)isHTTPFamilyURL;	// 0x33b69aa1
- (BOOL)isHTTPSURL;	// 0x33b69a61
- (BOOL)isHTTPURL;	// 0x33b69a21
- (id)queryParameters;	// 0x33b69c11
- (id)valueForParam:(id)param;	// 0x33b69fc1
@end

@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x33bc429d
+ (id)escapedStringForString:(id)string;	// 0x33bc4405
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x33bc4445
+ (id)unescapedStringForString:(id)string;	// 0x33bc4541
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x33bc458d
- (void)enumerateQueryWithBlock:(id)block;	// 0x33bc4cf5
- (BOOL)isSafeExternalURL;	// 0x33bc48c9
- (id)schemeSwizzledURL;	// 0x33bc4a71
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x33bc4c69
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x33bc45c9
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x33bc7ac5
@end

@interface NSURL (AOSURLAdditions)
@end

