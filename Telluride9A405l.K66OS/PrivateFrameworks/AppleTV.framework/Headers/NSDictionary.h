/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (CaseInsenitiveString)
- (id)objectForCaseInsensitiveString:(id)caseInsensitiveString;	// 0x35eaeced
@end

@interface NSDictionary (BRDictionaryAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x35ebd459
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary;	// 0x35ebd11d
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary cachePolicy:(unsigned)policy;	// 0x35ebd141
- (id)URLQueryString;	// 0x35ebd5d1
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x35ebd5e5
- (void)__purgeCachedLocalizedData:(id)data;	// 0x35ebd401
- (id)deepCopy;	// 0x35ebd5a1
- (id)deepMutableCopy;	// 0x35ebd5b9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x35ebd535
@end

@interface NSDictionary (FeedAdditions)
- (id)_lookupFeedValueForKey:(id)key expectedClass:(Class)aClass;	// 0x35eee8cd
- (id)arrayForFeedKey:(id)feedKey;	// 0x35eeea99
- (BOOL)boolForFeedKey:(id)feedKey defaultValue:(BOOL)value;	// 0x35eee9e9
- (id)dateForFeedKey:(id)feedKey;	// 0x35eeea19
- (id)dictionaryForFeedKey:(id)feedKey;	// 0x35eeea59
- (id)numberForFeedKey:(id)feedKey;	// 0x35eee969
- (id)stringForFeedKey:(id)feedKey;	// 0x35eee9a9
@end

