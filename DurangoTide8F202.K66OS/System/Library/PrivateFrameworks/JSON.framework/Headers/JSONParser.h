/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

#import "JSON.h"


__attribute__((visibility("hidden")))
@interface JSONParser : JSON {
@private
	char *c;	// 16 = 0x10
	char *start;	// 20 = 0x14
	char *end;	// 24 = 0x18
}
- (id)newScanArray;	// 0x310cee81
- (id)newScanConstant;	// 0x310cf4c5
- (id)newScanDictionary;	// 0x310ceb35
- (id)newScanNumber;	// 0x310ce61d
- (id)newScanString;	// 0x310cf5f9
- (id)newScanValue;	// 0x310cf0a5
- (id)objectWithData:(id)data;	// 0x310cf1e5
- (BOOL)scanHexQuad:(unsigned short *)quad;	// 0x310ce97d
- (BOOL)scanIsAtEnd;	// 0x310ce5c1
- (BOOL)scanUnicodeChar:(unsigned short *)aChar;	// 0x310cea35
- (void)setErrorWithCode:(unsigned)code string:(id)string;	// 0x310cf999
- (unsigned)stringEncodingForJSONData:(id)jsondata;	// 0x310cf44d
@end

