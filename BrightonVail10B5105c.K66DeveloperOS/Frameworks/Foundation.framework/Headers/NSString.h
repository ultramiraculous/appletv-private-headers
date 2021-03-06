/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"


@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
}
+ (id)_web_stringRepresentationForBytes:(long long)bytes;	// 0x3612ff21
+ (id)allocWithZone:(NSZone *)zone;	// 0x3606cf29
+ (const unsigned *)availableStringEncodings;	// 0x3611b611
+ (unsigned)defaultCStringEncoding;	// 0x3611b225
+ (void)initialize;	// 0x36086341
+ (id)localizedNameOfStringEncoding:(unsigned)stringEncoding;	// 0x3611b691
+ (id)localizedStringWithFormat:(id)format;	// 0x36118691
+ (id)pathWithComponents:(id)components;	// 0x3609dd9d
+ (id)string;	// 0x36075fa5
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x361185f5
+ (id)stringWithCString:(const char *)cstring;	// 0x36118525
+ (id)stringWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x36080d19
+ (id)stringWithCString:(const char *)cstring length:(unsigned)length;	// 0x361185ad
+ (id)stringWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x36073679
+ (id)stringWithContentsOfFile:(id)file;	// 0x36118779
+ (id)stringWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x360b6d91
+ (id)stringWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x36118895
+ (id)stringWithContentsOfURL:(id)url;	// 0x361187b9
+ (id)stringWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x361187f9
+ (id)stringWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x36118845
+ (id)stringWithFormat:(id)format;	// 0x3606ced1
+ (id)stringWithFormat:(id)format locale:(id)locale;	// 0x36118709
+ (id)stringWithString:(id)string;	// 0x360a3dd1
+ (id)stringWithUTF8String:(const char *)utf8String;	// 0x36070731
+ (BOOL)supportsSecureCoding;	// 0x360b5421
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x3611a855
- (id)initWithCString:(const char *)cstring;	// 0x36119e11
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x36119ea5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x36119dc5
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3611a845
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x36119f21
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3611a835
- (id)initWithCoder:(id)coder;	// 0x3608d209
- (id)initWithContentsOfFile:(id)file;	// 0x3611a211
- (id)initWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x360b6de1
- (id)initWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x3611a6b9
- (id)initWithContentsOfURL:(id)url;	// 0x3611a279
- (id)initWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x3611a2e1
- (id)initWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x3611a4c5
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x3611a039
- (id)initWithData:(id)data usedEncoding:(unsigned *)encoding;	// 0x3611a7d9
- (id)initWithFormat:(id)format;	// 0x360735e5
- (id)initWithFormat:(id)format arguments:(void *)arguments;	// 0x360775ad
- (id)initWithFormat:(id)format locale:(id)locale;	// 0x360a4745
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x3611a865
- (id)initWithString:(id)string;	// 0x36119f91
- (id)initWithUTF8String:(const char *)utf8String;	// 0x3609455d
- (const char *)UTF8String;	// 0x3606f2c5
- (id)__escapeString5991;	// 0x360c6cc1
- (BOOL)_allowsDirectEncoding;	// 0x360b3285
- (unsigned long)_cfTypeID;	// 0x36097a49
- (id)_copyFormatStringWithConfiguration:(id)configuration;	// 0x3611b101
- (id)_createSubstringWithRange:(NSRange)range;	// 0x360cd889
- (unsigned char)_encodingCantBeStoredInEightBitCFString;	// 0x36084bfd
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x36070685
- (const unsigned short *)_fastCharacterContents;	// 0x36070669
- (unsigned long)_fastestEncodingInCFStringEncoding;	// 0x360735a9
- (void)_flushRegularExpressionCaches;	// 0x3606e379
- (void)_getBlockStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range stopAtLineSeparators:(BOOL)lineSeparators;	// 0x36096e91
- (BOOL)_getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned long)encoding;	// 0x3607ac21
- (id)_initWithBytesOfUnknownEncoding:(char *)unknownEncoding length:(unsigned)length copy:(BOOL)copy usedEncoding:(unsigned *)encoding;	// 0x3611a091
- (id)_initWithDataOfUnknownEncoding:(id)unknownEncoding;	// 0x3611a159
- (BOOL)_isCString;	// 0x361188e1
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x36089aad
- (NSRange)_rangeOfRegularExpressionPattern:(id)regularExpressionPattern options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x36170afd
- (unsigned long)_smallestEncodingInCFStringEncoding;	// 0x360cd9b5
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x36170c65
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x36086871
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x3607679d
- (id)_stringRepresentation;	// 0x36118901
- (id)_web_HTTPStyleLanguageCode;	// 0x3612ddad
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;	// 0x3612de85
- (id)_web_URLFragment;	// 0x3612fec5
- (id)_web_characterSetFromContentTypeHeader_nowarn;	// 0x36130cb1
- (int)_web_countOfString:(id)string;	// 0x3612f58d
- (id)_web_domainFromHost;	// 0x3612f86d
- (BOOL)_web_domainMatches:(id)matches;	// 0x3612f779
- (unsigned long)_web_extractFourCharCode;	// 0x36130461
- (id)_web_fileNameFromContentDispositionHeader_nowarn;	// 0x36130d6d
- (id)_web_filenameByFixingIllegalCharacters;	// 0x36130315
- (id)_web_fixedCarbonPOSIXPath;	// 0x3612fb01
- (BOOL)_web_hasCaseInsensitivePrefix:(id)prefix;	// 0x360ba535
- (BOOL)_web_hasCountryCodeTLD;	// 0x3612f705
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)string;	// 0x36082429
- (BOOL)_web_isFileURL;	// 0x3612fea5
- (BOOL)_web_isJavaScriptURL;	// 0x36131025
- (BOOL)_web_looksLikeAbsoluteURL;	// 0x3612fe5d
- (BOOL)_web_looksLikeIPAddress;	// 0x3612f601
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;	// 0x361309d5
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)nowarn;	// 0x361306f9
- (id)_web_parseAsKeyValuePair_nowarn;	// 0x361306e5
- (NSRange)_web_rangeOfURLHost;	// 0x3612fd6d
- (NSRange)_web_rangeOfURLResourceSpecifier_nowarn;	// 0x36130975
- (NSRange)_web_rangeOfURLScheme_nowarn;	// 0x36130891
- (NSRange)_web_rangeOfURLUserPasswordHostPort;	// 0x3612fca5
- (id)_web_splitAtNonDateCommas_nowarn;	// 0x361304dd
- (id)_web_stringByCollapsingNonPrintingCharacters;	// 0x36130141
- (id)_web_stringByExpandingTildeInPath;	// 0x3612fa85
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;	// 0x36130ea1
- (id)_web_stringByTrimmingWhitespace;	// 0x3612f9d9
- (BOOL)boolValue;	// 0x360b0975
- (const char *)cString;	// 0x3611b41d
- (unsigned)cStringLength;	// 0x36073261
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x36081731
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x3607cc31
- (id)capitalizedString;	// 0x36118f59
- (id)capitalizedStringWithLocale:(id)locale;	// 0x36118f6d
- (int)caseInsensitiveCompare:(id)compare;	// 0x36078b59
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x36118505
- (Class)classForCoder;	// 0x3611a875
- (id)commonPrefixWithString:(id)string options:(unsigned)options;	// 0x36118bc9
- (int)compare:(id)compare;	// 0x360b71d9
- (int)compare:(id)compare options:(unsigned)options;	// 0x36082451
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x36071bd5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x36071c01
- (unsigned)completePathIntoString:(id *)string caseSensitive:(BOOL)sensitive matchesIntoArray:(id *)array filterTypes:(id)types;	// 0x3610b9ed
- (id)componentsSeparatedByCharactersInSet:(id)set;	// 0x360bae6d
- (id)componentsSeparatedByString:(id)string;	// 0x36072b09
- (id)copyWithZone:(NSZone *)zone;	// 0x36118a39
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x36074ab9
- (id)dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x36074acd
- (XXStruct_9isexA)decimalValue;	// 0x3612bbed
- (id)decomposedStringWithCanonicalMapping;	// 0x36118fb1
- (id)decomposedStringWithCompatibilityMapping;	// 0x36118ff1
- (id)description;	// 0x3606d435
- (id)displayableString;	// 0x3611954d
- (double)doubleValue;	// 0x3607c729
- (void)encodeWithCoder:(id)coder;	// 0x360b95d5
- (void)enumerateLinesUsingBlock:(id)block;	// 0x361194bd
- (void)enumerateLinguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography usingBlock:(id)block;	// 0x3619d241
- (void)enumerateSubstringsInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x360c0b71
- (unsigned)fastestEncoding;	// 0x360735c5
- (const char *)fileSystemRepresentation;	// 0x3607a11d
- (float)floatValue;	// 0x360a4db9
- (id)formatConfiguration;	// 0x3611b17d
- (BOOL)getBytes:(char *)bytes maxLength:(unsigned)length filledLength:(unsigned *)length3 encoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x3607ac91
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x3606f119
- (void)getCString:(char *)string;	// 0x3611b3d5
- (void)getCString:(char *)string maxLength:(unsigned)length;	// 0x3611b395
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x360aa891
- (void)getCString:(char *)string maxLength:(unsigned)length range:(NSRange)range remainingRange:(NSRange *)range4;	// 0x3611b249
- (void)getCharacters:(unsigned short *)characters;	// 0x36090c35
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x360b7195
- (BOOL)getExternalRepresentation:(id *)representation extendedAttributes:(id *)attributes forWritingToURLOrPath:(id)urlorPath usingEncoding:(unsigned)encoding error:(id *)error;	// 0x36119a25
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length;	// 0x36079b25
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x361190c1
- (void)getParagraphStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x36096e59
- (BOOL)hasPrefix:(id)prefix;	// 0x3609b601
- (BOOL)hasSuffix:(id)suffix;	// 0x360a5655
- (unsigned)hash;	// 0x36118a75
- (int)intValue;	// 0x3607c09d
- (int)integerValue;	// 0x3607c08d
- (BOOL)isAbsolutePath;	// 0x36087125
- (BOOL)isEqual:(id)equal;	// 0x36071b29
- (BOOL)isEqualToString:(id)string;	// 0x36071b79
- (BOOL)isNSString__;	// 0x36086e95
- (id)lastPathComponent;	// 0x36084a51
- (unsigned)length;	// 0x361184e9
- (unsigned)lengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x36074f61
- (NSRange)lineRangeForRange:(NSRange)range;	// 0x361190f9
- (id)linguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography tokenRanges:(id *)ranges;	// 0x3619d14d
- (int)localizedCaseInsensitiveCompare:(id)compare;	// 0x36118a7d
- (int)localizedCompare:(id)compare;	// 0x360a4c69
- (int)localizedStandardCompare:(id)compare;	// 0x36118ad9
- (long long)longLongValue;	// 0x3607fb39
- (const char *)lossyCString;	// 0x3611b459
- (id)lowercaseString;	// 0x3607ccdd
- (id)lowercaseStringWithLocale:(id)locale;	// 0x3607ccf1
- (unsigned)maximumLengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x3611b4fd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x360ba741
- (NSRange)paragraphRangeForRange:(NSRange)range;	// 0x36119131
- (id)pathComponents;	// 0x36086f31
- (id)pathExtension;	// 0x36072ed1
- (id)precomposedStringWithCanonicalMapping;	// 0x36099011
- (id)precomposedStringWithCompatibilityMapping;	// 0x36119031
- (id)propertyList;	// 0x3611aa31
- (id)propertyListFromStringsFileFormat;	// 0x3611ab05
- (id)quotedStringRepresentation;	// 0x36095ed1
- (NSRange)rangeOfCharacterFromSet:(id)set;	// 0x3609974d
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options;	// 0x360b0b81
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options range:(NSRange)range;	// 0x36084035
- (NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned)index;	// 0x360a6871
- (NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)range;	// 0x36118b39
- (NSRange)rangeOfString:(id)string;	// 0x3606e131
- (NSRange)rangeOfString:(id)string options:(unsigned)options;	// 0x36080cc9
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x36072ca1
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x3606e181
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c7681
- (NSRange)significantText;	// 0x3617b9a9
- (unsigned)smallestEncoding;	// 0x3611b495
- (id)standardizedURLPath;	// 0x361278cd
- (id)stringByAbbreviatingWithTildeInPath;	// 0x3610b759
- (id)stringByAddingPercentEscapes;	// 0x36127d45
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x36127f4d
- (id)stringByAppendingFormat:(id)format;	// 0x3608a41d
- (id)stringByAppendingPathComponent:(id)component;	// 0x360708bd
- (id)stringByAppendingPathExtension:(id)extension;	// 0x360732dd
- (id)stringByAppendingString:(id)string;	// 0x3606ed81
- (id)stringByConvertingPathToURL;	// 0x3610c63d
- (id)stringByConvertingURLToPath;	// 0x3610c671
- (id)stringByDeletingLastPathComponent;	// 0x3607cf89
- (id)stringByDeletingPathExtension;	// 0x36099881
- (id)stringByExpandingTildeInPath;	// 0x36097989
- (id)stringByFoldingWithOptions:(unsigned)options locale:(id)locale;	// 0x36119071
- (id)stringByPaddingToLength:(unsigned)length withString:(id)string startingAtIndex:(unsigned)index;	// 0x36118df1
- (id)stringByRemovingPercentEscapes;	// 0x36127d0d
- (id)stringByReplacingCharactersInRange:(NSRange)range withString:(id)string;	// 0x36082d51
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2;	// 0x36073119
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x3607315d
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x36091be1
- (id)stringByResolvingSymlinksInPath;	// 0x3610b879
- (id)stringByStandardizingPath;	// 0x36076789
- (id)stringByTrimmingCharactersInSet:(id)set;	// 0x360847c9
- (id)stringsByAppendingPaths:(id)paths;	// 0x3610b88d
- (id)substringFromIndex:(unsigned)index;	// 0x3606e43d
- (id)substringToIndex:(unsigned)index;	// 0x3606e3b1
- (id)substringWithRange:(NSRange)range;	// 0x360899b5
- (id)uppercaseString;	// 0x360a5561
- (id)uppercaseStringWithLocale:(id)locale;	// 0x360a5575
- (id)urlPathRelativeToPath:(id)path;	// 0x36127d85
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x36119d11
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x36119cf5
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x36119d4d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x36119bbd
@end

