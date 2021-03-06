/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
@private
	unsigned _lengthAndRefCount;	// 4 = 0x4
	unsigned short _characters[0];	// 8 = 0x8
}
+ (id)pathStoreWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x319e4b89
+ (id)pathWithComponents:(id)components;	// 0x319f1da5
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x319ec875
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x319f0545
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x319eca49
- (id)copyWithZone:(NSZone *)zone;	// 0x319ec9ed
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x319e6671
- (unsigned)hash;	// 0x319ec851
- (BOOL)isAbsolutePath;	// 0x319f2475
- (BOOL)isEqualToString:(id)string;	// 0x319e4c45
- (id)lastPathComponent;	// 0x31a02909
- (unsigned)length;	// 0x319e665d
- (id)pathComponents;	// 0x31a7988d
- (id)pathExtension;	// 0x319ec105
- (id)stringByAbbreviatingWithTildeInPath;	// 0x31a129c5
- (id)stringByAppendingPathComponent:(id)component;	// 0x319ea0c5
- (id)stringByAppendingPathExtension:(id)extension;	// 0x31a010b9
- (id)stringByDeletingLastPathComponent;	// 0x319ec081
- (id)stringByDeletingPathExtension;	// 0x31a0282d
- (id)stringByExpandingTildeInPath;	// 0x31a12651
- (id)stringByResolvingSymlinksInPath;	// 0x31a1071d
- (id)stringByStandardizingPath;	// 0x31a103e9
@end

