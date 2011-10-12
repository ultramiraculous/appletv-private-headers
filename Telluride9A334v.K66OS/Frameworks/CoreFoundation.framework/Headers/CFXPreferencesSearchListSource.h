/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSearchListSource : CFXPreferencesSource {
@private
	CFArrayRef _sourceList;	// 16 = 0x10
}
- (id)init;	// 0x34875511
- (void)_removeValueForKey:(CFStringRef)key;	// 0x348ed53d
- (void)addSource:(id)source;	// 0x34875fa1
- (CFDictionaryRef)copyDictionary;	// 0x3487a6f9
- (CFArrayRef)copyKeyList;	// 0x3487a88d
- (void)dealloc;	// 0x348ed6e1
- (long)generationCount;	// 0x3487a821
- (void *)getValueForKey:(CFStringRef)key;	// 0x348480e5
- (void)removeSource:(id)source;	// 0x348ed699
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x348ed5e1
- (unsigned char)synchronize;	// 0x34876b79
- (void)synchronizeInBackgroundWithCompletionBlock:(id)completionBlock;	// 0x34866049
@end

