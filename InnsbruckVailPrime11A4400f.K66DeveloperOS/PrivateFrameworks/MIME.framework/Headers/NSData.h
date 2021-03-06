/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSData.h>
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x312c9d69
- (id)mf_subdataWithRange:(NSRange)range;	// 0x312c9c71
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x312d273d
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x312d28ad
- (id)mf_decodeModifiedBase64;	// 0x312d28b5
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x312d25ad
- (id)mf_decodeUuencoded;	// 0x312d2681
- (id)mf_encodeBase64;	// 0x312d29d5
- (id)mf_encodeBase64HeaderData;	// 0x312d29ed
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x312d28bd
- (id)mf_encodeModifiedBase64;	// 0x312d29e1
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x312d4e91
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x312d4d05
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x312d4c49
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x312d4b41
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x312d4ac1
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x312d4b8d
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x312d4bd5
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x312d4c1d
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x312d4a6d
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x312d482d
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x312d4a39
- (id)mf_subdataToIndex:(unsigned)index;	// 0x312d4a25
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x312f44e1
@end

