/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library


@interface NSCoder (XPCSafeDecoding)
- (id)_safeDecodeContainerForKey:(id)key containerClass:(Class)aClass valueClass:(Class)aClass3;	// 0x366fa5ad
- (id)safeDecodeArrayForKey:(id)key valueClass:(Class)aClass;	// 0x366fa681
- (id)safeDecodeDateForKey:(id)key;	// 0x366fa52d
- (id)safeDecodeDictionaryForKey:(id)key keyClass:(Class)aClass valueClass:(Class)aClass3;	// 0x366fa709
- (id)safeDecodeNumberForKey:(id)key;	// 0x366fa56d
- (id)safeDecodeObjectForKey:(id)key expectedClass:(Class)aClass;	// 0x366fa4b5
- (id)safeDecodeSetForKey:(id)key valueClass:(Class)aClass;	// 0x366fa6c5
- (id)safeDecodeStringForKey:(id)key;	// 0x366fa4ed
@end
