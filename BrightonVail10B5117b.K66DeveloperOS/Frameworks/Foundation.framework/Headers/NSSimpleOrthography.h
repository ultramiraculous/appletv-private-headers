/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x31a40249; converted property
+ (void)initialize;	// 0x31a3feed
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x31a3ff39
- (id)initWithCoder:(id)coder;	// 0x31a40125
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x31a40019
- (id)initWithFlags:(unsigned)flags;	// 0x31a3ff79
- (id)allLanguages;	// 0x31a40341
- (id)allScripts;	// 0x31a40325
- (Class)classForCoder;	// 0x31a400a1
- (id)dominantLanguage;	// 0x31a40305
- (id)dominantLanguageForScript:(id)script;	// 0x31a402c1
- (id)dominantScript;	// 0x31a4020d
- (void)encodeWithCoder:(id)coder;	// 0x31a400b1
- (id)languageMap;	// 0x31a4022d
- (id)languagesForScript:(id)script;	// 0x31a40259
// converted property getter: - (unsigned)orthographyFlags;	// 0x31a40249
@end

