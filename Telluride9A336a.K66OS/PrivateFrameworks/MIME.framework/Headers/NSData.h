/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x35077a65
- (id)mf_subdataWithRange:(NSRange)range;	// 0x35077a9d
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x3507f251
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x3507f259
- (id)mf_decodeModifiedBase64;	// 0x3507f261
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x3507eebd
- (id)mf_decodeUuencoded;	// 0x3507ef5d
- (id)mf_encodeBase64;	// 0x3507f0d5
- (id)mf_encodeBase64HeaderData;	// 0x3507f0ed
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x3507f0c9
- (id)mf_encodeModifiedBase64;	// 0x3507f0e1
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x350811d9
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x350817cd
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x350812a1
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x35081699
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x35081151
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x350816e5
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x3508172d
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x35081775
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x35081645
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x350815dd
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x3508111d
- (id)mf_subdataToIndex:(unsigned)index;	// 0x35081109
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x3509e50d
@end

