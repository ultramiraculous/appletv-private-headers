/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSURL.h> // Unknown library


@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x3692457d
+ (id)escapedStringForString:(id)string;	// 0x36924705
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x36924745
+ (id)unescapedStringForString:(id)string;	// 0x36924845
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x36924891
- (void)enumerateQueryWithBlock:(id)block;	// 0x369251b9
- (BOOL)isSafeExternalURL;	// 0x36924c09
- (id)schemeSwizzledURL;	// 0x36924e15
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x3692512d
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x369248cd
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x3692f371
@end

