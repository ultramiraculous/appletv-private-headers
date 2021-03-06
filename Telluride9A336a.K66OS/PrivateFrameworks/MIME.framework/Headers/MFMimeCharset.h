/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MFMimeCharset : NSObject {
	unsigned _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *charsetName;	// G=0x3507e43d; converted property
@property(readonly, retain) NSString *primaryLanguage;	// G=0x3507db1d; converted property
+ (id)allMimeCharsets;	// 0x3507dc7d
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x3507dc91
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x3507dc1d
+ (id)preferredMimeCharset;	// 0x3507dbd5
- (id)initWithEncoding:(unsigned long)encoding;	// 0x3507e4a1
- (void)_setPrimaryLanguage:(id)language;	// 0x3507db2d
- (BOOL)canBeUsedForOutgoingMessages;	// 0x3507dae1
// converted property getter: - (id)charsetName;	// 0x3507e43d
- (BOOL)coversLargeUnicodeSubset;	// 0x3507daf5
- (void)dealloc;	// 0x3507db75
- (id)description;	// 0x3507e35d
- (id)displayName;	// 0x3507e3f9
- (unsigned long)encoding;	// 0x3507dad1
// converted property getter: - (id)primaryLanguage;	// 0x3507db1d
- (BOOL)useBase64InHeaders;	// 0x3507db09
@end

